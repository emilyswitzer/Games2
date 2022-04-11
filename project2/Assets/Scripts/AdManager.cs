using System.Collections;
using System.Collections.Generic;
using GoogleMobileAds.Api;
using System;
using UnityEngine;

public class AdManager : MonoBehaviour
{

    private BannerView bannerAd;
    private InterstitialAd interstitial;
    private RewardedAd rewardedAd;
    public static AdManager instance;

    private void Awake()
    {
        if(instance == null) {
            instance = this; 
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        MobileAds.Initialize(InititizationStatus => { });
     
        this.RequestBanner();

    }

    private AdRequest CreateAdRequest()
    {
        return new AdRequest.Builder().Build();
    }
    private void RequestBanner()
    {
        string adUnitID = "ca-app-pub-3940256099942544/6300978111";
        this.bannerAd = new BannerView(adUnitID, AdSize.SmartBanner, AdPosition.Bottom);
     
        this.bannerAd.LoadAd(CreateAdRequest());
    }
    public void RequestInterstitial()
    {
        string adUnitID = "ca-app-pub-3940256099942544/1033173712";
        if(this.interstitial != null)
        {
            this.interstitial.Destroy();
        }

        this.interstitial = new InterstitialAd(adUnitID);

        this.interstitial.LoadAd(this.CreateAdRequest());
    }

    public void RequestRewardAd()
    {
        rewardedAd = new RewardedAd("ca-app-pub-3940256099942544/5224354917");
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        AdRequest request = new AdRequest.Builder().Build();
        rewardedAd.LoadAd(request);


    }

    public void ShowRequestRewardAd()
    {
        if (rewardedAd.IsLoaded())
        {
            rewardedAd.Show();
        }
    }

    public void ShowInterstitial()
    {
        if (this.interstitial.IsLoaded()){
            interstitial.Show();
        }
      
    }

    public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
    {
        RequestRewardAd();
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        RequestRewardAd();
    }
    public void HandleUserEarnedReward(object sender, Reward args)
    {
        RequestRewardAd();
    }

    // Update is called once per frame
    void Update()
    {
        RequestRewardAd();
    }
}
