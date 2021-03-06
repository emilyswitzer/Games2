using System;

namespace UnityEngine.Advertisements
{
    /// <summary>
    /// A collection of options that you can pass to <c>Advertisement.Show</c>, to modify ad behaviour. Use <c>ShowOptions.resultCallback</c> to pass a <a>ShowResult</a> enum back to <c>Show</c> when the ad finishes.
    /// </summary>
    public class ShowOptions
    {
        /// <summary>
        /// Add a string to specify an identifier for a specific user in the game.
        /// </summary>
        public string gamerSid { get; set; }
    }
}
