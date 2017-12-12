/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/vagrant/nim-0.17.2/lib -o /vagrant/bin_python/nimcache/stdlib_os.o /vagrant/bin_python/nimcache/stdlib_os.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_IndexError_b0IIwghFQBADkB2c86kXQA tyObject_IndexError_b0IIwghFQBADkB2c86kXQA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
Exception* up;
};
struct tyObject_IndexError_b0IIwghFQBADkB2c86kXQA {
  Exception Sup;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef long tyArray_QS4edQct6fXoghbs69aZ9a8w[3];
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
static N_INLINE(NimStringDesc*, pop_9cDsfK2acP02vJ9bhxIE9caEAos)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ** s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, getApplAux_Cd6LaCdd4j2y8pff6G0r9aw)(NimStringDesc* procPath);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(NimStringDesc*, getApplHeuristic_Mvl1mQZZxpEWtJIYJ85UWw)(void);
N_NIMCALL(NimStringDesc*, paramStr_eYicl3uwirn1ppNz7OCowg)(NI i);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, getEnv_rVXof6qIUKJ3J9cw79conT2g)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI_z58cIdR0vOibqJ0QwYvB3Q_;
extern TNimType NTI_b0IIwghFQBADkB2c86kXQA_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_5, "/proc/self/exe", 14);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_6, "invalid index", 13);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_7, "PATH", 4);

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NimStringDesc*, pop_9cDsfK2acP02vJ9bhxIE9caEAos)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ** s) {
	NimStringDesc* result;
	NI L;
	NI T1_;
	NI TM_yu6cxgKBBXbNsTkT9cyMd4g_2;
	nimfr_("pop", "system.nim");
	result = (NimStringDesc*)0;
	nimln_(2324, "system.nim");
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	TM_yu6cxgKBBXbNsTkT9cyMd4g_2 = subInt(T1_, ((NI) 1));
	L = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_2);
	nimln_(2325, "system.nim");
	if ((NU)(L) >= (NU)((*s)->Sup.len)) raiseIndexError();
	result = copyString((*s)->data[L]);
	nimln_(2326, "system.nim");
	(*s) = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) setLengthSeq(&((*s))->Sup, sizeof(NimStringDesc*), ((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
	return result;
}

N_NIMCALL(NI, paramCount_T74rCHY8RMV0X07YnKmggw)(void) {
	NI result;
	NI TM_yu6cxgKBBXbNsTkT9cyMd4g_3;
	nimfr_("paramCount", "os.nim");
	result = (NI)0;
	nimln_(1270, "os.nim");
	TM_yu6cxgKBBXbNsTkT9cyMd4g_3 = subInt(cmdCount, ((NI32) 1));
	if (TM_yu6cxgKBBXbNsTkT9cyMd4g_3 < (-2147483647 -1) || TM_yu6cxgKBBXbNsTkT9cyMd4g_3 > 2147483647) raiseOverflow();
	result = ((NI) ((NI32)(TM_yu6cxgKBBXbNsTkT9cyMd4g_3)));
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getApplAux_Cd6LaCdd4j2y8pff6G0r9aw)(NimStringDesc* procPath) {
	NimStringDesc* result;
	NI len;
	nimfr_("getApplAux", "os.nim");
	result = (NimStringDesc*)0;
	nimln_(1328, "os.nim");
	result = mnewString(((NI) 256));
	nimln_(1329, "os.nim");
	len = readlink(procPath->data, result->data, ((NI) 256));
	nimln_(1330, "os.nim");
	{
		NI TM_yu6cxgKBBXbNsTkT9cyMd4g_4;
		if (!(((NI) 256) < len)) goto LA3_;
		nimln_(1331, "os.nim");
		TM_yu6cxgKBBXbNsTkT9cyMd4g_4 = addInt(len, ((NI) 1));
		result = mnewString(((NI)chckRange((NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_4), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		nimln_(1332, "os.nim");
		len = readlink(procPath->data, result->data, len);
	}
	LA3_: ;
	nimln_(1333, "os.nim");
	result = setLengthStr(result, ((NI)chckRange(len, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(255, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(257, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(258, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(269, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(378, "system.nim");
		nimln_(269, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(270, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(378, "system.nim");
		nimln_(270, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(271, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(NimStringDesc*, paramStr_eYicl3uwirn1ppNz7OCowg)(NI i) {
	NimStringDesc* result;
	tyObject_IndexError_b0IIwghFQBADkB2c86kXQA* e;
	NimStringDesc* T7_;
	nimfr_("paramStr", "os.nim");
{	result = (NimStringDesc*)0;
	nimln_(1265, "os.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (i < ((NI) (cmdCount)));
		if (!(T3_)) goto LA4_;
		T3_ = (((NI) 0) <= i);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = cstrToNimstr(cmdLine[(i)- 0]);
		goto BeforeRet_;
	}
	LA5_: ;
	e = (tyObject_IndexError_b0IIwghFQBADkB2c86kXQA*)0;
	nimln_(2702, "system.nim");
	e = (tyObject_IndexError_b0IIwghFQBADkB2c86kXQA*) newObj((&NTI_z58cIdR0vOibqJ0QwYvB3Q_), sizeof(tyObject_IndexError_b0IIwghFQBADkB2c86kXQA));
	(*e).Sup.Sup.m_type = (&NTI_b0IIwghFQBADkB2c86kXQA_);
	nimln_(1266, "os.nim");
	T7_ = (NimStringDesc*)0;
	T7_ = (*e).Sup.message; (*e).Sup.message = copyStringRC1(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_6));
	if (T7_) nimGCunrefNoCycle(T7_);
	nimln_(2697, "system.nim");
	asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
	nimln_(1266, "os.nim");
	raiseException((Exception*)e, "IndexError");
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	nimfr_("existsFile", "os.nim");
{	result = (NIM_BOOL)0;
	memset((void*)(&res), 0, sizeof(res));
	nimln_(83, "os.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(filename->data, (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISREG(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, getApplHeuristic_Mvl1mQZZxpEWtJIYJ85UWw)(void) {
	NimStringDesc* result;
	nimfr_("getApplHeuristic", "os.nim");
{	result = (NimStringDesc*)0;
	nimln_(1338, "os.nim");
	result = paramStr_eYicl3uwirn1ppNz7OCowg(((NI) 0));
	nimln_(1341, "os.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) < (result ? result->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		nimln_(378, "system.nim");
		nimln_(1341, "os.nim");
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		T3_ = !(((NU8)(result->data[((NI) 0)]) == (NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		{
			NimStringDesc* p;
			NimStringDesc* colontmp_;
			NI last;
			NI splits;
			p = (NimStringDesc*)0;
			colontmp_ = (NimStringDesc*)0;
			nimln_(1343, "os.nim");
			colontmp_ = getEnv_rVXof6qIUKJ3J9cw79conT2g(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_7));
			nimln_(504, "strutils.nim");
			last = ((NI) 0);
			nimln_(505, "strutils.nim");
			splits = ((NI) -1);
			nimln_(577, "strutils.nim");
			{
				nimln_(507, "strutils.nim");
				nimln_(577, "strutils.nim");
				if (!(((NI) 0) < (colontmp_ ? colontmp_->Sup.len : 0))) goto LA10_;
				{
					nimln_(508, "strutils.nim");
					while (1) {
						NI first;
						NI TM_yu6cxgKBBXbNsTkT9cyMd4g_9;
						NimStringDesc* x;
						NI TM_yu6cxgKBBXbNsTkT9cyMd4g_10;
						NI TM_yu6cxgKBBXbNsTkT9cyMd4g_11;
						nimln_(577, "strutils.nim");
						if (!(last <= (colontmp_ ? colontmp_->Sup.len : 0))) goto LA13;
						nimln_(509, "strutils.nim");
						first = last;
						{
							nimln_(510, "strutils.nim");
							while (1) {
								NIM_BOOL T16_;
								NI TM_yu6cxgKBBXbNsTkT9cyMd4g_8;
								T16_ = (NIM_BOOL)0;
								nimln_(577, "strutils.nim");
								T16_ = (last < (colontmp_ ? colontmp_->Sup.len : 0));
								if (!(T16_)) goto LA17_;
								nimln_(510, "strutils.nim");
								nimln_(1343, "os.nim");
								if ((NU)(last) > (NU)(colontmp_->Sup.len)) raiseIndexError();
								T16_ = !((((NU8)(colontmp_->data[last])) == ((NU8)(58))));
								LA17_: ;
								if (!T16_) goto LA15;
								nimln_(511, "strutils.nim");
								TM_yu6cxgKBBXbNsTkT9cyMd4g_8 = addInt(last, ((NI) 1));
								last = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_8);
							} LA15: ;
						}
						nimln_(512, "strutils.nim");
						{
							if (!(splits == ((NI) 0))) goto LA20_;
							nimln_(577, "strutils.nim");
							last = (colontmp_ ? colontmp_->Sup.len : 0);
						}
						LA20_: ;
						nimln_(513, "strutils.nim");
						TM_yu6cxgKBBXbNsTkT9cyMd4g_9 = subInt(last, ((NI) 1));
						p = copyStrLast(colontmp_, first, (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_9));
						nimln_(1344, "os.nim");
						x = nosjoinPath(p, result);
						nimln_(1345, "os.nim");
						{
							NIM_BOOL T24_;
							T24_ = (NIM_BOOL)0;
							T24_ = nosexistsFile(x);
							if (!T24_) goto LA25_;
							result = copyString(x);
							goto BeforeRet_;
						}
						LA25_: ;
						nimln_(514, "strutils.nim");
						{
							if (!(splits == ((NI) 0))) goto LA29_;
							goto LA12;
						}
						LA29_: ;
						nimln_(515, "strutils.nim");
						TM_yu6cxgKBBXbNsTkT9cyMd4g_10 = subInt(splits, ((NI) 1));
						splits = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_10);
						nimln_(516, "strutils.nim");
						TM_yu6cxgKBBXbNsTkT9cyMd4g_11 = addInt(last, ((NI) 1));
						last = (NI)(TM_yu6cxgKBBXbNsTkT9cyMd4g_11);
					} LA13: ;
				} LA12: ;
			}
			LA10_: ;
		}
	}
	LA5_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	nimfr_("getAppFilename", "os.nim");
	result = (NimStringDesc*)0;
	nimln_(1408, "os.nim");
	result = getApplAux_Cd6LaCdd4j2y8pff6G0r9aw(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_5));
	nimln_(1416, "os.nim");
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3_;
		nimln_(1417, "os.nim");
		result = getApplHeuristic_Mvl1mQZZxpEWtJIYJ85UWw();
	}
	LA3_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void) {
	nimfr_("os", "os.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void) {
}

