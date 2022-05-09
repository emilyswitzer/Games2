#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000012 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000013 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000015 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000016 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000024 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003D System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000003F TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000040 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000041 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000042 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000058 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000005B System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005C System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005D System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005E System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x0000005F System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000060 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000063 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000064 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000065 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000066 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[102] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[102] = 
{
	2112,
	2196,
	2196,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[31] = 
{
	{ 0x02000004, { 55, 4 } },
	{ 0x02000005, { 59, 9 } },
	{ 0x02000006, { 70, 7 } },
	{ 0x02000007, { 79, 10 } },
	{ 0x02000008, { 91, 11 } },
	{ 0x02000009, { 105, 9 } },
	{ 0x0200000A, { 117, 12 } },
	{ 0x0200000B, { 132, 1 } },
	{ 0x0200000C, { 133, 2 } },
	{ 0x0200000D, { 135, 4 } },
	{ 0x0200000E, { 139, 34 } },
	{ 0x02000010, { 173, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 2 } },
	{ 0x0600000A, { 35, 4 } },
	{ 0x0600000B, { 39, 3 } },
	{ 0x0600000C, { 42, 1 } },
	{ 0x0600000D, { 43, 3 } },
	{ 0x0600000E, { 46, 2 } },
	{ 0x0600000F, { 48, 2 } },
	{ 0x06000010, { 50, 5 } },
	{ 0x06000020, { 68, 2 } },
	{ 0x06000025, { 77, 2 } },
	{ 0x0600002A, { 89, 2 } },
	{ 0x06000030, { 102, 3 } },
	{ 0x06000035, { 114, 3 } },
	{ 0x0600003A, { 129, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[175] = 
{
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)3, 3354 },
	{ (Il2CppRGCTXDataType)2, 2007 },
	{ (Il2CppRGCTXDataType)2, 1714 },
	{ (Il2CppRGCTXDataType)3, 5711 },
	{ (Il2CppRGCTXDataType)2, 1359 },
	{ (Il2CppRGCTXDataType)2, 1721 },
	{ (Il2CppRGCTXDataType)3, 5729 },
	{ (Il2CppRGCTXDataType)2, 1716 },
	{ (Il2CppRGCTXDataType)3, 5718 },
	{ (Il2CppRGCTXDataType)2, 1296 },
	{ (Il2CppRGCTXDataType)3, 3355 },
	{ (Il2CppRGCTXDataType)2, 2021 },
	{ (Il2CppRGCTXDataType)2, 1723 },
	{ (Il2CppRGCTXDataType)3, 5736 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)2, 1731 },
	{ (Il2CppRGCTXDataType)3, 5755 },
	{ (Il2CppRGCTXDataType)2, 1727 },
	{ (Il2CppRGCTXDataType)3, 5745 },
	{ (Il2CppRGCTXDataType)2, 505 },
	{ (Il2CppRGCTXDataType)3, 106 },
	{ (Il2CppRGCTXDataType)3, 107 },
	{ (Il2CppRGCTXDataType)2, 906 },
	{ (Il2CppRGCTXDataType)3, 2548 },
	{ (Il2CppRGCTXDataType)2, 510 },
	{ (Il2CppRGCTXDataType)3, 128 },
	{ (Il2CppRGCTXDataType)3, 129 },
	{ (Il2CppRGCTXDataType)2, 910 },
	{ (Il2CppRGCTXDataType)3, 2550 },
	{ (Il2CppRGCTXDataType)2, 655 },
	{ (Il2CppRGCTXDataType)3, 624 },
	{ (Il2CppRGCTXDataType)3, 625 },
	{ (Il2CppRGCTXDataType)2, 1360 },
	{ (Il2CppRGCTXDataType)3, 3687 },
	{ (Il2CppRGCTXDataType)2, 1244 },
	{ (Il2CppRGCTXDataType)2, 982 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)2, 1114 },
	{ (Il2CppRGCTXDataType)2, 1058 },
	{ (Il2CppRGCTXDataType)2, 1115 },
	{ (Il2CppRGCTXDataType)3, 2549 },
	{ (Il2CppRGCTXDataType)2, 1050 },
	{ (Il2CppRGCTXDataType)2, 1051 },
	{ (Il2CppRGCTXDataType)2, 1112 },
	{ (Il2CppRGCTXDataType)3, 2547 },
	{ (Il2CppRGCTXDataType)2, 981 },
	{ (Il2CppRGCTXDataType)2, 1056 },
	{ (Il2CppRGCTXDataType)2, 980 },
	{ (Il2CppRGCTXDataType)3, 6924 },
	{ (Il2CppRGCTXDataType)3, 2249 },
	{ (Il2CppRGCTXDataType)2, 818 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)2, 1113 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)3, 3356 },
	{ (Il2CppRGCTXDataType)3, 3358 },
	{ (Il2CppRGCTXDataType)2, 337 },
	{ (Il2CppRGCTXDataType)3, 3357 },
	{ (Il2CppRGCTXDataType)3, 3366 },
	{ (Il2CppRGCTXDataType)2, 1299 },
	{ (Il2CppRGCTXDataType)2, 1717 },
	{ (Il2CppRGCTXDataType)3, 5719 },
	{ (Il2CppRGCTXDataType)3, 3367 },
	{ (Il2CppRGCTXDataType)2, 1086 },
	{ (Il2CppRGCTXDataType)2, 1133 },
	{ (Il2CppRGCTXDataType)3, 2555 },
	{ (Il2CppRGCTXDataType)3, 6915 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)3, 5746 },
	{ (Il2CppRGCTXDataType)3, 3359 },
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)2, 1715 },
	{ (Il2CppRGCTXDataType)3, 5712 },
	{ (Il2CppRGCTXDataType)3, 2554 },
	{ (Il2CppRGCTXDataType)3, 3360 },
	{ (Il2CppRGCTXDataType)3, 6914 },
	{ (Il2CppRGCTXDataType)2, 1724 },
	{ (Il2CppRGCTXDataType)3, 5737 },
	{ (Il2CppRGCTXDataType)3, 3373 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)2, 1722 },
	{ (Il2CppRGCTXDataType)3, 5730 },
	{ (Il2CppRGCTXDataType)3, 3725 },
	{ (Il2CppRGCTXDataType)3, 1866 },
	{ (Il2CppRGCTXDataType)3, 2556 },
	{ (Il2CppRGCTXDataType)3, 1865 },
	{ (Il2CppRGCTXDataType)3, 3374 },
	{ (Il2CppRGCTXDataType)3, 6916 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)3, 5756 },
	{ (Il2CppRGCTXDataType)3, 3387 },
	{ (Il2CppRGCTXDataType)2, 1302 },
	{ (Il2CppRGCTXDataType)2, 1730 },
	{ (Il2CppRGCTXDataType)3, 5748 },
	{ (Il2CppRGCTXDataType)3, 3388 },
	{ (Il2CppRGCTXDataType)2, 1089 },
	{ (Il2CppRGCTXDataType)2, 1136 },
	{ (Il2CppRGCTXDataType)3, 2560 },
	{ (Il2CppRGCTXDataType)3, 2559 },
	{ (Il2CppRGCTXDataType)2, 1719 },
	{ (Il2CppRGCTXDataType)3, 5721 },
	{ (Il2CppRGCTXDataType)3, 6919 },
	{ (Il2CppRGCTXDataType)2, 1729 },
	{ (Il2CppRGCTXDataType)3, 5747 },
	{ (Il2CppRGCTXDataType)3, 3380 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)2, 1726 },
	{ (Il2CppRGCTXDataType)3, 5739 },
	{ (Il2CppRGCTXDataType)3, 2558 },
	{ (Il2CppRGCTXDataType)3, 2557 },
	{ (Il2CppRGCTXDataType)3, 3381 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)3, 5720 },
	{ (Il2CppRGCTXDataType)3, 6918 },
	{ (Il2CppRGCTXDataType)2, 1725 },
	{ (Il2CppRGCTXDataType)3, 5738 },
	{ (Il2CppRGCTXDataType)3, 3394 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)2, 1734 },
	{ (Il2CppRGCTXDataType)3, 5758 },
	{ (Il2CppRGCTXDataType)3, 3726 },
	{ (Il2CppRGCTXDataType)3, 1868 },
	{ (Il2CppRGCTXDataType)3, 2562 },
	{ (Il2CppRGCTXDataType)3, 2561 },
	{ (Il2CppRGCTXDataType)3, 1867 },
	{ (Il2CppRGCTXDataType)3, 3395 },
	{ (Il2CppRGCTXDataType)2, 1720 },
	{ (Il2CppRGCTXDataType)3, 5722 },
	{ (Il2CppRGCTXDataType)3, 6920 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)3, 5757 },
	{ (Il2CppRGCTXDataType)3, 2552 },
	{ (Il2CppRGCTXDataType)3, 2553 },
	{ (Il2CppRGCTXDataType)3, 2563 },
	{ (Il2CppRGCTXDataType)2, 983 },
	{ (Il2CppRGCTXDataType)2, 2024 },
	{ (Il2CppRGCTXDataType)2, 1068 },
	{ (Il2CppRGCTXDataType)2, 1116 },
	{ (Il2CppRGCTXDataType)3, 2265 },
	{ (Il2CppRGCTXDataType)2, 826 },
	{ (Il2CppRGCTXDataType)3, 2709 },
	{ (Il2CppRGCTXDataType)3, 2710 },
	{ (Il2CppRGCTXDataType)2, 970 },
	{ (Il2CppRGCTXDataType)3, 2713 },
	{ (Il2CppRGCTXDataType)2, 970 },
	{ (Il2CppRGCTXDataType)3, 2714 },
	{ (Il2CppRGCTXDataType)2, 984 },
	{ (Il2CppRGCTXDataType)3, 2718 },
	{ (Il2CppRGCTXDataType)3, 2722 },
	{ (Il2CppRGCTXDataType)3, 2721 },
	{ (Il2CppRGCTXDataType)2, 2074 },
	{ (Il2CppRGCTXDataType)3, 2712 },
	{ (Il2CppRGCTXDataType)3, 2711 },
	{ (Il2CppRGCTXDataType)3, 2719 },
	{ (Il2CppRGCTXDataType)2, 1171 },
	{ (Il2CppRGCTXDataType)3, 2716 },
	{ (Il2CppRGCTXDataType)3, 7168 },
	{ (Il2CppRGCTXDataType)2, 804 },
	{ (Il2CppRGCTXDataType)3, 1859 },
	{ (Il2CppRGCTXDataType)1, 1037 },
	{ (Il2CppRGCTXDataType)2, 2030 },
	{ (Il2CppRGCTXDataType)3, 2715 },
	{ (Il2CppRGCTXDataType)1, 2030 },
	{ (Il2CppRGCTXDataType)1, 1171 },
	{ (Il2CppRGCTXDataType)2, 2074 },
	{ (Il2CppRGCTXDataType)2, 2030 },
	{ (Il2CppRGCTXDataType)2, 1070 },
	{ (Il2CppRGCTXDataType)2, 1118 },
	{ (Il2CppRGCTXDataType)3, 2720 },
	{ (Il2CppRGCTXDataType)3, 2717 },
	{ (Il2CppRGCTXDataType)3, 2723 },
	{ (Il2CppRGCTXDataType)2, 232 },
	{ (Il2CppRGCTXDataType)3, 1869 },
	{ (Il2CppRGCTXDataType)2, 346 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	102,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	31,
	s_rgctxIndices,
	175,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
