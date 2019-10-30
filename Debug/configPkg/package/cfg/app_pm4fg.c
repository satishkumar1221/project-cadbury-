/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-H28
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rts/gnu/ReentSupport.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry *curEntry;
    xdc_runtime_LoggerBuf_Entry *endEntry;
    xdc_runtime_LoggerBuf_Entry *readEntry;
    xdc_Bits32 serial;
    xdc_UInt16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_ISystemSupport_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_IGateProvider_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_IModule_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_IFilterLogger_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_ILogger_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_IHeap_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C __attribute__ ((section (".rodata_ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C")));
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__FXNS__C")));
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__FXNS__C")));
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__FXNS__C")));
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8030, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__FXNS__C")));
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    &xdc_runtime_IFilterLogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x8009, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__FXNS__C")));
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int f_arg0);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restore__E */
extern xdc_Void ti_sysbios_knl_Swi_restore__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss");
#else
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_rts_gnu_ReentSupport_Module_State__ {
    xdc_Int taskHId;
    ti_sysbios_knl_Semaphore_Handle lock;
} ti_sysbios_rts_gnu_ReentSupport_Module_State__;

/* Module__state__V */
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V;


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_rts_gnu_ReentSupport_Module_startup__E */
extern xdc_Int ti_sysbios_rts_gnu_ReentSupport_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6766];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[52];


/*
 * ======== OBJECT OFFSETS ========
 */

const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Instance_State_sem__O")));
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module_State_clockQ__O")));
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Instance_State_pendQ__O")));
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module_State_inactiveQ__O")));
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module_State_terminatedQ__O")));
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /home/satish/workspace_v9/esp8266_tm4c123/Debug/configPkg/package/cfg/app_pm4fg");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = gnu.targets.arm.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0);
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0);
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
#ifdef __ti__sect
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
#ifdef __ti__sect
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if defined(__clang__) && defined (__ti__)
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    xdc_CString stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}

/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */


xdc_UChar ti_platforms_tiva_stack[1024] __attribute__ ((aligned(8), section (".stack")));

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
xdc_Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((xdc_ULong)
        (-1056963264));
}

/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_family_arm_lm4_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}


Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);


Ptr _intvecs_base_address;
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] __attribute__ ((section (".intvecs"))) = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

Ptr _vtable_base_address;
/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216] __attribute__((section(".vtable")));

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackBase = (Void *)__section_begin("CSTACK");
    size_t size = (uint8_t *)__section_end("CSTACK") - (uint8_t *)__section_begin("CSTACK");
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)size;
}
#endif

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport TEMPLATE ========
 */


#include <reent.h>
#include <sys/lock.h>

/*
 *  ======== __getreent ========
 *  Return pointer to current thread's reentrancy structure
 */
struct _reent* __getreent()
{
    if (ti_sysbios_BIOS_getThreadType() == ti_sysbios_BIOS_ThreadType_Main) {
        return _GLOBAL_REENT;
    }
    else {
        return (struct _reent *)ti_sysbios_rts_gnu_ReentSupport_getReent__I();
    }
}

/*
 *  ======== __libc_lock_init ========
 */
void __libc_lock_init(_LOCK_T *lock)
{
    ti_sysbios_knl_Semaphore_Params params;

    /* Construct a binary semaphore */
    ti_sysbios_knl_Semaphore_Params_init(&params);
    params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;
    ti_sysbios_knl_Semaphore_construct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)), 1, &params);
    lock->init_done = 1;
}

/*
 *  ======== __libc_lock_init_recursive ========
 */
void __libc_lock_init_recursive(_LOCK_RECURSIVE_T *lock)
{
    ti_sysbios_knl_Semaphore_Params params;

    /* Construct a binary semaphore */
    ti_sysbios_knl_Semaphore_Params_init(&params);
    params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;
    ti_sysbios_knl_Semaphore_construct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)), 1, &params);

    /* Initialize owner, count and init_done */
    lock->owner = NULL;
    lock->count = 0;
    lock->init_done = 1;
}

/*
 *  ======== __libc_lock_acquire ========
 */
void __libc_lock_acquire(_LOCK_T *lock)
{
    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT macro.
             */
            __libc_lock_init(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_WAIT_FOREVER);
}

/*
 *  ======== __libc_lock_acquire_recursive ========
 */
void __libc_lock_acquire_recursive(_LOCK_RECURSIVE_T *lock)
{
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_BIOS_ThreadType curThreadType;

    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT_RECURSIVE macro.
             */
            __libc_lock_init_recursive(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    /* Determine current thread type */
    curThreadType = ti_sysbios_BIOS_getThreadType();

    /* Get Handle to current Task */
    curTask = (Ptr)ti_sysbios_knl_Task_self();

    if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
        /*
         * If thread type is Main and owner is also Main thread then
         * increment lock count and return
         */
        if (lock->owner == (Ptr)~(0)) {
            (lock->count)++;
            return;
        }
    }
    else if (lock->owner == (Ptr)curTask) {
        /*
         * If thread type not Main and owner is current task then
         * increment lock count and return
         */
        (lock->count)++;
        return;
    }

    ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_WAIT_FOREVER);

    if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
        lock->owner = (Ptr)~(0);
    }
    else {
        lock->owner = curTask;
    }

    (lock->count)++;
}

/*
 *  ======== __libc_lock_release ========
 */
void __libc_lock_release(_LOCK_T *lock)
{
    ti_sysbios_knl_Semaphore_post(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))));
}

/*
 *  ======== __libc_lock_release_recursive ========
 */
void __libc_lock_release_recursive(_LOCK_RECURSIVE_T *lock)
{
    if (--(lock->count) == 0) {
        lock->owner = NULL;
        ti_sysbios_knl_Semaphore_post(ti_sysbios_knl_Semaphore_handle(
        (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))));
    }
}

/*
 *  ======== __libc_lock_try_acquire ========
 */
int __libc_lock_try_acquire(_LOCK_T *lock)
{
    Bool pendStatus;

    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT macro.
             */
            __libc_lock_init(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    pendStatus = ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_NO_WAIT);

    if (pendStatus) {
        return (0);
    }

    return (-1);
}

/*
 *  ======== __libc_lock_try_acquire_recursive ========
 */
int __libc_lock_try_acquire_recursive(_LOCK_RECURSIVE_T *lock)
{
    Bool pendStatus;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_BIOS_ThreadType curThreadType;

    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT_RECURSIVE macro.
             */
            __libc_lock_init_recursive(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    /* Determine current thread type */
    curThreadType = ti_sysbios_BIOS_getThreadType();

    /* Get Handle to current Task */
    curTask = (Ptr)ti_sysbios_knl_Task_self();

    if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
        /*
         * If thread type is Main and owner is also Main thread then
         * increment lock count and return
         */
        if (lock->owner == (Ptr)~(0)) {
            (lock->count)++;
            return (0);
        }
    }
    else if (lock->owner == (Ptr)curTask) {
        /*
         * If thread type not Main and owner is current task then
         * increment lock count and return
         */
        (lock->count)++;
        return (0);
    }

    pendStatus = ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_NO_WAIT);

    if (pendStatus) {
        if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
            lock->owner = (Ptr)~(0);
        }
        else {
            lock->owner = curTask;
        }

        (lock->count)++;
        return (0);
    }

    return (-1);
}

/*
 *  ======== __libc_lock_close ========
 */
void __libc_lock_close(_LOCK_T *lock)
{
    /* Destruct semaphore */
    ti_sysbios_knl_Semaphore_destruct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)));
    lock->init_done = 0;
}

/*
 *  ======== __libc_lock_close_recursive ========
 */
void __libc_lock_close_recursive(_LOCK_RECURSIVE_T *lock)
{
    /* Destruct semaphore */
    ti_sysbios_knl_Semaphore_destruct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)));
    lock->init_done = 0;
    lock->owner = NULL;
    lock->count = 0;
}

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = NULL;

/* A_mustUseEnhancedClockMode__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C __attribute__ ((section (".rodata_ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C")));
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__id__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__count__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__heap__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__table__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_smpEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_mpeEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_cpuFreq__C")));
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* runtimeCreatesEnabled__C */
const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_runtimeCreatesEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_taskEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_swiEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_clockEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_defaultKernelHeapInstance__C")));
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_kernelHeapSize__C")));
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_kernelHeapSection__C")));
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_heapSize__C")));
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_heapSection__C")));
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_heapTrackEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_setupSecureContext__C")));
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_useSK__C")));
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_installedErrorHook__C")));
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C")));
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)NULL),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4996) << 16 | 0U);

/* E_notAvailable__C */
const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)5032) << 16 | 0U);

/* E_cannotSupport__C */
const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5071) << 16 | 0U);

/* E_noaltclk__C */
const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)5255) << 16 | 0U);

/* anyMask__C */
const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_anyMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* supportsAltclk__C */
const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_enableFunc__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)(ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_disableFunc__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)(ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_startupNeeded__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = NULL;

/* useClockTimer__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C")));
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)NULL),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)NULL),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)NULL),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[] __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A")));
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [1] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_LM_begin__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6283) << 16 | 768);

/* LD_end__C */
const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_LD_end__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6353) << 16 | 512);

/* A_unsupportedMaskingOption__C */
const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)2154) << 16 | 16);

/* E_badIntNum__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)4470) << 16 | 0U);

/* E_alreadyDefined__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4510) << 16 | 0U);

/* E_hwiLimitExceeded__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4558) << 16 | 0U);

/* E_exception__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_exception__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4606) << 16 | 0U);

/* E_noIsr__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_noIsr__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4811) << 16 | 0U);

/* E_NMI__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_NMI__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4839) << 16 | 0U);

/* E_hardFault__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_hardFault__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4849) << 16 | 0U);

/* E_memFault__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_memFault__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4865) << 16 | 0U);

/* E_busFault__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_busFault__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4895) << 16 | 0U);

/* E_usageFault__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_usageFault__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4925) << 16 | 0U);

/* E_svCall__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_svCall__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4942) << 16 | 0U);

/* E_debugMon__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_debugMon__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4963) << 16 | 0U);

/* E_reserved__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_reserved__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4978) << 16 | 0U);

/* nullIsrFunc__C */
const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_excHookFunc__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)NULL);

/* excHookFuncs__C */
const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_disablePriority__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_priGroup__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_swiDisable__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestore__C */
const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_swiRestore__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore)(ti_sysbios_knl_Swi_restore__E));

/* swiRestoreHwi__C */
const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_taskDisable__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_ccr__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_hooks__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__id__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__count__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__table__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__PARAMS__C")));
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__id__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__count__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__heap__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__table__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_A_badContext__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2746) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__id__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__count__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__table__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = NULL;

/* dispatcherAutoNestingSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherSwiSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherTaskSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_E_stackOverflow__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4433) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__PARAMS__C")));
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__id__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__count__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__heap__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__table__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_zeroBlock__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3432) << 16 | 16);

/* A_heapSize__C */
const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_heapSize__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3468) << 16 | 16);

/* A_align__C */
const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_align__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3513) << 16 | 16);

/* E_memory__C */
const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_E_memory__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5219) << 16 | 0U);

/* A_invalidFree__C */
const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_invalidFree__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3404) << 16 | 16);

/* primaryHeapBaseAddr__C */
const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)NULL);

/* primaryHeapEndAddr__C */
const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)NULL);

/* reqAlign__C */
const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_reqAlign__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = NULL;

/* LW_delayed__C */
const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_LW_delayed__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5473) << 16 | 1024);

/* LM_tick__C */
const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_LM_tick__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5495) << 16 | 768);

/* LM_begin__C */
const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_LM_begin__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5513) << 16 | 768);

/* A_clockDisabled__C */
const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_A_clockDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)774) << 16 | 16);

/* A_badThreadType__C */
const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_A_badThreadType__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)855) << 16 | 16);

/* serviceMargin__C */
const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_serviceMargin__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_tickSource__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_tickMode__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_timerId__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_tickPeriod__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_doTickFunc__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_triggerClock__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[] __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_funcList__A")));
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[] __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_coreList__A")));
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_funcList__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_coreList__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x1,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_LM_post__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5545) << 16 | 768);

/* LM_pend__C */
const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_LM_pend__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5575) << 16 | 768);

/* A_noEvents__C */
const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_noEvents__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1265) << 16 | 16);

/* A_invTimeout__C */
const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_invTimeout__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1320) << 16 | 16);

/* A_badContext__C */
const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_badContext__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)1054) << 16 | 16);

/* A_overflow__C */
const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_overflow__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1385) << 16 | 16);

/* A_pendTaskDisabled__C */
const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1439) << 16 | 16);

/* E_objectNotInKernelSpace__C */
const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4015) << 16 | 0U);

/* supportsEvents__C */
const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_supportsEvents__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_supportsPriority__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_eventPost__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_eventSync__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_LM_begin__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5618) << 16 | 768);

/* LD_end__C */
const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_LD_end__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5665) << 16 | 512);

/* LM_post__C */
const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_LM_post__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5683) << 16 | 768);

/* A_swiDisabled__C */
const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_A_swiDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1533) << 16 | 16);

/* A_badPriority__C */
const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_A_badPriority__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1590) << 16 | 16);

/* numPriorities__C */
const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_numPriorities__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_hooks__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_taskDisable__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_taskRestore__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_numConstructedSwis__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)NULL),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[] __attribute__ ((section (".rodata_ti_sysbios_knl_Task_hooks__A")));
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_rts_gnu_ReentSupport_taskRegHook__I)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,xdc_runtime_Error_Block* f_arg1))NULL),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,ti_sysbios_knl_Task_Handle f_arg1))NULL),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))(ti_sysbios_rts_gnu_ReentSupport_taskDeleteHook__I)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_switch__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5723) << 16 | 768);

/* LM_sleep__C */
const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_sleep__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5791) << 16 | 768);

/* LD_ready__C */
const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LD_ready__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5836) << 16 | 512);

/* LD_block__C */
const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LD_block__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5877) << 16 | 512);

/* LM_yield__C */
const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_yield__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5909) << 16 | 768);

/* LM_setPri__C */
const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_setPri__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5957) << 16 | 768);

/* LD_exit__C */
const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LD_exit__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)6013) << 16 | 512);

/* LM_setAffinity__C */
const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_setAffinity__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)6044) << 16 | 768);

/* LM_schedule__C */
const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_schedule__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6127) << 16 | 1024);

/* LM_noWork__C */
const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_noWork__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6213) << 16 | 1024);

/* E_stackOverflow__C */
const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_stackOverflow__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4094) << 16 | 0U);

/* E_spOutOfBounds__C */
const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_spOutOfBounds__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4137) << 16 | 0U);

/* E_deleteNotAllowed__C */
const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_deleteNotAllowed__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4188) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_moduleStateCheckFailed__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4219) << 16 | 0U);

/* E_objectCheckFailed__C */
const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_objectCheckFailed__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4292) << 16 | 0U);

/* E_objectNotInKernelSpace__C */
const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_objectNotInKernelSpace__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4359) << 16 | 0U);

/* A_badThreadType__C */
const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badThreadType__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1639) << 16 | 16);

/* A_badTaskState__C */
const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badTaskState__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1708) << 16 | 16);

/* A_noPendElem__C */
const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_noPendElem__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1762) << 16 | 16);

/* A_taskDisabled__C */
const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_taskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1816) << 16 | 16);

/* A_badPriority__C */
const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badPriority__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1879) << 16 | 16);

/* A_badTimeout__C */
const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badTimeout__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1929) << 16 | 16);

/* A_badAffinity__C */
const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badAffinity__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1964) << 16 | 16);

/* A_sleepTaskDisabled__C */
const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_sleepTaskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1997) << 16 | 16);

/* A_invalidCoreId__C */
const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_invalidCoreId__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)2081) << 16 | 16);

/* numPriorities__C */
const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_numPriorities__C")));
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_defaultStackSize__C")));
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_defaultStackHeap__C")));
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_allBlockedFunc__C")));
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_initStackFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_checkStackFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_deleteTerminatedTasks__C")));
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_hooks__C")));
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks const  *)ti_sysbios_knl_Task_hooks__A)};

/* moduleStateCheckFxn__C */
const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_moduleStateCheckFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_moduleStateCheckValueFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_moduleStateCheckFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_objectCheckFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_objectCheckValueFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_objectCheckFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_numConstructedTasks__C")));
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_startupHookFunc__C")));
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_rts_gnu_ReentSupport_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V __attribute__ ((section(".data_ti_sysbios_rts_gnu_ReentSupport_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V __attribute__ ((section(".data:ti_sysbios_rts_gnu_ReentSupport_Module__state__V")));
#endif
#endif
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    (ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0],  /* lock */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__id ti_sysbios_rts_gnu_ReentSupport_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__id__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__id ti_sysbios_rts_gnu_ReentSupport_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__count ti_sysbios_rts_gnu_ReentSupport_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__count__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__count ti_sysbios_rts_gnu_ReentSupport_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__heap ti_sysbios_rts_gnu_ReentSupport_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__heap__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__heap ti_sysbios_rts_gnu_ReentSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__sizeof ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__sizeof ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__table ti_sysbios_rts_gnu_ReentSupport_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__table__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__table ti_sysbios_rts_gnu_ReentSupport_Object__table__C = NULL;

/* enableReentSupport__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_enableReentSupport ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_enableReentSupport ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C = 1;

/* A_badThreadType__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_A_badThreadType ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_A_badThreadType ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C = (((xdc_runtime_Assert_Id)2207) << 16 | 16);


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__id__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__count__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__table__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C __attribute__ ((section (".rodata_xdc_runtime_Assert_E_assertFailed__C")));
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3775) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__id__C")));
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__count__C")));
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__table__C")));
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C __attribute__ ((section (".rodata_xdc_runtime_Core_A_initializedParams__C")));
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__id__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__count__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__table__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__id__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__count__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__table__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Diags_setMaskEnabled__C")));
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C __attribute__ ((section (".rodata_xdc_runtime_Diags_dictBase__C")));
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)NULL);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__id__C")));
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__count__C")));
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__table__C")));
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C __attribute__ ((section (".rodata_xdc_runtime_Error_policyFxn__C")));
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C __attribute__ ((section (".rodata_xdc_runtime_Error_E_generic__C")));
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3797) << 16 | 0U);

/* E_memory__C */
const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C __attribute__ ((section (".rodata_xdc_runtime_Error_E_memory__C")));
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3801) << 16 | 0U);

/* E_msgCode__C */
const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C __attribute__ ((section (".rodata_xdc_runtime_Error_E_msgCode__C")));
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3835) << 16 | 0U);

/* policy__C */
const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C __attribute__ ((section (".rodata_xdc_runtime_Error_policy__C")));
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C __attribute__ ((section (".rodata_xdc_runtime_Error_raiseHook__C")));
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C __attribute__ ((section (".rodata_xdc_runtime_Error_maxDepth__C")));
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__id__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__count__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__table__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__id__C")));
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__count__C")));
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__table__C")));
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_construct__C")));
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5297) << 16 | 4);

/* L_create__C */
const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_create__C")));
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5321) << 16 | 4);

/* L_destruct__C */
const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_destruct__C")));
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5342) << 16 | 4);

/* L_delete__C */
const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_delete__C")));
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5361) << 16 | 4);

/* L_error__C */
const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_error__C")));
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5378) << 16 | 192);

/* L_warning__C */
const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_warning__C")));
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5392) << 16 | 224);

/* L_info__C */
const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_info__C")));
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5408) << 16 | 16384);

/* L_start__C */
const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_start__C")));
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5415) << 16 | 32768);

/* L_stop__C */
const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_stop__C")));
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5426) << 16 | 32768);

/* L_startInstance__C */
const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_startInstance__C")));
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5436) << 16 | 32768);

/* L_stopInstance__C */
const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_stopInstance__C")));
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5455) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Object__PARAMS__C")));
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)0x40,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1,  /* serial */
        (xdc_UInt16)0x10,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_LoggerBuf_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data_xdc_runtime_LoggerBuf_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data:xdc_runtime_LoggerBuf_Module__state__V")));
#endif
#endif
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((const CT__xdc_runtime_LoggerBuf_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((const CT__xdc_runtime_LoggerBuf_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__id__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Object__count__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Object__heap__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Object__table__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_filterByLevel__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_E_badLevel__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)3843) << 16 | 0U);

/* enableFlush__C */
const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_enableFlush__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_statusLogger__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_level1Mask__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_level2Mask__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_level3Mask__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_level4Mask__C")));
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090;

/* Module__diagsMask__C */
const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__id__C")));
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__count__C")));
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__table__C")));
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__id__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__count__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__table__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C __attribute__ ((section (".rodata_xdc_runtime_Memory_defaultHeapInstance__C")));
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__id__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__count__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__table__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_firstFxns__A")));
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_lastFxns__A")));
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_sfxnTab__A")));
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_rts_gnu_ReentSupport_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_sfxnRts__A")));
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
    0,  /* [10] */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__id__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__count__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__table__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C __attribute__ ((section (".rodata_xdc_runtime_Startup_maxPasses__C")));
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C __attribute__ ((section (".rodata_xdc_runtime_Startup_firstFxns__C")));
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C __attribute__ ((section (".rodata_xdc_runtime_Startup_lastFxns__C")));
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns const  *)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C __attribute__ ((section (".rodata_xdc_runtime_Startup_startModsFxn__C")));
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C __attribute__ ((section (".rodata_xdc_runtime_Startup_execImpl__C")));
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C __attribute__ ((section (".rodata_xdc_runtime_Startup_sfxnTab__C")));
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C __attribute__ ((section (".rodata_xdc_runtime_Startup_sfxnRts__C")));
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__id__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__count__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__heap__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__table__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_bufSize__C")));
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_flushAtExit__C")));
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_outputFxn__C")));
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_outputFunc__C")));
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [2] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__id__C")));
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__count__C")));
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__heap__C")));
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__table__C")));
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C __attribute__ ((section (".rodata_xdc_runtime_System_A_cannotFitIntoArg__C")));
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C __attribute__ ((section (".rodata_xdc_runtime_System_maxAtexitHandlers__C")));
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* abortFxn__C */
const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C __attribute__ ((section (".rodata_xdc_runtime_System_abortFxn__C")));
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C __attribute__ ((section (".rodata_xdc_runtime_System_exitFxn__C")));
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C __attribute__ ((section (".rodata_xdc_runtime_System_extendFxn__C")));
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[] __attribute__ ((section (".rodata_xdc_runtime_Text_charTab__A")));
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6766] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x6e,  /* [561] */
    (xdc_Char)0x75,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x6c,  /* [564] */
    (xdc_Char)0x50,  /* [565] */
    (xdc_Char)0x6f,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x72,  /* [571] */
    (xdc_Char)0x3a,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x50,  /* [574] */
    (xdc_Char)0x6f,  /* [575] */
    (xdc_Char)0x69,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x74,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x72,  /* [580] */
    (xdc_Char)0x20,  /* [581] */
    (xdc_Char)0x69,  /* [582] */
    (xdc_Char)0x73,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x75,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x0,  /* [589] */
    (xdc_Char)0x41,  /* [590] */
    (xdc_Char)0x5f,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x76,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x6c,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x64,  /* [598] */
    (xdc_Char)0x52,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x67,  /* [601] */
    (xdc_Char)0x69,  /* [602] */
    (xdc_Char)0x6f,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x49,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x3a,  /* [607] */
    (xdc_Char)0x20,  /* [608] */
    (xdc_Char)0x4d,  /* [609] */
    (xdc_Char)0x50,  /* [610] */
    (xdc_Char)0x55,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x52,  /* [613] */
    (xdc_Char)0x65,  /* [614] */
    (xdc_Char)0x67,  /* [615] */
    (xdc_Char)0x69,  /* [616] */
    (xdc_Char)0x6f,  /* [617] */
    (xdc_Char)0x6e,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x6e,  /* [620] */
    (xdc_Char)0x75,  /* [621] */
    (xdc_Char)0x6d,  /* [622] */
    (xdc_Char)0x62,  /* [623] */
    (xdc_Char)0x65,  /* [624] */
    (xdc_Char)0x72,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x70,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x64,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x69,  /* [634] */
    (xdc_Char)0x73,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6e,  /* [638] */
    (xdc_Char)0x76,  /* [639] */
    (xdc_Char)0x61,  /* [640] */
    (xdc_Char)0x6c,  /* [641] */
    (xdc_Char)0x69,  /* [642] */
    (xdc_Char)0x64,  /* [643] */
    (xdc_Char)0x2e,  /* [644] */
    (xdc_Char)0x0,  /* [645] */
    (xdc_Char)0x41,  /* [646] */
    (xdc_Char)0x5f,  /* [647] */
    (xdc_Char)0x75,  /* [648] */
    (xdc_Char)0x6e,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x6c,  /* [651] */
    (xdc_Char)0x69,  /* [652] */
    (xdc_Char)0x67,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x65,  /* [655] */
    (xdc_Char)0x64,  /* [656] */
    (xdc_Char)0x42,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x73,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x41,  /* [661] */
    (xdc_Char)0x64,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x72,  /* [664] */
    (xdc_Char)0x3a,  /* [665] */
    (xdc_Char)0x20,  /* [666] */
    (xdc_Char)0x4d,  /* [667] */
    (xdc_Char)0x50,  /* [668] */
    (xdc_Char)0x55,  /* [669] */
    (xdc_Char)0x20,  /* [670] */
    (xdc_Char)0x72,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x67,  /* [673] */
    (xdc_Char)0x69,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x62,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x73,  /* [680] */
    (xdc_Char)0x65,  /* [681] */
    (xdc_Char)0x20,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x64,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x65,  /* [687] */
    (xdc_Char)0x73,  /* [688] */
    (xdc_Char)0x73,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x6e,  /* [691] */
    (xdc_Char)0x6f,  /* [692] */
    (xdc_Char)0x74,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x6c,  /* [696] */
    (xdc_Char)0x69,  /* [697] */
    (xdc_Char)0x67,  /* [698] */
    (xdc_Char)0x6e,  /* [699] */
    (xdc_Char)0x65,  /* [700] */
    (xdc_Char)0x64,  /* [701] */
    (xdc_Char)0x20,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x6f,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x73,  /* [706] */
    (xdc_Char)0x69,  /* [707] */
    (xdc_Char)0x7a,  /* [708] */
    (xdc_Char)0x65,  /* [709] */
    (xdc_Char)0x2e,  /* [710] */
    (xdc_Char)0x0,  /* [711] */
    (xdc_Char)0x41,  /* [712] */
    (xdc_Char)0x5f,  /* [713] */
    (xdc_Char)0x72,  /* [714] */
    (xdc_Char)0x65,  /* [715] */
    (xdc_Char)0x73,  /* [716] */
    (xdc_Char)0x65,  /* [717] */
    (xdc_Char)0x72,  /* [718] */
    (xdc_Char)0x76,  /* [719] */
    (xdc_Char)0x65,  /* [720] */
    (xdc_Char)0x64,  /* [721] */
    (xdc_Char)0x41,  /* [722] */
    (xdc_Char)0x74,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x73,  /* [726] */
    (xdc_Char)0x3a,  /* [727] */
    (xdc_Char)0x20,  /* [728] */
    (xdc_Char)0x4d,  /* [729] */
    (xdc_Char)0x50,  /* [730] */
    (xdc_Char)0x55,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x72,  /* [733] */
    (xdc_Char)0x65,  /* [734] */
    (xdc_Char)0x67,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6f,  /* [737] */
    (xdc_Char)0x6e,  /* [738] */
    (xdc_Char)0x20,  /* [739] */
    (xdc_Char)0x61,  /* [740] */
    (xdc_Char)0x74,  /* [741] */
    (xdc_Char)0x74,  /* [742] */
    (xdc_Char)0x72,  /* [743] */
    (xdc_Char)0x69,  /* [744] */
    (xdc_Char)0x62,  /* [745] */
    (xdc_Char)0x75,  /* [746] */
    (xdc_Char)0x74,  /* [747] */
    (xdc_Char)0x65,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x73,  /* [751] */
    (xdc_Char)0x65,  /* [752] */
    (xdc_Char)0x74,  /* [753] */
    (xdc_Char)0x20,  /* [754] */
    (xdc_Char)0x74,  /* [755] */
    (xdc_Char)0x6f,  /* [756] */
    (xdc_Char)0x20,  /* [757] */
    (xdc_Char)0x72,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x73,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x72,  /* [762] */
    (xdc_Char)0x76,  /* [763] */
    (xdc_Char)0x65,  /* [764] */
    (xdc_Char)0x64,  /* [765] */
    (xdc_Char)0x20,  /* [766] */
    (xdc_Char)0x76,  /* [767] */
    (xdc_Char)0x61,  /* [768] */
    (xdc_Char)0x6c,  /* [769] */
    (xdc_Char)0x75,  /* [770] */
    (xdc_Char)0x65,  /* [771] */
    (xdc_Char)0x2e,  /* [772] */
    (xdc_Char)0x0,  /* [773] */
    (xdc_Char)0x41,  /* [774] */
    (xdc_Char)0x5f,  /* [775] */
    (xdc_Char)0x63,  /* [776] */
    (xdc_Char)0x6c,  /* [777] */
    (xdc_Char)0x6f,  /* [778] */
    (xdc_Char)0x63,  /* [779] */
    (xdc_Char)0x6b,  /* [780] */
    (xdc_Char)0x44,  /* [781] */
    (xdc_Char)0x69,  /* [782] */
    (xdc_Char)0x73,  /* [783] */
    (xdc_Char)0x61,  /* [784] */
    (xdc_Char)0x62,  /* [785] */
    (xdc_Char)0x6c,  /* [786] */
    (xdc_Char)0x65,  /* [787] */
    (xdc_Char)0x64,  /* [788] */
    (xdc_Char)0x3a,  /* [789] */
    (xdc_Char)0x20,  /* [790] */
    (xdc_Char)0x43,  /* [791] */
    (xdc_Char)0x61,  /* [792] */
    (xdc_Char)0x6e,  /* [793] */
    (xdc_Char)0x6e,  /* [794] */
    (xdc_Char)0x6f,  /* [795] */
    (xdc_Char)0x74,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x63,  /* [798] */
    (xdc_Char)0x72,  /* [799] */
    (xdc_Char)0x65,  /* [800] */
    (xdc_Char)0x61,  /* [801] */
    (xdc_Char)0x74,  /* [802] */
    (xdc_Char)0x65,  /* [803] */
    (xdc_Char)0x20,  /* [804] */
    (xdc_Char)0x61,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x63,  /* [807] */
    (xdc_Char)0x6c,  /* [808] */
    (xdc_Char)0x6f,  /* [809] */
    (xdc_Char)0x63,  /* [810] */
    (xdc_Char)0x6b,  /* [811] */
    (xdc_Char)0x20,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x73,  /* [815] */
    (xdc_Char)0x74,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6e,  /* [818] */
    (xdc_Char)0x63,  /* [819] */
    (xdc_Char)0x65,  /* [820] */
    (xdc_Char)0x20,  /* [821] */
    (xdc_Char)0x77,  /* [822] */
    (xdc_Char)0x68,  /* [823] */
    (xdc_Char)0x65,  /* [824] */
    (xdc_Char)0x6e,  /* [825] */
    (xdc_Char)0x20,  /* [826] */
    (xdc_Char)0x42,  /* [827] */
    (xdc_Char)0x49,  /* [828] */
    (xdc_Char)0x4f,  /* [829] */
    (xdc_Char)0x53,  /* [830] */
    (xdc_Char)0x2e,  /* [831] */
    (xdc_Char)0x63,  /* [832] */
    (xdc_Char)0x6c,  /* [833] */
    (xdc_Char)0x6f,  /* [834] */
    (xdc_Char)0x63,  /* [835] */
    (xdc_Char)0x6b,  /* [836] */
    (xdc_Char)0x45,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x61,  /* [839] */
    (xdc_Char)0x62,  /* [840] */
    (xdc_Char)0x6c,  /* [841] */
    (xdc_Char)0x65,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x20,  /* [844] */
    (xdc_Char)0x69,  /* [845] */
    (xdc_Char)0x73,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x66,  /* [848] */
    (xdc_Char)0x61,  /* [849] */
    (xdc_Char)0x6c,  /* [850] */
    (xdc_Char)0x73,  /* [851] */
    (xdc_Char)0x65,  /* [852] */
    (xdc_Char)0x2e,  /* [853] */
    (xdc_Char)0x0,  /* [854] */
    (xdc_Char)0x41,  /* [855] */
    (xdc_Char)0x5f,  /* [856] */
    (xdc_Char)0x62,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x64,  /* [859] */
    (xdc_Char)0x54,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x72,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x61,  /* [864] */
    (xdc_Char)0x64,  /* [865] */
    (xdc_Char)0x54,  /* [866] */
    (xdc_Char)0x79,  /* [867] */
    (xdc_Char)0x70,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x3a,  /* [870] */
    (xdc_Char)0x20,  /* [871] */
    (xdc_Char)0x43,  /* [872] */
    (xdc_Char)0x61,  /* [873] */
    (xdc_Char)0x6e,  /* [874] */
    (xdc_Char)0x6e,  /* [875] */
    (xdc_Char)0x6f,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x63,  /* [879] */
    (xdc_Char)0x72,  /* [880] */
    (xdc_Char)0x65,  /* [881] */
    (xdc_Char)0x61,  /* [882] */
    (xdc_Char)0x74,  /* [883] */
    (xdc_Char)0x65,  /* [884] */
    (xdc_Char)0x2f,  /* [885] */
    (xdc_Char)0x64,  /* [886] */
    (xdc_Char)0x65,  /* [887] */
    (xdc_Char)0x6c,  /* [888] */
    (xdc_Char)0x65,  /* [889] */
    (xdc_Char)0x74,  /* [890] */
    (xdc_Char)0x65,  /* [891] */
    (xdc_Char)0x20,  /* [892] */
    (xdc_Char)0x61,  /* [893] */
    (xdc_Char)0x20,  /* [894] */
    (xdc_Char)0x43,  /* [895] */
    (xdc_Char)0x6c,  /* [896] */
    (xdc_Char)0x6f,  /* [897] */
    (xdc_Char)0x63,  /* [898] */
    (xdc_Char)0x6b,  /* [899] */
    (xdc_Char)0x20,  /* [900] */
    (xdc_Char)0x66,  /* [901] */
    (xdc_Char)0x72,  /* [902] */
    (xdc_Char)0x6f,  /* [903] */
    (xdc_Char)0x6d,  /* [904] */
    (xdc_Char)0x20,  /* [905] */
    (xdc_Char)0x48,  /* [906] */
    (xdc_Char)0x77,  /* [907] */
    (xdc_Char)0x69,  /* [908] */
    (xdc_Char)0x20,  /* [909] */
    (xdc_Char)0x6f,  /* [910] */
    (xdc_Char)0x72,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x53,  /* [913] */
    (xdc_Char)0x77,  /* [914] */
    (xdc_Char)0x69,  /* [915] */
    (xdc_Char)0x20,  /* [916] */
    (xdc_Char)0x74,  /* [917] */
    (xdc_Char)0x68,  /* [918] */
    (xdc_Char)0x72,  /* [919] */
    (xdc_Char)0x65,  /* [920] */
    (xdc_Char)0x61,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x2e,  /* [923] */
    (xdc_Char)0x0,  /* [924] */
    (xdc_Char)0x41,  /* [925] */
    (xdc_Char)0x5f,  /* [926] */
    (xdc_Char)0x6e,  /* [927] */
    (xdc_Char)0x75,  /* [928] */
    (xdc_Char)0x6c,  /* [929] */
    (xdc_Char)0x6c,  /* [930] */
    (xdc_Char)0x45,  /* [931] */
    (xdc_Char)0x76,  /* [932] */
    (xdc_Char)0x65,  /* [933] */
    (xdc_Char)0x6e,  /* [934] */
    (xdc_Char)0x74,  /* [935] */
    (xdc_Char)0x4d,  /* [936] */
    (xdc_Char)0x61,  /* [937] */
    (xdc_Char)0x73,  /* [938] */
    (xdc_Char)0x6b,  /* [939] */
    (xdc_Char)0x73,  /* [940] */
    (xdc_Char)0x3a,  /* [941] */
    (xdc_Char)0x20,  /* [942] */
    (xdc_Char)0x6f,  /* [943] */
    (xdc_Char)0x72,  /* [944] */
    (xdc_Char)0x4d,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x73,  /* [947] */
    (xdc_Char)0x6b,  /* [948] */
    (xdc_Char)0x20,  /* [949] */
    (xdc_Char)0x61,  /* [950] */
    (xdc_Char)0x6e,  /* [951] */
    (xdc_Char)0x64,  /* [952] */
    (xdc_Char)0x20,  /* [953] */
    (xdc_Char)0x61,  /* [954] */
    (xdc_Char)0x6e,  /* [955] */
    (xdc_Char)0x64,  /* [956] */
    (xdc_Char)0x4d,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x61,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x65,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x6e,  /* [966] */
    (xdc_Char)0x75,  /* [967] */
    (xdc_Char)0x6c,  /* [968] */
    (xdc_Char)0x6c,  /* [969] */
    (xdc_Char)0x2e,  /* [970] */
    (xdc_Char)0x0,  /* [971] */
    (xdc_Char)0x41,  /* [972] */
    (xdc_Char)0x5f,  /* [973] */
    (xdc_Char)0x6e,  /* [974] */
    (xdc_Char)0x75,  /* [975] */
    (xdc_Char)0x6c,  /* [976] */
    (xdc_Char)0x6c,  /* [977] */
    (xdc_Char)0x45,  /* [978] */
    (xdc_Char)0x76,  /* [979] */
    (xdc_Char)0x65,  /* [980] */
    (xdc_Char)0x6e,  /* [981] */
    (xdc_Char)0x74,  /* [982] */
    (xdc_Char)0x49,  /* [983] */
    (xdc_Char)0x64,  /* [984] */
    (xdc_Char)0x3a,  /* [985] */
    (xdc_Char)0x20,  /* [986] */
    (xdc_Char)0x70,  /* [987] */
    (xdc_Char)0x6f,  /* [988] */
    (xdc_Char)0x73,  /* [989] */
    (xdc_Char)0x74,  /* [990] */
    (xdc_Char)0x65,  /* [991] */
    (xdc_Char)0x64,  /* [992] */
    (xdc_Char)0x20,  /* [993] */
    (xdc_Char)0x65,  /* [994] */
    (xdc_Char)0x76,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x6e,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x49,  /* [999] */
    (xdc_Char)0x64,  /* [1000] */
    (xdc_Char)0x20,  /* [1001] */
    (xdc_Char)0x69,  /* [1002] */
    (xdc_Char)0x73,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x6e,  /* [1005] */
    (xdc_Char)0x75,  /* [1006] */
    (xdc_Char)0x6c,  /* [1007] */
    (xdc_Char)0x6c,  /* [1008] */
    (xdc_Char)0x2e,  /* [1009] */
    (xdc_Char)0x0,  /* [1010] */
    (xdc_Char)0x41,  /* [1011] */
    (xdc_Char)0x5f,  /* [1012] */
    (xdc_Char)0x65,  /* [1013] */
    (xdc_Char)0x76,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x6e,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x49,  /* [1018] */
    (xdc_Char)0x6e,  /* [1019] */
    (xdc_Char)0x55,  /* [1020] */
    (xdc_Char)0x73,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x3a,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x45,  /* [1025] */
    (xdc_Char)0x76,  /* [1026] */
    (xdc_Char)0x65,  /* [1027] */
    (xdc_Char)0x6e,  /* [1028] */
    (xdc_Char)0x74,  /* [1029] */
    (xdc_Char)0x20,  /* [1030] */
    (xdc_Char)0x6f,  /* [1031] */
    (xdc_Char)0x62,  /* [1032] */
    (xdc_Char)0x6a,  /* [1033] */
    (xdc_Char)0x65,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x74,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x61,  /* [1038] */
    (xdc_Char)0x6c,  /* [1039] */
    (xdc_Char)0x72,  /* [1040] */
    (xdc_Char)0x65,  /* [1041] */
    (xdc_Char)0x61,  /* [1042] */
    (xdc_Char)0x64,  /* [1043] */
    (xdc_Char)0x79,  /* [1044] */
    (xdc_Char)0x20,  /* [1045] */
    (xdc_Char)0x69,  /* [1046] */
    (xdc_Char)0x6e,  /* [1047] */
    (xdc_Char)0x20,  /* [1048] */
    (xdc_Char)0x75,  /* [1049] */
    (xdc_Char)0x73,  /* [1050] */
    (xdc_Char)0x65,  /* [1051] */
    (xdc_Char)0x2e,  /* [1052] */
    (xdc_Char)0x0,  /* [1053] */
    (xdc_Char)0x41,  /* [1054] */
    (xdc_Char)0x5f,  /* [1055] */
    (xdc_Char)0x62,  /* [1056] */
    (xdc_Char)0x61,  /* [1057] */
    (xdc_Char)0x64,  /* [1058] */
    (xdc_Char)0x43,  /* [1059] */
    (xdc_Char)0x6f,  /* [1060] */
    (xdc_Char)0x6e,  /* [1061] */
    (xdc_Char)0x74,  /* [1062] */
    (xdc_Char)0x65,  /* [1063] */
    (xdc_Char)0x78,  /* [1064] */
    (xdc_Char)0x74,  /* [1065] */
    (xdc_Char)0x3a,  /* [1066] */
    (xdc_Char)0x20,  /* [1067] */
    (xdc_Char)0x62,  /* [1068] */
    (xdc_Char)0x61,  /* [1069] */
    (xdc_Char)0x64,  /* [1070] */
    (xdc_Char)0x20,  /* [1071] */
    (xdc_Char)0x63,  /* [1072] */
    (xdc_Char)0x61,  /* [1073] */
    (xdc_Char)0x6c,  /* [1074] */
    (xdc_Char)0x6c,  /* [1075] */
    (xdc_Char)0x69,  /* [1076] */
    (xdc_Char)0x6e,  /* [1077] */
    (xdc_Char)0x67,  /* [1078] */
    (xdc_Char)0x20,  /* [1079] */
    (xdc_Char)0x63,  /* [1080] */
    (xdc_Char)0x6f,  /* [1081] */
    (xdc_Char)0x6e,  /* [1082] */
    (xdc_Char)0x74,  /* [1083] */
    (xdc_Char)0x65,  /* [1084] */
    (xdc_Char)0x78,  /* [1085] */
    (xdc_Char)0x74,  /* [1086] */
    (xdc_Char)0x2e,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x4d,  /* [1089] */
    (xdc_Char)0x75,  /* [1090] */
    (xdc_Char)0x73,  /* [1091] */
    (xdc_Char)0x74,  /* [1092] */
    (xdc_Char)0x20,  /* [1093] */
    (xdc_Char)0x62,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x63,  /* [1097] */
    (xdc_Char)0x61,  /* [1098] */
    (xdc_Char)0x6c,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x20,  /* [1103] */
    (xdc_Char)0x66,  /* [1104] */
    (xdc_Char)0x72,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x6d,  /* [1107] */
    (xdc_Char)0x20,  /* [1108] */
    (xdc_Char)0x61,  /* [1109] */
    (xdc_Char)0x20,  /* [1110] */
    (xdc_Char)0x54,  /* [1111] */
    (xdc_Char)0x61,  /* [1112] */
    (xdc_Char)0x73,  /* [1113] */
    (xdc_Char)0x6b,  /* [1114] */
    (xdc_Char)0x2e,  /* [1115] */
    (xdc_Char)0x0,  /* [1116] */
    (xdc_Char)0x41,  /* [1117] */
    (xdc_Char)0x5f,  /* [1118] */
    (xdc_Char)0x70,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x6e,  /* [1121] */
    (xdc_Char)0x64,  /* [1122] */
    (xdc_Char)0x54,  /* [1123] */
    (xdc_Char)0x61,  /* [1124] */
    (xdc_Char)0x73,  /* [1125] */
    (xdc_Char)0x6b,  /* [1126] */
    (xdc_Char)0x44,  /* [1127] */
    (xdc_Char)0x69,  /* [1128] */
    (xdc_Char)0x73,  /* [1129] */
    (xdc_Char)0x61,  /* [1130] */
    (xdc_Char)0x62,  /* [1131] */
    (xdc_Char)0x6c,  /* [1132] */
    (xdc_Char)0x65,  /* [1133] */
    (xdc_Char)0x64,  /* [1134] */
    (xdc_Char)0x3a,  /* [1135] */
    (xdc_Char)0x20,  /* [1136] */
    (xdc_Char)0x43,  /* [1137] */
    (xdc_Char)0x61,  /* [1138] */
    (xdc_Char)0x6e,  /* [1139] */
    (xdc_Char)0x6e,  /* [1140] */
    (xdc_Char)0x6f,  /* [1141] */
    (xdc_Char)0x74,  /* [1142] */
    (xdc_Char)0x20,  /* [1143] */
    (xdc_Char)0x63,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x6c,  /* [1146] */
    (xdc_Char)0x6c,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x45,  /* [1149] */
    (xdc_Char)0x76,  /* [1150] */
    (xdc_Char)0x65,  /* [1151] */
    (xdc_Char)0x6e,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x5f,  /* [1154] */
    (xdc_Char)0x70,  /* [1155] */
    (xdc_Char)0x65,  /* [1156] */
    (xdc_Char)0x6e,  /* [1157] */
    (xdc_Char)0x64,  /* [1158] */
    (xdc_Char)0x28,  /* [1159] */
    (xdc_Char)0x29,  /* [1160] */
    (xdc_Char)0x20,  /* [1161] */
    (xdc_Char)0x77,  /* [1162] */
    (xdc_Char)0x68,  /* [1163] */
    (xdc_Char)0x69,  /* [1164] */
    (xdc_Char)0x6c,  /* [1165] */
    (xdc_Char)0x65,  /* [1166] */
    (xdc_Char)0x20,  /* [1167] */
    (xdc_Char)0x74,  /* [1168] */
    (xdc_Char)0x68,  /* [1169] */
    (xdc_Char)0x65,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x54,  /* [1172] */
    (xdc_Char)0x61,  /* [1173] */
    (xdc_Char)0x73,  /* [1174] */
    (xdc_Char)0x6b,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x6f,  /* [1177] */
    (xdc_Char)0x72,  /* [1178] */
    (xdc_Char)0x20,  /* [1179] */
    (xdc_Char)0x53,  /* [1180] */
    (xdc_Char)0x77,  /* [1181] */
    (xdc_Char)0x69,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x73,  /* [1184] */
    (xdc_Char)0x63,  /* [1185] */
    (xdc_Char)0x68,  /* [1186] */
    (xdc_Char)0x65,  /* [1187] */
    (xdc_Char)0x64,  /* [1188] */
    (xdc_Char)0x75,  /* [1189] */
    (xdc_Char)0x6c,  /* [1190] */
    (xdc_Char)0x65,  /* [1191] */
    (xdc_Char)0x72,  /* [1192] */
    (xdc_Char)0x20,  /* [1193] */
    (xdc_Char)0x69,  /* [1194] */
    (xdc_Char)0x73,  /* [1195] */
    (xdc_Char)0x20,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x69,  /* [1198] */
    (xdc_Char)0x73,  /* [1199] */
    (xdc_Char)0x61,  /* [1200] */
    (xdc_Char)0x62,  /* [1201] */
    (xdc_Char)0x6c,  /* [1202] */
    (xdc_Char)0x65,  /* [1203] */
    (xdc_Char)0x64,  /* [1204] */
    (xdc_Char)0x2e,  /* [1205] */
    (xdc_Char)0x0,  /* [1206] */
    (xdc_Char)0x4d,  /* [1207] */
    (xdc_Char)0x61,  /* [1208] */
    (xdc_Char)0x69,  /* [1209] */
    (xdc_Char)0x6c,  /* [1210] */
    (xdc_Char)0x62,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x78,  /* [1213] */
    (xdc_Char)0x5f,  /* [1214] */
    (xdc_Char)0x63,  /* [1215] */
    (xdc_Char)0x72,  /* [1216] */
    (xdc_Char)0x65,  /* [1217] */
    (xdc_Char)0x61,  /* [1218] */
    (xdc_Char)0x74,  /* [1219] */
    (xdc_Char)0x65,  /* [1220] */
    (xdc_Char)0x27,  /* [1221] */
    (xdc_Char)0x73,  /* [1222] */
    (xdc_Char)0x20,  /* [1223] */
    (xdc_Char)0x62,  /* [1224] */
    (xdc_Char)0x75,  /* [1225] */
    (xdc_Char)0x66,  /* [1226] */
    (xdc_Char)0x53,  /* [1227] */
    (xdc_Char)0x69,  /* [1228] */
    (xdc_Char)0x7a,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x20,  /* [1231] */
    (xdc_Char)0x70,  /* [1232] */
    (xdc_Char)0x61,  /* [1233] */
    (xdc_Char)0x72,  /* [1234] */
    (xdc_Char)0x61,  /* [1235] */
    (xdc_Char)0x6d,  /* [1236] */
    (xdc_Char)0x65,  /* [1237] */
    (xdc_Char)0x74,  /* [1238] */
    (xdc_Char)0x65,  /* [1239] */
    (xdc_Char)0x72,  /* [1240] */
    (xdc_Char)0x20,  /* [1241] */
    (xdc_Char)0x69,  /* [1242] */
    (xdc_Char)0x73,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x6e,  /* [1246] */
    (xdc_Char)0x76,  /* [1247] */
    (xdc_Char)0x61,  /* [1248] */
    (xdc_Char)0x6c,  /* [1249] */
    (xdc_Char)0x69,  /* [1250] */
    (xdc_Char)0x64,  /* [1251] */
    (xdc_Char)0x20,  /* [1252] */
    (xdc_Char)0x28,  /* [1253] */
    (xdc_Char)0x74,  /* [1254] */
    (xdc_Char)0x6f,  /* [1255] */
    (xdc_Char)0x6f,  /* [1256] */
    (xdc_Char)0x20,  /* [1257] */
    (xdc_Char)0x73,  /* [1258] */
    (xdc_Char)0x6d,  /* [1259] */
    (xdc_Char)0x61,  /* [1260] */
    (xdc_Char)0x6c,  /* [1261] */
    (xdc_Char)0x6c,  /* [1262] */
    (xdc_Char)0x29,  /* [1263] */
    (xdc_Char)0x0,  /* [1264] */
    (xdc_Char)0x41,  /* [1265] */
    (xdc_Char)0x5f,  /* [1266] */
    (xdc_Char)0x6e,  /* [1267] */
    (xdc_Char)0x6f,  /* [1268] */
    (xdc_Char)0x45,  /* [1269] */
    (xdc_Char)0x76,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x6e,  /* [1272] */
    (xdc_Char)0x74,  /* [1273] */
    (xdc_Char)0x73,  /* [1274] */
    (xdc_Char)0x3a,  /* [1275] */
    (xdc_Char)0x20,  /* [1276] */
    (xdc_Char)0x54,  /* [1277] */
    (xdc_Char)0x68,  /* [1278] */
    (xdc_Char)0x65,  /* [1279] */
    (xdc_Char)0x20,  /* [1280] */
    (xdc_Char)0x45,  /* [1281] */
    (xdc_Char)0x76,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x74,  /* [1285] */
    (xdc_Char)0x2e,  /* [1286] */
    (xdc_Char)0x73,  /* [1287] */
    (xdc_Char)0x75,  /* [1288] */
    (xdc_Char)0x70,  /* [1289] */
    (xdc_Char)0x70,  /* [1290] */
    (xdc_Char)0x6f,  /* [1291] */
    (xdc_Char)0x72,  /* [1292] */
    (xdc_Char)0x74,  /* [1293] */
    (xdc_Char)0x73,  /* [1294] */
    (xdc_Char)0x45,  /* [1295] */
    (xdc_Char)0x76,  /* [1296] */
    (xdc_Char)0x65,  /* [1297] */
    (xdc_Char)0x6e,  /* [1298] */
    (xdc_Char)0x74,  /* [1299] */
    (xdc_Char)0x73,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x66,  /* [1302] */
    (xdc_Char)0x6c,  /* [1303] */
    (xdc_Char)0x61,  /* [1304] */
    (xdc_Char)0x67,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x69,  /* [1307] */
    (xdc_Char)0x73,  /* [1308] */
    (xdc_Char)0x20,  /* [1309] */
    (xdc_Char)0x64,  /* [1310] */
    (xdc_Char)0x69,  /* [1311] */
    (xdc_Char)0x73,  /* [1312] */
    (xdc_Char)0x61,  /* [1313] */
    (xdc_Char)0x62,  /* [1314] */
    (xdc_Char)0x6c,  /* [1315] */
    (xdc_Char)0x65,  /* [1316] */
    (xdc_Char)0x64,  /* [1317] */
    (xdc_Char)0x2e,  /* [1318] */
    (xdc_Char)0x0,  /* [1319] */
    (xdc_Char)0x41,  /* [1320] */
    (xdc_Char)0x5f,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x6e,  /* [1323] */
    (xdc_Char)0x76,  /* [1324] */
    (xdc_Char)0x54,  /* [1325] */
    (xdc_Char)0x69,  /* [1326] */
    (xdc_Char)0x6d,  /* [1327] */
    (xdc_Char)0x65,  /* [1328] */
    (xdc_Char)0x6f,  /* [1329] */
    (xdc_Char)0x75,  /* [1330] */
    (xdc_Char)0x74,  /* [1331] */
    (xdc_Char)0x3a,  /* [1332] */
    (xdc_Char)0x20,  /* [1333] */
    (xdc_Char)0x43,  /* [1334] */
    (xdc_Char)0x61,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x27,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x75,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x20,  /* [1343] */
    (xdc_Char)0x42,  /* [1344] */
    (xdc_Char)0x49,  /* [1345] */
    (xdc_Char)0x4f,  /* [1346] */
    (xdc_Char)0x53,  /* [1347] */
    (xdc_Char)0x5f,  /* [1348] */
    (xdc_Char)0x45,  /* [1349] */
    (xdc_Char)0x56,  /* [1350] */
    (xdc_Char)0x45,  /* [1351] */
    (xdc_Char)0x4e,  /* [1352] */
    (xdc_Char)0x54,  /* [1353] */
    (xdc_Char)0x5f,  /* [1354] */
    (xdc_Char)0x41,  /* [1355] */
    (xdc_Char)0x43,  /* [1356] */
    (xdc_Char)0x51,  /* [1357] */
    (xdc_Char)0x55,  /* [1358] */
    (xdc_Char)0x49,  /* [1359] */
    (xdc_Char)0x52,  /* [1360] */
    (xdc_Char)0x45,  /* [1361] */
    (xdc_Char)0x44,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x77,  /* [1364] */
    (xdc_Char)0x69,  /* [1365] */
    (xdc_Char)0x74,  /* [1366] */
    (xdc_Char)0x68,  /* [1367] */
    (xdc_Char)0x20,  /* [1368] */
    (xdc_Char)0x74,  /* [1369] */
    (xdc_Char)0x68,  /* [1370] */
    (xdc_Char)0x69,  /* [1371] */
    (xdc_Char)0x73,  /* [1372] */
    (xdc_Char)0x20,  /* [1373] */
    (xdc_Char)0x53,  /* [1374] */
    (xdc_Char)0x65,  /* [1375] */
    (xdc_Char)0x6d,  /* [1376] */
    (xdc_Char)0x61,  /* [1377] */
    (xdc_Char)0x70,  /* [1378] */
    (xdc_Char)0x68,  /* [1379] */
    (xdc_Char)0x6f,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x2e,  /* [1383] */
    (xdc_Char)0x0,  /* [1384] */
    (xdc_Char)0x41,  /* [1385] */
    (xdc_Char)0x5f,  /* [1386] */
    (xdc_Char)0x6f,  /* [1387] */
    (xdc_Char)0x76,  /* [1388] */
    (xdc_Char)0x65,  /* [1389] */
    (xdc_Char)0x72,  /* [1390] */
    (xdc_Char)0x66,  /* [1391] */
    (xdc_Char)0x6c,  /* [1392] */
    (xdc_Char)0x6f,  /* [1393] */
    (xdc_Char)0x77,  /* [1394] */
    (xdc_Char)0x3a,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x43,  /* [1397] */
    (xdc_Char)0x6f,  /* [1398] */
    (xdc_Char)0x75,  /* [1399] */
    (xdc_Char)0x6e,  /* [1400] */
    (xdc_Char)0x74,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x68,  /* [1403] */
    (xdc_Char)0x61,  /* [1404] */
    (xdc_Char)0x73,  /* [1405] */
    (xdc_Char)0x20,  /* [1406] */
    (xdc_Char)0x65,  /* [1407] */
    (xdc_Char)0x78,  /* [1408] */
    (xdc_Char)0x63,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x64,  /* [1412] */
    (xdc_Char)0x65,  /* [1413] */
    (xdc_Char)0x64,  /* [1414] */
    (xdc_Char)0x20,  /* [1415] */
    (xdc_Char)0x36,  /* [1416] */
    (xdc_Char)0x35,  /* [1417] */
    (xdc_Char)0x35,  /* [1418] */
    (xdc_Char)0x33,  /* [1419] */
    (xdc_Char)0x35,  /* [1420] */
    (xdc_Char)0x20,  /* [1421] */
    (xdc_Char)0x61,  /* [1422] */
    (xdc_Char)0x6e,  /* [1423] */
    (xdc_Char)0x64,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x72,  /* [1426] */
    (xdc_Char)0x6f,  /* [1427] */
    (xdc_Char)0x6c,  /* [1428] */
    (xdc_Char)0x6c,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x64,  /* [1431] */
    (xdc_Char)0x20,  /* [1432] */
    (xdc_Char)0x6f,  /* [1433] */
    (xdc_Char)0x76,  /* [1434] */
    (xdc_Char)0x65,  /* [1435] */
    (xdc_Char)0x72,  /* [1436] */
    (xdc_Char)0x2e,  /* [1437] */
    (xdc_Char)0x0,  /* [1438] */
    (xdc_Char)0x41,  /* [1439] */
    (xdc_Char)0x5f,  /* [1440] */
    (xdc_Char)0x70,  /* [1441] */
    (xdc_Char)0x65,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x64,  /* [1444] */
    (xdc_Char)0x54,  /* [1445] */
    (xdc_Char)0x61,  /* [1446] */
    (xdc_Char)0x73,  /* [1447] */
    (xdc_Char)0x6b,  /* [1448] */
    (xdc_Char)0x44,  /* [1449] */
    (xdc_Char)0x69,  /* [1450] */
    (xdc_Char)0x73,  /* [1451] */
    (xdc_Char)0x61,  /* [1452] */
    (xdc_Char)0x62,  /* [1453] */
    (xdc_Char)0x6c,  /* [1454] */
    (xdc_Char)0x65,  /* [1455] */
    (xdc_Char)0x64,  /* [1456] */
    (xdc_Char)0x3a,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x43,  /* [1459] */
    (xdc_Char)0x61,  /* [1460] */
    (xdc_Char)0x6e,  /* [1461] */
    (xdc_Char)0x6e,  /* [1462] */
    (xdc_Char)0x6f,  /* [1463] */
    (xdc_Char)0x74,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x63,  /* [1466] */
    (xdc_Char)0x61,  /* [1467] */
    (xdc_Char)0x6c,  /* [1468] */
    (xdc_Char)0x6c,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x53,  /* [1471] */
    (xdc_Char)0x65,  /* [1472] */
    (xdc_Char)0x6d,  /* [1473] */
    (xdc_Char)0x61,  /* [1474] */
    (xdc_Char)0x70,  /* [1475] */
    (xdc_Char)0x68,  /* [1476] */
    (xdc_Char)0x6f,  /* [1477] */
    (xdc_Char)0x72,  /* [1478] */
    (xdc_Char)0x65,  /* [1479] */
    (xdc_Char)0x5f,  /* [1480] */
    (xdc_Char)0x70,  /* [1481] */
    (xdc_Char)0x65,  /* [1482] */
    (xdc_Char)0x6e,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x28,  /* [1485] */
    (xdc_Char)0x29,  /* [1486] */
    (xdc_Char)0x20,  /* [1487] */
    (xdc_Char)0x77,  /* [1488] */
    (xdc_Char)0x68,  /* [1489] */
    (xdc_Char)0x69,  /* [1490] */
    (xdc_Char)0x6c,  /* [1491] */
    (xdc_Char)0x65,  /* [1492] */
    (xdc_Char)0x20,  /* [1493] */
    (xdc_Char)0x74,  /* [1494] */
    (xdc_Char)0x68,  /* [1495] */
    (xdc_Char)0x65,  /* [1496] */
    (xdc_Char)0x20,  /* [1497] */
    (xdc_Char)0x54,  /* [1498] */
    (xdc_Char)0x61,  /* [1499] */
    (xdc_Char)0x73,  /* [1500] */
    (xdc_Char)0x6b,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x6f,  /* [1503] */
    (xdc_Char)0x72,  /* [1504] */
    (xdc_Char)0x20,  /* [1505] */
    (xdc_Char)0x53,  /* [1506] */
    (xdc_Char)0x77,  /* [1507] */
    (xdc_Char)0x69,  /* [1508] */
    (xdc_Char)0x20,  /* [1509] */
    (xdc_Char)0x73,  /* [1510] */
    (xdc_Char)0x63,  /* [1511] */
    (xdc_Char)0x68,  /* [1512] */
    (xdc_Char)0x65,  /* [1513] */
    (xdc_Char)0x64,  /* [1514] */
    (xdc_Char)0x75,  /* [1515] */
    (xdc_Char)0x6c,  /* [1516] */
    (xdc_Char)0x65,  /* [1517] */
    (xdc_Char)0x72,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x69,  /* [1520] */
    (xdc_Char)0x73,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x64,  /* [1523] */
    (xdc_Char)0x69,  /* [1524] */
    (xdc_Char)0x73,  /* [1525] */
    (xdc_Char)0x61,  /* [1526] */
    (xdc_Char)0x62,  /* [1527] */
    (xdc_Char)0x6c,  /* [1528] */
    (xdc_Char)0x65,  /* [1529] */
    (xdc_Char)0x64,  /* [1530] */
    (xdc_Char)0x2e,  /* [1531] */
    (xdc_Char)0x0,  /* [1532] */
    (xdc_Char)0x41,  /* [1533] */
    (xdc_Char)0x5f,  /* [1534] */
    (xdc_Char)0x73,  /* [1535] */
    (xdc_Char)0x77,  /* [1536] */
    (xdc_Char)0x69,  /* [1537] */
    (xdc_Char)0x44,  /* [1538] */
    (xdc_Char)0x69,  /* [1539] */
    (xdc_Char)0x73,  /* [1540] */
    (xdc_Char)0x61,  /* [1541] */
    (xdc_Char)0x62,  /* [1542] */
    (xdc_Char)0x6c,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x64,  /* [1545] */
    (xdc_Char)0x3a,  /* [1546] */
    (xdc_Char)0x20,  /* [1547] */
    (xdc_Char)0x43,  /* [1548] */
    (xdc_Char)0x61,  /* [1549] */
    (xdc_Char)0x6e,  /* [1550] */
    (xdc_Char)0x6e,  /* [1551] */
    (xdc_Char)0x6f,  /* [1552] */
    (xdc_Char)0x74,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x63,  /* [1555] */
    (xdc_Char)0x72,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x61,  /* [1558] */
    (xdc_Char)0x74,  /* [1559] */
    (xdc_Char)0x65,  /* [1560] */
    (xdc_Char)0x20,  /* [1561] */
    (xdc_Char)0x61,  /* [1562] */
    (xdc_Char)0x20,  /* [1563] */
    (xdc_Char)0x53,  /* [1564] */
    (xdc_Char)0x77,  /* [1565] */
    (xdc_Char)0x69,  /* [1566] */
    (xdc_Char)0x20,  /* [1567] */
    (xdc_Char)0x77,  /* [1568] */
    (xdc_Char)0x68,  /* [1569] */
    (xdc_Char)0x65,  /* [1570] */
    (xdc_Char)0x6e,  /* [1571] */
    (xdc_Char)0x20,  /* [1572] */
    (xdc_Char)0x53,  /* [1573] */
    (xdc_Char)0x77,  /* [1574] */
    (xdc_Char)0x69,  /* [1575] */
    (xdc_Char)0x20,  /* [1576] */
    (xdc_Char)0x69,  /* [1577] */
    (xdc_Char)0x73,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x64,  /* [1580] */
    (xdc_Char)0x69,  /* [1581] */
    (xdc_Char)0x73,  /* [1582] */
    (xdc_Char)0x61,  /* [1583] */
    (xdc_Char)0x62,  /* [1584] */
    (xdc_Char)0x6c,  /* [1585] */
    (xdc_Char)0x65,  /* [1586] */
    (xdc_Char)0x64,  /* [1587] */
    (xdc_Char)0x2e,  /* [1588] */
    (xdc_Char)0x0,  /* [1589] */
    (xdc_Char)0x41,  /* [1590] */
    (xdc_Char)0x5f,  /* [1591] */
    (xdc_Char)0x62,  /* [1592] */
    (xdc_Char)0x61,  /* [1593] */
    (xdc_Char)0x64,  /* [1594] */
    (xdc_Char)0x50,  /* [1595] */
    (xdc_Char)0x72,  /* [1596] */
    (xdc_Char)0x69,  /* [1597] */
    (xdc_Char)0x6f,  /* [1598] */
    (xdc_Char)0x72,  /* [1599] */
    (xdc_Char)0x69,  /* [1600] */
    (xdc_Char)0x74,  /* [1601] */
    (xdc_Char)0x79,  /* [1602] */
    (xdc_Char)0x3a,  /* [1603] */
    (xdc_Char)0x20,  /* [1604] */
    (xdc_Char)0x41,  /* [1605] */
    (xdc_Char)0x6e,  /* [1606] */
    (xdc_Char)0x20,  /* [1607] */
    (xdc_Char)0x69,  /* [1608] */
    (xdc_Char)0x6e,  /* [1609] */
    (xdc_Char)0x76,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x69,  /* [1613] */
    (xdc_Char)0x64,  /* [1614] */
    (xdc_Char)0x20,  /* [1615] */
    (xdc_Char)0x53,  /* [1616] */
    (xdc_Char)0x77,  /* [1617] */
    (xdc_Char)0x69,  /* [1618] */
    (xdc_Char)0x20,  /* [1619] */
    (xdc_Char)0x70,  /* [1620] */
    (xdc_Char)0x72,  /* [1621] */
    (xdc_Char)0x69,  /* [1622] */
    (xdc_Char)0x6f,  /* [1623] */
    (xdc_Char)0x72,  /* [1624] */
    (xdc_Char)0x69,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x79,  /* [1627] */
    (xdc_Char)0x20,  /* [1628] */
    (xdc_Char)0x77,  /* [1629] */
    (xdc_Char)0x61,  /* [1630] */
    (xdc_Char)0x73,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x75,  /* [1633] */
    (xdc_Char)0x73,  /* [1634] */
    (xdc_Char)0x65,  /* [1635] */
    (xdc_Char)0x64,  /* [1636] */
    (xdc_Char)0x2e,  /* [1637] */
    (xdc_Char)0x0,  /* [1638] */
    (xdc_Char)0x41,  /* [1639] */
    (xdc_Char)0x5f,  /* [1640] */
    (xdc_Char)0x62,  /* [1641] */
    (xdc_Char)0x61,  /* [1642] */
    (xdc_Char)0x64,  /* [1643] */
    (xdc_Char)0x54,  /* [1644] */
    (xdc_Char)0x68,  /* [1645] */
    (xdc_Char)0x72,  /* [1646] */
    (xdc_Char)0x65,  /* [1647] */
    (xdc_Char)0x61,  /* [1648] */
    (xdc_Char)0x64,  /* [1649] */
    (xdc_Char)0x54,  /* [1650] */
    (xdc_Char)0x79,  /* [1651] */
    (xdc_Char)0x70,  /* [1652] */
    (xdc_Char)0x65,  /* [1653] */
    (xdc_Char)0x3a,  /* [1654] */
    (xdc_Char)0x20,  /* [1655] */
    (xdc_Char)0x43,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x6e,  /* [1658] */
    (xdc_Char)0x6e,  /* [1659] */
    (xdc_Char)0x6f,  /* [1660] */
    (xdc_Char)0x74,  /* [1661] */
    (xdc_Char)0x20,  /* [1662] */
    (xdc_Char)0x63,  /* [1663] */
    (xdc_Char)0x72,  /* [1664] */
    (xdc_Char)0x65,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x74,  /* [1667] */
    (xdc_Char)0x65,  /* [1668] */
    (xdc_Char)0x2f,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x65,  /* [1671] */
    (xdc_Char)0x6c,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x74,  /* [1674] */
    (xdc_Char)0x65,  /* [1675] */
    (xdc_Char)0x20,  /* [1676] */
    (xdc_Char)0x61,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x74,  /* [1679] */
    (xdc_Char)0x61,  /* [1680] */
    (xdc_Char)0x73,  /* [1681] */
    (xdc_Char)0x6b,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x66,  /* [1684] */
    (xdc_Char)0x72,  /* [1685] */
    (xdc_Char)0x6f,  /* [1686] */
    (xdc_Char)0x6d,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x48,  /* [1689] */
    (xdc_Char)0x77,  /* [1690] */
    (xdc_Char)0x69,  /* [1691] */
    (xdc_Char)0x20,  /* [1692] */
    (xdc_Char)0x6f,  /* [1693] */
    (xdc_Char)0x72,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x53,  /* [1696] */
    (xdc_Char)0x77,  /* [1697] */
    (xdc_Char)0x69,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x74,  /* [1700] */
    (xdc_Char)0x68,  /* [1701] */
    (xdc_Char)0x72,  /* [1702] */
    (xdc_Char)0x65,  /* [1703] */
    (xdc_Char)0x61,  /* [1704] */
    (xdc_Char)0x64,  /* [1705] */
    (xdc_Char)0x2e,  /* [1706] */
    (xdc_Char)0x0,  /* [1707] */
    (xdc_Char)0x41,  /* [1708] */
    (xdc_Char)0x5f,  /* [1709] */
    (xdc_Char)0x62,  /* [1710] */
    (xdc_Char)0x61,  /* [1711] */
    (xdc_Char)0x64,  /* [1712] */
    (xdc_Char)0x54,  /* [1713] */
    (xdc_Char)0x61,  /* [1714] */
    (xdc_Char)0x73,  /* [1715] */
    (xdc_Char)0x6b,  /* [1716] */
    (xdc_Char)0x53,  /* [1717] */
    (xdc_Char)0x74,  /* [1718] */
    (xdc_Char)0x61,  /* [1719] */
    (xdc_Char)0x74,  /* [1720] */
    (xdc_Char)0x65,  /* [1721] */
    (xdc_Char)0x3a,  /* [1722] */
    (xdc_Char)0x20,  /* [1723] */
    (xdc_Char)0x43,  /* [1724] */
    (xdc_Char)0x61,  /* [1725] */
    (xdc_Char)0x6e,  /* [1726] */
    (xdc_Char)0x27,  /* [1727] */
    (xdc_Char)0x74,  /* [1728] */
    (xdc_Char)0x20,  /* [1729] */
    (xdc_Char)0x64,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x6c,  /* [1732] */
    (xdc_Char)0x65,  /* [1733] */
    (xdc_Char)0x74,  /* [1734] */
    (xdc_Char)0x65,  /* [1735] */
    (xdc_Char)0x20,  /* [1736] */
    (xdc_Char)0x61,  /* [1737] */
    (xdc_Char)0x20,  /* [1738] */
    (xdc_Char)0x74,  /* [1739] */
    (xdc_Char)0x61,  /* [1740] */
    (xdc_Char)0x73,  /* [1741] */
    (xdc_Char)0x6b,  /* [1742] */
    (xdc_Char)0x20,  /* [1743] */
    (xdc_Char)0x69,  /* [1744] */
    (xdc_Char)0x6e,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x52,  /* [1747] */
    (xdc_Char)0x55,  /* [1748] */
    (xdc_Char)0x4e,  /* [1749] */
    (xdc_Char)0x4e,  /* [1750] */
    (xdc_Char)0x49,  /* [1751] */
    (xdc_Char)0x4e,  /* [1752] */
    (xdc_Char)0x47,  /* [1753] */
    (xdc_Char)0x20,  /* [1754] */
    (xdc_Char)0x73,  /* [1755] */
    (xdc_Char)0x74,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x74,  /* [1758] */
    (xdc_Char)0x65,  /* [1759] */
    (xdc_Char)0x2e,  /* [1760] */
    (xdc_Char)0x0,  /* [1761] */
    (xdc_Char)0x41,  /* [1762] */
    (xdc_Char)0x5f,  /* [1763] */
    (xdc_Char)0x6e,  /* [1764] */
    (xdc_Char)0x6f,  /* [1765] */
    (xdc_Char)0x50,  /* [1766] */
    (xdc_Char)0x65,  /* [1767] */
    (xdc_Char)0x6e,  /* [1768] */
    (xdc_Char)0x64,  /* [1769] */
    (xdc_Char)0x45,  /* [1770] */
    (xdc_Char)0x6c,  /* [1771] */
    (xdc_Char)0x65,  /* [1772] */
    (xdc_Char)0x6d,  /* [1773] */
    (xdc_Char)0x3a,  /* [1774] */
    (xdc_Char)0x20,  /* [1775] */
    (xdc_Char)0x4e,  /* [1776] */
    (xdc_Char)0x6f,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x20,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x6e,  /* [1781] */
    (xdc_Char)0x6f,  /* [1782] */
    (xdc_Char)0x75,  /* [1783] */
    (xdc_Char)0x67,  /* [1784] */
    (xdc_Char)0x68,  /* [1785] */
    (xdc_Char)0x20,  /* [1786] */
    (xdc_Char)0x69,  /* [1787] */
    (xdc_Char)0x6e,  /* [1788] */
    (xdc_Char)0x66,  /* [1789] */
    (xdc_Char)0x6f,  /* [1790] */
    (xdc_Char)0x20,  /* [1791] */
    (xdc_Char)0x74,  /* [1792] */
    (xdc_Char)0x6f,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x64,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x6c,  /* [1797] */
    (xdc_Char)0x65,  /* [1798] */
    (xdc_Char)0x74,  /* [1799] */
    (xdc_Char)0x65,  /* [1800] */
    (xdc_Char)0x20,  /* [1801] */
    (xdc_Char)0x42,  /* [1802] */
    (xdc_Char)0x4c,  /* [1803] */
    (xdc_Char)0x4f,  /* [1804] */
    (xdc_Char)0x43,  /* [1805] */
    (xdc_Char)0x4b,  /* [1806] */
    (xdc_Char)0x45,  /* [1807] */
    (xdc_Char)0x44,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x74,  /* [1810] */
    (xdc_Char)0x61,  /* [1811] */
    (xdc_Char)0x73,  /* [1812] */
    (xdc_Char)0x6b,  /* [1813] */
    (xdc_Char)0x2e,  /* [1814] */
    (xdc_Char)0x0,  /* [1815] */
    (xdc_Char)0x41,  /* [1816] */
    (xdc_Char)0x5f,  /* [1817] */
    (xdc_Char)0x74,  /* [1818] */
    (xdc_Char)0x61,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x6b,  /* [1821] */
    (xdc_Char)0x44,  /* [1822] */
    (xdc_Char)0x69,  /* [1823] */
    (xdc_Char)0x73,  /* [1824] */
    (xdc_Char)0x61,  /* [1825] */
    (xdc_Char)0x62,  /* [1826] */
    (xdc_Char)0x6c,  /* [1827] */
    (xdc_Char)0x65,  /* [1828] */
    (xdc_Char)0x64,  /* [1829] */
    (xdc_Char)0x3a,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x43,  /* [1832] */
    (xdc_Char)0x61,  /* [1833] */
    (xdc_Char)0x6e,  /* [1834] */
    (xdc_Char)0x6e,  /* [1835] */
    (xdc_Char)0x6f,  /* [1836] */
    (xdc_Char)0x74,  /* [1837] */
    (xdc_Char)0x20,  /* [1838] */
    (xdc_Char)0x63,  /* [1839] */
    (xdc_Char)0x72,  /* [1840] */
    (xdc_Char)0x65,  /* [1841] */
    (xdc_Char)0x61,  /* [1842] */
    (xdc_Char)0x74,  /* [1843] */
    (xdc_Char)0x65,  /* [1844] */
    (xdc_Char)0x20,  /* [1845] */
    (xdc_Char)0x61,  /* [1846] */
    (xdc_Char)0x20,  /* [1847] */
    (xdc_Char)0x74,  /* [1848] */
    (xdc_Char)0x61,  /* [1849] */
    (xdc_Char)0x73,  /* [1850] */
    (xdc_Char)0x6b,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x77,  /* [1853] */
    (xdc_Char)0x68,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x6e,  /* [1856] */
    (xdc_Char)0x20,  /* [1857] */
    (xdc_Char)0x74,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x73,  /* [1860] */
    (xdc_Char)0x6b,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6e,  /* [1863] */
    (xdc_Char)0x67,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x69,  /* [1866] */
    (xdc_Char)0x73,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x64,  /* [1869] */
    (xdc_Char)0x69,  /* [1870] */
    (xdc_Char)0x73,  /* [1871] */
    (xdc_Char)0x61,  /* [1872] */
    (xdc_Char)0x62,  /* [1873] */
    (xdc_Char)0x6c,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x64,  /* [1876] */
    (xdc_Char)0x2e,  /* [1877] */
    (xdc_Char)0x0,  /* [1878] */
    (xdc_Char)0x41,  /* [1879] */
    (xdc_Char)0x5f,  /* [1880] */
    (xdc_Char)0x62,  /* [1881] */
    (xdc_Char)0x61,  /* [1882] */
    (xdc_Char)0x64,  /* [1883] */
    (xdc_Char)0x50,  /* [1884] */
    (xdc_Char)0x72,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x72,  /* [1888] */
    (xdc_Char)0x69,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x79,  /* [1891] */
    (xdc_Char)0x3a,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x41,  /* [1894] */
    (xdc_Char)0x6e,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x69,  /* [1897] */
    (xdc_Char)0x6e,  /* [1898] */
    (xdc_Char)0x76,  /* [1899] */
    (xdc_Char)0x61,  /* [1900] */
    (xdc_Char)0x6c,  /* [1901] */
    (xdc_Char)0x69,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x20,  /* [1904] */
    (xdc_Char)0x74,  /* [1905] */
    (xdc_Char)0x61,  /* [1906] */
    (xdc_Char)0x73,  /* [1907] */
    (xdc_Char)0x6b,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x70,  /* [1910] */
    (xdc_Char)0x72,  /* [1911] */
    (xdc_Char)0x69,  /* [1912] */
    (xdc_Char)0x6f,  /* [1913] */
    (xdc_Char)0x72,  /* [1914] */
    (xdc_Char)0x69,  /* [1915] */
    (xdc_Char)0x74,  /* [1916] */
    (xdc_Char)0x79,  /* [1917] */
    (xdc_Char)0x20,  /* [1918] */
    (xdc_Char)0x77,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x73,  /* [1921] */
    (xdc_Char)0x20,  /* [1922] */
    (xdc_Char)0x75,  /* [1923] */
    (xdc_Char)0x73,  /* [1924] */
    (xdc_Char)0x65,  /* [1925] */
    (xdc_Char)0x64,  /* [1926] */
    (xdc_Char)0x2e,  /* [1927] */
    (xdc_Char)0x0,  /* [1928] */
    (xdc_Char)0x41,  /* [1929] */
    (xdc_Char)0x5f,  /* [1930] */
    (xdc_Char)0x62,  /* [1931] */
    (xdc_Char)0x61,  /* [1932] */
    (xdc_Char)0x64,  /* [1933] */
    (xdc_Char)0x54,  /* [1934] */
    (xdc_Char)0x69,  /* [1935] */
    (xdc_Char)0x6d,  /* [1936] */
    (xdc_Char)0x65,  /* [1937] */
    (xdc_Char)0x6f,  /* [1938] */
    (xdc_Char)0x75,  /* [1939] */
    (xdc_Char)0x74,  /* [1940] */
    (xdc_Char)0x3a,  /* [1941] */
    (xdc_Char)0x20,  /* [1942] */
    (xdc_Char)0x43,  /* [1943] */
    (xdc_Char)0x61,  /* [1944] */
    (xdc_Char)0x6e,  /* [1945] */
    (xdc_Char)0x27,  /* [1946] */
    (xdc_Char)0x74,  /* [1947] */
    (xdc_Char)0x20,  /* [1948] */
    (xdc_Char)0x73,  /* [1949] */
    (xdc_Char)0x6c,  /* [1950] */
    (xdc_Char)0x65,  /* [1951] */
    (xdc_Char)0x65,  /* [1952] */
    (xdc_Char)0x70,  /* [1953] */
    (xdc_Char)0x20,  /* [1954] */
    (xdc_Char)0x46,  /* [1955] */
    (xdc_Char)0x4f,  /* [1956] */
    (xdc_Char)0x52,  /* [1957] */
    (xdc_Char)0x45,  /* [1958] */
    (xdc_Char)0x56,  /* [1959] */
    (xdc_Char)0x45,  /* [1960] */
    (xdc_Char)0x52,  /* [1961] */
    (xdc_Char)0x2e,  /* [1962] */
    (xdc_Char)0x0,  /* [1963] */
    (xdc_Char)0x41,  /* [1964] */
    (xdc_Char)0x5f,  /* [1965] */
    (xdc_Char)0x62,  /* [1966] */
    (xdc_Char)0x61,  /* [1967] */
    (xdc_Char)0x64,  /* [1968] */
    (xdc_Char)0x41,  /* [1969] */
    (xdc_Char)0x66,  /* [1970] */
    (xdc_Char)0x66,  /* [1971] */
    (xdc_Char)0x69,  /* [1972] */
    (xdc_Char)0x6e,  /* [1973] */
    (xdc_Char)0x69,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x79,  /* [1976] */
    (xdc_Char)0x3a,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x49,  /* [1979] */
    (xdc_Char)0x6e,  /* [1980] */
    (xdc_Char)0x76,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x6c,  /* [1983] */
    (xdc_Char)0x69,  /* [1984] */
    (xdc_Char)0x64,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x61,  /* [1987] */
    (xdc_Char)0x66,  /* [1988] */
    (xdc_Char)0x66,  /* [1989] */
    (xdc_Char)0x69,  /* [1990] */
    (xdc_Char)0x6e,  /* [1991] */
    (xdc_Char)0x69,  /* [1992] */
    (xdc_Char)0x74,  /* [1993] */
    (xdc_Char)0x79,  /* [1994] */
    (xdc_Char)0x2e,  /* [1995] */
    (xdc_Char)0x0,  /* [1996] */
    (xdc_Char)0x41,  /* [1997] */
    (xdc_Char)0x5f,  /* [1998] */
    (xdc_Char)0x73,  /* [1999] */
    (xdc_Char)0x6c,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x65,  /* [2002] */
    (xdc_Char)0x70,  /* [2003] */
    (xdc_Char)0x54,  /* [2004] */
    (xdc_Char)0x61,  /* [2005] */
    (xdc_Char)0x73,  /* [2006] */
    (xdc_Char)0x6b,  /* [2007] */
    (xdc_Char)0x44,  /* [2008] */
    (xdc_Char)0x69,  /* [2009] */
    (xdc_Char)0x73,  /* [2010] */
    (xdc_Char)0x61,  /* [2011] */
    (xdc_Char)0x62,  /* [2012] */
    (xdc_Char)0x6c,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x64,  /* [2015] */
    (xdc_Char)0x3a,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x43,  /* [2018] */
    (xdc_Char)0x61,  /* [2019] */
    (xdc_Char)0x6e,  /* [2020] */
    (xdc_Char)0x6e,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x74,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x63,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x6c,  /* [2027] */
    (xdc_Char)0x6c,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x54,  /* [2030] */
    (xdc_Char)0x61,  /* [2031] */
    (xdc_Char)0x73,  /* [2032] */
    (xdc_Char)0x6b,  /* [2033] */
    (xdc_Char)0x5f,  /* [2034] */
    (xdc_Char)0x73,  /* [2035] */
    (xdc_Char)0x6c,  /* [2036] */
    (xdc_Char)0x65,  /* [2037] */
    (xdc_Char)0x65,  /* [2038] */
    (xdc_Char)0x70,  /* [2039] */
    (xdc_Char)0x28,  /* [2040] */
    (xdc_Char)0x29,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x77,  /* [2043] */
    (xdc_Char)0x68,  /* [2044] */
    (xdc_Char)0x69,  /* [2045] */
    (xdc_Char)0x6c,  /* [2046] */
    (xdc_Char)0x65,  /* [2047] */
    (xdc_Char)0x20,  /* [2048] */
    (xdc_Char)0x74,  /* [2049] */
    (xdc_Char)0x68,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x20,  /* [2052] */
    (xdc_Char)0x54,  /* [2053] */
    (xdc_Char)0x61,  /* [2054] */
    (xdc_Char)0x73,  /* [2055] */
    (xdc_Char)0x6b,  /* [2056] */
    (xdc_Char)0x20,  /* [2057] */
    (xdc_Char)0x73,  /* [2058] */
    (xdc_Char)0x63,  /* [2059] */
    (xdc_Char)0x68,  /* [2060] */
    (xdc_Char)0x65,  /* [2061] */
    (xdc_Char)0x64,  /* [2062] */
    (xdc_Char)0x75,  /* [2063] */
    (xdc_Char)0x6c,  /* [2064] */
    (xdc_Char)0x65,  /* [2065] */
    (xdc_Char)0x72,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x69,  /* [2068] */
    (xdc_Char)0x73,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x64,  /* [2071] */
    (xdc_Char)0x69,  /* [2072] */
    (xdc_Char)0x73,  /* [2073] */
    (xdc_Char)0x61,  /* [2074] */
    (xdc_Char)0x62,  /* [2075] */
    (xdc_Char)0x6c,  /* [2076] */
    (xdc_Char)0x65,  /* [2077] */
    (xdc_Char)0x64,  /* [2078] */
    (xdc_Char)0x2e,  /* [2079] */
    (xdc_Char)0x0,  /* [2080] */
    (xdc_Char)0x41,  /* [2081] */
    (xdc_Char)0x5f,  /* [2082] */
    (xdc_Char)0x69,  /* [2083] */
    (xdc_Char)0x6e,  /* [2084] */
    (xdc_Char)0x76,  /* [2085] */
    (xdc_Char)0x61,  /* [2086] */
    (xdc_Char)0x6c,  /* [2087] */
    (xdc_Char)0x69,  /* [2088] */
    (xdc_Char)0x64,  /* [2089] */
    (xdc_Char)0x43,  /* [2090] */
    (xdc_Char)0x6f,  /* [2091] */
    (xdc_Char)0x72,  /* [2092] */
    (xdc_Char)0x65,  /* [2093] */
    (xdc_Char)0x49,  /* [2094] */
    (xdc_Char)0x64,  /* [2095] */
    (xdc_Char)0x3a,  /* [2096] */
    (xdc_Char)0x20,  /* [2097] */
    (xdc_Char)0x43,  /* [2098] */
    (xdc_Char)0x61,  /* [2099] */
    (xdc_Char)0x6e,  /* [2100] */
    (xdc_Char)0x6e,  /* [2101] */
    (xdc_Char)0x6f,  /* [2102] */
    (xdc_Char)0x74,  /* [2103] */
    (xdc_Char)0x20,  /* [2104] */
    (xdc_Char)0x70,  /* [2105] */
    (xdc_Char)0x61,  /* [2106] */
    (xdc_Char)0x73,  /* [2107] */
    (xdc_Char)0x73,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x61,  /* [2110] */
    (xdc_Char)0x20,  /* [2111] */
    (xdc_Char)0x6e,  /* [2112] */
    (xdc_Char)0x6f,  /* [2113] */
    (xdc_Char)0x6e,  /* [2114] */
    (xdc_Char)0x2d,  /* [2115] */
    (xdc_Char)0x7a,  /* [2116] */
    (xdc_Char)0x65,  /* [2117] */
    (xdc_Char)0x72,  /* [2118] */
    (xdc_Char)0x6f,  /* [2119] */
    (xdc_Char)0x20,  /* [2120] */
    (xdc_Char)0x43,  /* [2121] */
    (xdc_Char)0x6f,  /* [2122] */
    (xdc_Char)0x72,  /* [2123] */
    (xdc_Char)0x65,  /* [2124] */
    (xdc_Char)0x49,  /* [2125] */
    (xdc_Char)0x64,  /* [2126] */
    (xdc_Char)0x20,  /* [2127] */
    (xdc_Char)0x69,  /* [2128] */
    (xdc_Char)0x6e,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x6f,  /* [2134] */
    (xdc_Char)0x6e,  /* [2135] */
    (xdc_Char)0x2d,  /* [2136] */
    (xdc_Char)0x53,  /* [2137] */
    (xdc_Char)0x4d,  /* [2138] */
    (xdc_Char)0x50,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x61,  /* [2141] */
    (xdc_Char)0x70,  /* [2142] */
    (xdc_Char)0x70,  /* [2143] */
    (xdc_Char)0x6c,  /* [2144] */
    (xdc_Char)0x69,  /* [2145] */
    (xdc_Char)0x63,  /* [2146] */
    (xdc_Char)0x61,  /* [2147] */
    (xdc_Char)0x74,  /* [2148] */
    (xdc_Char)0x69,  /* [2149] */
    (xdc_Char)0x6f,  /* [2150] */
    (xdc_Char)0x6e,  /* [2151] */
    (xdc_Char)0x2e,  /* [2152] */
    (xdc_Char)0x0,  /* [2153] */
    (xdc_Char)0x41,  /* [2154] */
    (xdc_Char)0x5f,  /* [2155] */
    (xdc_Char)0x75,  /* [2156] */
    (xdc_Char)0x6e,  /* [2157] */
    (xdc_Char)0x73,  /* [2158] */
    (xdc_Char)0x75,  /* [2159] */
    (xdc_Char)0x70,  /* [2160] */
    (xdc_Char)0x70,  /* [2161] */
    (xdc_Char)0x6f,  /* [2162] */
    (xdc_Char)0x72,  /* [2163] */
    (xdc_Char)0x74,  /* [2164] */
    (xdc_Char)0x65,  /* [2165] */
    (xdc_Char)0x64,  /* [2166] */
    (xdc_Char)0x4d,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x73,  /* [2169] */
    (xdc_Char)0x6b,  /* [2170] */
    (xdc_Char)0x69,  /* [2171] */
    (xdc_Char)0x6e,  /* [2172] */
    (xdc_Char)0x67,  /* [2173] */
    (xdc_Char)0x4f,  /* [2174] */
    (xdc_Char)0x70,  /* [2175] */
    (xdc_Char)0x74,  /* [2176] */
    (xdc_Char)0x69,  /* [2177] */
    (xdc_Char)0x6f,  /* [2178] */
    (xdc_Char)0x6e,  /* [2179] */
    (xdc_Char)0x3a,  /* [2180] */
    (xdc_Char)0x20,  /* [2181] */
    (xdc_Char)0x75,  /* [2182] */
    (xdc_Char)0x6e,  /* [2183] */
    (xdc_Char)0x73,  /* [2184] */
    (xdc_Char)0x75,  /* [2185] */
    (xdc_Char)0x70,  /* [2186] */
    (xdc_Char)0x70,  /* [2187] */
    (xdc_Char)0x6f,  /* [2188] */
    (xdc_Char)0x72,  /* [2189] */
    (xdc_Char)0x74,  /* [2190] */
    (xdc_Char)0x65,  /* [2191] */
    (xdc_Char)0x64,  /* [2192] */
    (xdc_Char)0x20,  /* [2193] */
    (xdc_Char)0x6d,  /* [2194] */
    (xdc_Char)0x61,  /* [2195] */
    (xdc_Char)0x73,  /* [2196] */
    (xdc_Char)0x6b,  /* [2197] */
    (xdc_Char)0x53,  /* [2198] */
    (xdc_Char)0x65,  /* [2199] */
    (xdc_Char)0x74,  /* [2200] */
    (xdc_Char)0x74,  /* [2201] */
    (xdc_Char)0x69,  /* [2202] */
    (xdc_Char)0x6e,  /* [2203] */
    (xdc_Char)0x67,  /* [2204] */
    (xdc_Char)0x2e,  /* [2205] */
    (xdc_Char)0x0,  /* [2206] */
    (xdc_Char)0x41,  /* [2207] */
    (xdc_Char)0x5f,  /* [2208] */
    (xdc_Char)0x62,  /* [2209] */
    (xdc_Char)0x61,  /* [2210] */
    (xdc_Char)0x64,  /* [2211] */
    (xdc_Char)0x54,  /* [2212] */
    (xdc_Char)0x68,  /* [2213] */
    (xdc_Char)0x72,  /* [2214] */
    (xdc_Char)0x65,  /* [2215] */
    (xdc_Char)0x61,  /* [2216] */
    (xdc_Char)0x64,  /* [2217] */
    (xdc_Char)0x54,  /* [2218] */
    (xdc_Char)0x79,  /* [2219] */
    (xdc_Char)0x70,  /* [2220] */
    (xdc_Char)0x65,  /* [2221] */
    (xdc_Char)0x3a,  /* [2222] */
    (xdc_Char)0x20,  /* [2223] */
    (xdc_Char)0x43,  /* [2224] */
    (xdc_Char)0x61,  /* [2225] */
    (xdc_Char)0x6e,  /* [2226] */
    (xdc_Char)0x6e,  /* [2227] */
    (xdc_Char)0x6f,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x20,  /* [2230] */
    (xdc_Char)0x63,  /* [2231] */
    (xdc_Char)0x61,  /* [2232] */
    (xdc_Char)0x6c,  /* [2233] */
    (xdc_Char)0x6c,  /* [2234] */
    (xdc_Char)0x20,  /* [2235] */
    (xdc_Char)0x61,  /* [2236] */
    (xdc_Char)0x20,  /* [2237] */
    (xdc_Char)0x43,  /* [2238] */
    (xdc_Char)0x20,  /* [2239] */
    (xdc_Char)0x72,  /* [2240] */
    (xdc_Char)0x75,  /* [2241] */
    (xdc_Char)0x6e,  /* [2242] */
    (xdc_Char)0x74,  /* [2243] */
    (xdc_Char)0x69,  /* [2244] */
    (xdc_Char)0x6d,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x20,  /* [2247] */
    (xdc_Char)0x6c,  /* [2248] */
    (xdc_Char)0x69,  /* [2249] */
    (xdc_Char)0x62,  /* [2250] */
    (xdc_Char)0x72,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x72,  /* [2253] */
    (xdc_Char)0x79,  /* [2254] */
    (xdc_Char)0x20,  /* [2255] */
    (xdc_Char)0x41,  /* [2256] */
    (xdc_Char)0x50,  /* [2257] */
    (xdc_Char)0x49,  /* [2258] */
    (xdc_Char)0x20,  /* [2259] */
    (xdc_Char)0x66,  /* [2260] */
    (xdc_Char)0x72,  /* [2261] */
    (xdc_Char)0x6f,  /* [2262] */
    (xdc_Char)0x6d,  /* [2263] */
    (xdc_Char)0x20,  /* [2264] */
    (xdc_Char)0x61,  /* [2265] */
    (xdc_Char)0x20,  /* [2266] */
    (xdc_Char)0x48,  /* [2267] */
    (xdc_Char)0x77,  /* [2268] */
    (xdc_Char)0x69,  /* [2269] */
    (xdc_Char)0x20,  /* [2270] */
    (xdc_Char)0x6f,  /* [2271] */
    (xdc_Char)0x72,  /* [2272] */
    (xdc_Char)0x20,  /* [2273] */
    (xdc_Char)0x53,  /* [2274] */
    (xdc_Char)0x77,  /* [2275] */
    (xdc_Char)0x69,  /* [2276] */
    (xdc_Char)0x20,  /* [2277] */
    (xdc_Char)0x74,  /* [2278] */
    (xdc_Char)0x68,  /* [2279] */
    (xdc_Char)0x72,  /* [2280] */
    (xdc_Char)0x65,  /* [2281] */
    (xdc_Char)0x61,  /* [2282] */
    (xdc_Char)0x64,  /* [2283] */
    (xdc_Char)0x2e,  /* [2284] */
    (xdc_Char)0x0,  /* [2285] */
    (xdc_Char)0x41,  /* [2286] */
    (xdc_Char)0x5f,  /* [2287] */
    (xdc_Char)0x7a,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x72,  /* [2290] */
    (xdc_Char)0x6f,  /* [2291] */
    (xdc_Char)0x54,  /* [2292] */
    (xdc_Char)0x69,  /* [2293] */
    (xdc_Char)0x6d,  /* [2294] */
    (xdc_Char)0x65,  /* [2295] */
    (xdc_Char)0x6f,  /* [2296] */
    (xdc_Char)0x75,  /* [2297] */
    (xdc_Char)0x74,  /* [2298] */
    (xdc_Char)0x3a,  /* [2299] */
    (xdc_Char)0x20,  /* [2300] */
    (xdc_Char)0x54,  /* [2301] */
    (xdc_Char)0x69,  /* [2302] */
    (xdc_Char)0x6d,  /* [2303] */
    (xdc_Char)0x65,  /* [2304] */
    (xdc_Char)0x6f,  /* [2305] */
    (xdc_Char)0x75,  /* [2306] */
    (xdc_Char)0x74,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x76,  /* [2309] */
    (xdc_Char)0x61,  /* [2310] */
    (xdc_Char)0x6c,  /* [2311] */
    (xdc_Char)0x75,  /* [2312] */
    (xdc_Char)0x65,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x61,  /* [2315] */
    (xdc_Char)0x6e,  /* [2316] */
    (xdc_Char)0x6e,  /* [2317] */
    (xdc_Char)0x6f,  /* [2318] */
    (xdc_Char)0x74,  /* [2319] */
    (xdc_Char)0x20,  /* [2320] */
    (xdc_Char)0x62,  /* [2321] */
    (xdc_Char)0x65,  /* [2322] */
    (xdc_Char)0x20,  /* [2323] */
    (xdc_Char)0x7a,  /* [2324] */
    (xdc_Char)0x65,  /* [2325] */
    (xdc_Char)0x72,  /* [2326] */
    (xdc_Char)0x6f,  /* [2327] */
    (xdc_Char)0x0,  /* [2328] */
    (xdc_Char)0x41,  /* [2329] */
    (xdc_Char)0x5f,  /* [2330] */
    (xdc_Char)0x69,  /* [2331] */
    (xdc_Char)0x6e,  /* [2332] */
    (xdc_Char)0x76,  /* [2333] */
    (xdc_Char)0x61,  /* [2334] */
    (xdc_Char)0x6c,  /* [2335] */
    (xdc_Char)0x69,  /* [2336] */
    (xdc_Char)0x64,  /* [2337] */
    (xdc_Char)0x4b,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x79,  /* [2340] */
    (xdc_Char)0x3a,  /* [2341] */
    (xdc_Char)0x20,  /* [2342] */
    (xdc_Char)0x74,  /* [2343] */
    (xdc_Char)0x68,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x20,  /* [2346] */
    (xdc_Char)0x6b,  /* [2347] */
    (xdc_Char)0x65,  /* [2348] */
    (xdc_Char)0x79,  /* [2349] */
    (xdc_Char)0x20,  /* [2350] */
    (xdc_Char)0x6d,  /* [2351] */
    (xdc_Char)0x75,  /* [2352] */
    (xdc_Char)0x73,  /* [2353] */
    (xdc_Char)0x74,  /* [2354] */
    (xdc_Char)0x20,  /* [2355] */
    (xdc_Char)0x62,  /* [2356] */
    (xdc_Char)0x65,  /* [2357] */
    (xdc_Char)0x20,  /* [2358] */
    (xdc_Char)0x73,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x74,  /* [2361] */
    (xdc_Char)0x20,  /* [2362] */
    (xdc_Char)0x74,  /* [2363] */
    (xdc_Char)0x6f,  /* [2364] */
    (xdc_Char)0x20,  /* [2365] */
    (xdc_Char)0x61,  /* [2366] */
    (xdc_Char)0x20,  /* [2367] */
    (xdc_Char)0x6e,  /* [2368] */
    (xdc_Char)0x6f,  /* [2369] */
    (xdc_Char)0x6e,  /* [2370] */
    (xdc_Char)0x2d,  /* [2371] */
    (xdc_Char)0x64,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x66,  /* [2374] */
    (xdc_Char)0x61,  /* [2375] */
    (xdc_Char)0x75,  /* [2376] */
    (xdc_Char)0x6c,  /* [2377] */
    (xdc_Char)0x74,  /* [2378] */
    (xdc_Char)0x20,  /* [2379] */
    (xdc_Char)0x76,  /* [2380] */
    (xdc_Char)0x61,  /* [2381] */
    (xdc_Char)0x6c,  /* [2382] */
    (xdc_Char)0x75,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x0,  /* [2385] */
    (xdc_Char)0x41,  /* [2386] */
    (xdc_Char)0x5f,  /* [2387] */
    (xdc_Char)0x62,  /* [2388] */
    (xdc_Char)0x61,  /* [2389] */
    (xdc_Char)0x64,  /* [2390] */
    (xdc_Char)0x43,  /* [2391] */
    (xdc_Char)0x6f,  /* [2392] */
    (xdc_Char)0x6e,  /* [2393] */
    (xdc_Char)0x74,  /* [2394] */
    (xdc_Char)0x65,  /* [2395] */
    (xdc_Char)0x78,  /* [2396] */
    (xdc_Char)0x74,  /* [2397] */
    (xdc_Char)0x3a,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x62,  /* [2400] */
    (xdc_Char)0x61,  /* [2401] */
    (xdc_Char)0x64,  /* [2402] */
    (xdc_Char)0x20,  /* [2403] */
    (xdc_Char)0x63,  /* [2404] */
    (xdc_Char)0x61,  /* [2405] */
    (xdc_Char)0x6c,  /* [2406] */
    (xdc_Char)0x6c,  /* [2407] */
    (xdc_Char)0x69,  /* [2408] */
    (xdc_Char)0x6e,  /* [2409] */
    (xdc_Char)0x67,  /* [2410] */
    (xdc_Char)0x20,  /* [2411] */
    (xdc_Char)0x63,  /* [2412] */
    (xdc_Char)0x6f,  /* [2413] */
    (xdc_Char)0x6e,  /* [2414] */
    (xdc_Char)0x74,  /* [2415] */
    (xdc_Char)0x65,  /* [2416] */
    (xdc_Char)0x78,  /* [2417] */
    (xdc_Char)0x74,  /* [2418] */
    (xdc_Char)0x2e,  /* [2419] */
    (xdc_Char)0x20,  /* [2420] */
    (xdc_Char)0x4d,  /* [2421] */
    (xdc_Char)0x61,  /* [2422] */
    (xdc_Char)0x79,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x6e,  /* [2425] */
    (xdc_Char)0x6f,  /* [2426] */
    (xdc_Char)0x74,  /* [2427] */
    (xdc_Char)0x20,  /* [2428] */
    (xdc_Char)0x62,  /* [2429] */
    (xdc_Char)0x65,  /* [2430] */
    (xdc_Char)0x20,  /* [2431] */
    (xdc_Char)0x65,  /* [2432] */
    (xdc_Char)0x6e,  /* [2433] */
    (xdc_Char)0x74,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
    (xdc_Char)0x72,  /* [2436] */
    (xdc_Char)0x65,  /* [2437] */
    (xdc_Char)0x64,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x66,  /* [2440] */
    (xdc_Char)0x72,  /* [2441] */
    (xdc_Char)0x6f,  /* [2442] */
    (xdc_Char)0x6d,  /* [2443] */
    (xdc_Char)0x20,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x20,  /* [2446] */
    (xdc_Char)0x68,  /* [2447] */
    (xdc_Char)0x61,  /* [2448] */
    (xdc_Char)0x72,  /* [2449] */
    (xdc_Char)0x64,  /* [2450] */
    (xdc_Char)0x77,  /* [2451] */
    (xdc_Char)0x61,  /* [2452] */
    (xdc_Char)0x72,  /* [2453] */
    (xdc_Char)0x65,  /* [2454] */
    (xdc_Char)0x20,  /* [2455] */
    (xdc_Char)0x69,  /* [2456] */
    (xdc_Char)0x6e,  /* [2457] */
    (xdc_Char)0x74,  /* [2458] */
    (xdc_Char)0x65,  /* [2459] */
    (xdc_Char)0x72,  /* [2460] */
    (xdc_Char)0x72,  /* [2461] */
    (xdc_Char)0x75,  /* [2462] */
    (xdc_Char)0x70,  /* [2463] */
    (xdc_Char)0x74,  /* [2464] */
    (xdc_Char)0x20,  /* [2465] */
    (xdc_Char)0x74,  /* [2466] */
    (xdc_Char)0x68,  /* [2467] */
    (xdc_Char)0x72,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x61,  /* [2470] */
    (xdc_Char)0x64,  /* [2471] */
    (xdc_Char)0x2e,  /* [2472] */
    (xdc_Char)0x0,  /* [2473] */
    (xdc_Char)0x41,  /* [2474] */
    (xdc_Char)0x5f,  /* [2475] */
    (xdc_Char)0x62,  /* [2476] */
    (xdc_Char)0x61,  /* [2477] */
    (xdc_Char)0x64,  /* [2478] */
    (xdc_Char)0x43,  /* [2479] */
    (xdc_Char)0x6f,  /* [2480] */
    (xdc_Char)0x6e,  /* [2481] */
    (xdc_Char)0x74,  /* [2482] */
    (xdc_Char)0x65,  /* [2483] */
    (xdc_Char)0x78,  /* [2484] */
    (xdc_Char)0x74,  /* [2485] */
    (xdc_Char)0x3a,  /* [2486] */
    (xdc_Char)0x20,  /* [2487] */
    (xdc_Char)0x62,  /* [2488] */
    (xdc_Char)0x61,  /* [2489] */
    (xdc_Char)0x64,  /* [2490] */
    (xdc_Char)0x20,  /* [2491] */
    (xdc_Char)0x63,  /* [2492] */
    (xdc_Char)0x61,  /* [2493] */
    (xdc_Char)0x6c,  /* [2494] */
    (xdc_Char)0x6c,  /* [2495] */
    (xdc_Char)0x69,  /* [2496] */
    (xdc_Char)0x6e,  /* [2497] */
    (xdc_Char)0x67,  /* [2498] */
    (xdc_Char)0x20,  /* [2499] */
    (xdc_Char)0x63,  /* [2500] */
    (xdc_Char)0x6f,  /* [2501] */
    (xdc_Char)0x6e,  /* [2502] */
    (xdc_Char)0x74,  /* [2503] */
    (xdc_Char)0x65,  /* [2504] */
    (xdc_Char)0x78,  /* [2505] */
    (xdc_Char)0x74,  /* [2506] */
    (xdc_Char)0x2e,  /* [2507] */
    (xdc_Char)0x20,  /* [2508] */
    (xdc_Char)0x4d,  /* [2509] */
    (xdc_Char)0x61,  /* [2510] */
    (xdc_Char)0x79,  /* [2511] */
    (xdc_Char)0x20,  /* [2512] */
    (xdc_Char)0x6e,  /* [2513] */
    (xdc_Char)0x6f,  /* [2514] */
    (xdc_Char)0x74,  /* [2515] */
    (xdc_Char)0x20,  /* [2516] */
    (xdc_Char)0x62,  /* [2517] */
    (xdc_Char)0x65,  /* [2518] */
    (xdc_Char)0x20,  /* [2519] */
    (xdc_Char)0x65,  /* [2520] */
    (xdc_Char)0x6e,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x72,  /* [2524] */
    (xdc_Char)0x65,  /* [2525] */
    (xdc_Char)0x64,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x66,  /* [2528] */
    (xdc_Char)0x72,  /* [2529] */
    (xdc_Char)0x6f,  /* [2530] */
    (xdc_Char)0x6d,  /* [2531] */
    (xdc_Char)0x20,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x73,  /* [2535] */
    (xdc_Char)0x6f,  /* [2536] */
    (xdc_Char)0x66,  /* [2537] */
    (xdc_Char)0x74,  /* [2538] */
    (xdc_Char)0x77,  /* [2539] */
    (xdc_Char)0x61,  /* [2540] */
    (xdc_Char)0x72,  /* [2541] */
    (xdc_Char)0x65,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x6f,  /* [2544] */
    (xdc_Char)0x72,  /* [2545] */
    (xdc_Char)0x20,  /* [2546] */
    (xdc_Char)0x68,  /* [2547] */
    (xdc_Char)0x61,  /* [2548] */
    (xdc_Char)0x72,  /* [2549] */
    (xdc_Char)0x64,  /* [2550] */
    (xdc_Char)0x77,  /* [2551] */
    (xdc_Char)0x61,  /* [2552] */
    (xdc_Char)0x72,  /* [2553] */
    (xdc_Char)0x65,  /* [2554] */
    (xdc_Char)0x20,  /* [2555] */
    (xdc_Char)0x69,  /* [2556] */
    (xdc_Char)0x6e,  /* [2557] */
    (xdc_Char)0x74,  /* [2558] */
    (xdc_Char)0x65,  /* [2559] */
    (xdc_Char)0x72,  /* [2560] */
    (xdc_Char)0x72,  /* [2561] */
    (xdc_Char)0x75,  /* [2562] */
    (xdc_Char)0x70,  /* [2563] */
    (xdc_Char)0x74,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x74,  /* [2566] */
    (xdc_Char)0x68,  /* [2567] */
    (xdc_Char)0x72,  /* [2568] */
    (xdc_Char)0x65,  /* [2569] */
    (xdc_Char)0x61,  /* [2570] */
    (xdc_Char)0x64,  /* [2571] */
    (xdc_Char)0x2e,  /* [2572] */
    (xdc_Char)0x0,  /* [2573] */
    (xdc_Char)0x41,  /* [2574] */
    (xdc_Char)0x5f,  /* [2575] */
    (xdc_Char)0x62,  /* [2576] */
    (xdc_Char)0x61,  /* [2577] */
    (xdc_Char)0x64,  /* [2578] */
    (xdc_Char)0x43,  /* [2579] */
    (xdc_Char)0x6f,  /* [2580] */
    (xdc_Char)0x6e,  /* [2581] */
    (xdc_Char)0x74,  /* [2582] */
    (xdc_Char)0x65,  /* [2583] */
    (xdc_Char)0x78,  /* [2584] */
    (xdc_Char)0x74,  /* [2585] */
    (xdc_Char)0x3a,  /* [2586] */
    (xdc_Char)0x20,  /* [2587] */
    (xdc_Char)0x62,  /* [2588] */
    (xdc_Char)0x61,  /* [2589] */
    (xdc_Char)0x64,  /* [2590] */
    (xdc_Char)0x20,  /* [2591] */
    (xdc_Char)0x63,  /* [2592] */
    (xdc_Char)0x61,  /* [2593] */
    (xdc_Char)0x6c,  /* [2594] */
    (xdc_Char)0x6c,  /* [2595] */
    (xdc_Char)0x69,  /* [2596] */
    (xdc_Char)0x6e,  /* [2597] */
    (xdc_Char)0x67,  /* [2598] */
    (xdc_Char)0x20,  /* [2599] */
    (xdc_Char)0x63,  /* [2600] */
    (xdc_Char)0x6f,  /* [2601] */
    (xdc_Char)0x6e,  /* [2602] */
    (xdc_Char)0x74,  /* [2603] */
    (xdc_Char)0x65,  /* [2604] */
    (xdc_Char)0x78,  /* [2605] */
    (xdc_Char)0x74,  /* [2606] */
    (xdc_Char)0x2e,  /* [2607] */
    (xdc_Char)0x20,  /* [2608] */
    (xdc_Char)0x53,  /* [2609] */
    (xdc_Char)0x65,  /* [2610] */
    (xdc_Char)0x65,  /* [2611] */
    (xdc_Char)0x20,  /* [2612] */
    (xdc_Char)0x47,  /* [2613] */
    (xdc_Char)0x61,  /* [2614] */
    (xdc_Char)0x74,  /* [2615] */
    (xdc_Char)0x65,  /* [2616] */
    (xdc_Char)0x4d,  /* [2617] */
    (xdc_Char)0x75,  /* [2618] */
    (xdc_Char)0x74,  /* [2619] */
    (xdc_Char)0x65,  /* [2620] */
    (xdc_Char)0x78,  /* [2621] */
    (xdc_Char)0x50,  /* [2622] */
    (xdc_Char)0x72,  /* [2623] */
    (xdc_Char)0x69,  /* [2624] */
    (xdc_Char)0x20,  /* [2625] */
    (xdc_Char)0x41,  /* [2626] */
    (xdc_Char)0x50,  /* [2627] */
    (xdc_Char)0x49,  /* [2628] */
    (xdc_Char)0x20,  /* [2629] */
    (xdc_Char)0x64,  /* [2630] */
    (xdc_Char)0x6f,  /* [2631] */
    (xdc_Char)0x63,  /* [2632] */
    (xdc_Char)0x20,  /* [2633] */
    (xdc_Char)0x66,  /* [2634] */
    (xdc_Char)0x6f,  /* [2635] */
    (xdc_Char)0x72,  /* [2636] */
    (xdc_Char)0x20,  /* [2637] */
    (xdc_Char)0x64,  /* [2638] */
    (xdc_Char)0x65,  /* [2639] */
    (xdc_Char)0x74,  /* [2640] */
    (xdc_Char)0x61,  /* [2641] */
    (xdc_Char)0x69,  /* [2642] */
    (xdc_Char)0x6c,  /* [2643] */
    (xdc_Char)0x73,  /* [2644] */
    (xdc_Char)0x2e,  /* [2645] */
    (xdc_Char)0x0,  /* [2646] */
    (xdc_Char)0x41,  /* [2647] */
    (xdc_Char)0x5f,  /* [2648] */
    (xdc_Char)0x65,  /* [2649] */
    (xdc_Char)0x6e,  /* [2650] */
    (xdc_Char)0x74,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x72,  /* [2653] */
    (xdc_Char)0x54,  /* [2654] */
    (xdc_Char)0x61,  /* [2655] */
    (xdc_Char)0x73,  /* [2656] */
    (xdc_Char)0x6b,  /* [2657] */
    (xdc_Char)0x44,  /* [2658] */
    (xdc_Char)0x69,  /* [2659] */
    (xdc_Char)0x73,  /* [2660] */
    (xdc_Char)0x61,  /* [2661] */
    (xdc_Char)0x62,  /* [2662] */
    (xdc_Char)0x6c,  /* [2663] */
    (xdc_Char)0x65,  /* [2664] */
    (xdc_Char)0x64,  /* [2665] */
    (xdc_Char)0x3a,  /* [2666] */
    (xdc_Char)0x20,  /* [2667] */
    (xdc_Char)0x43,  /* [2668] */
    (xdc_Char)0x61,  /* [2669] */
    (xdc_Char)0x6e,  /* [2670] */
    (xdc_Char)0x6e,  /* [2671] */
    (xdc_Char)0x6f,  /* [2672] */
    (xdc_Char)0x74,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x63,  /* [2675] */
    (xdc_Char)0x61,  /* [2676] */
    (xdc_Char)0x6c,  /* [2677] */
    (xdc_Char)0x6c,  /* [2678] */
    (xdc_Char)0x20,  /* [2679] */
    (xdc_Char)0x47,  /* [2680] */
    (xdc_Char)0x61,  /* [2681] */
    (xdc_Char)0x74,  /* [2682] */
    (xdc_Char)0x65,  /* [2683] */
    (xdc_Char)0x4d,  /* [2684] */
    (xdc_Char)0x75,  /* [2685] */
    (xdc_Char)0x74,  /* [2686] */
    (xdc_Char)0x65,  /* [2687] */
    (xdc_Char)0x78,  /* [2688] */
    (xdc_Char)0x50,  /* [2689] */
    (xdc_Char)0x72,  /* [2690] */
    (xdc_Char)0x69,  /* [2691] */
    (xdc_Char)0x5f,  /* [2692] */
    (xdc_Char)0x65,  /* [2693] */
    (xdc_Char)0x6e,  /* [2694] */
    (xdc_Char)0x74,  /* [2695] */
    (xdc_Char)0x65,  /* [2696] */
    (xdc_Char)0x72,  /* [2697] */
    (xdc_Char)0x28,  /* [2698] */
    (xdc_Char)0x29,  /* [2699] */
    (xdc_Char)0x20,  /* [2700] */
    (xdc_Char)0x77,  /* [2701] */
    (xdc_Char)0x68,  /* [2702] */
    (xdc_Char)0x69,  /* [2703] */
    (xdc_Char)0x6c,  /* [2704] */
    (xdc_Char)0x65,  /* [2705] */
    (xdc_Char)0x20,  /* [2706] */
    (xdc_Char)0x74,  /* [2707] */
    (xdc_Char)0x68,  /* [2708] */
    (xdc_Char)0x65,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x54,  /* [2711] */
    (xdc_Char)0x61,  /* [2712] */
    (xdc_Char)0x73,  /* [2713] */
    (xdc_Char)0x6b,  /* [2714] */
    (xdc_Char)0x20,  /* [2715] */
    (xdc_Char)0x6f,  /* [2716] */
    (xdc_Char)0x72,  /* [2717] */
    (xdc_Char)0x20,  /* [2718] */
    (xdc_Char)0x53,  /* [2719] */
    (xdc_Char)0x77,  /* [2720] */
    (xdc_Char)0x69,  /* [2721] */
    (xdc_Char)0x20,  /* [2722] */
    (xdc_Char)0x73,  /* [2723] */
    (xdc_Char)0x63,  /* [2724] */
    (xdc_Char)0x68,  /* [2725] */
    (xdc_Char)0x65,  /* [2726] */
    (xdc_Char)0x64,  /* [2727] */
    (xdc_Char)0x75,  /* [2728] */
    (xdc_Char)0x6c,  /* [2729] */
    (xdc_Char)0x65,  /* [2730] */
    (xdc_Char)0x72,  /* [2731] */
    (xdc_Char)0x20,  /* [2732] */
    (xdc_Char)0x69,  /* [2733] */
    (xdc_Char)0x73,  /* [2734] */
    (xdc_Char)0x20,  /* [2735] */
    (xdc_Char)0x64,  /* [2736] */
    (xdc_Char)0x69,  /* [2737] */
    (xdc_Char)0x73,  /* [2738] */
    (xdc_Char)0x61,  /* [2739] */
    (xdc_Char)0x62,  /* [2740] */
    (xdc_Char)0x6c,  /* [2741] */
    (xdc_Char)0x65,  /* [2742] */
    (xdc_Char)0x64,  /* [2743] */
    (xdc_Char)0x2e,  /* [2744] */
    (xdc_Char)0x0,  /* [2745] */
    (xdc_Char)0x41,  /* [2746] */
    (xdc_Char)0x5f,  /* [2747] */
    (xdc_Char)0x62,  /* [2748] */
    (xdc_Char)0x61,  /* [2749] */
    (xdc_Char)0x64,  /* [2750] */
    (xdc_Char)0x43,  /* [2751] */
    (xdc_Char)0x6f,  /* [2752] */
    (xdc_Char)0x6e,  /* [2753] */
    (xdc_Char)0x74,  /* [2754] */
    (xdc_Char)0x65,  /* [2755] */
    (xdc_Char)0x78,  /* [2756] */
    (xdc_Char)0x74,  /* [2757] */
    (xdc_Char)0x3a,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x62,  /* [2760] */
    (xdc_Char)0x61,  /* [2761] */
    (xdc_Char)0x64,  /* [2762] */
    (xdc_Char)0x20,  /* [2763] */
    (xdc_Char)0x63,  /* [2764] */
    (xdc_Char)0x61,  /* [2765] */
    (xdc_Char)0x6c,  /* [2766] */
    (xdc_Char)0x6c,  /* [2767] */
    (xdc_Char)0x69,  /* [2768] */
    (xdc_Char)0x6e,  /* [2769] */
    (xdc_Char)0x67,  /* [2770] */
    (xdc_Char)0x20,  /* [2771] */
    (xdc_Char)0x63,  /* [2772] */
    (xdc_Char)0x6f,  /* [2773] */
    (xdc_Char)0x6e,  /* [2774] */
    (xdc_Char)0x74,  /* [2775] */
    (xdc_Char)0x65,  /* [2776] */
    (xdc_Char)0x78,  /* [2777] */
    (xdc_Char)0x74,  /* [2778] */
    (xdc_Char)0x2e,  /* [2779] */
    (xdc_Char)0x20,  /* [2780] */
    (xdc_Char)0x53,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x65,  /* [2783] */
    (xdc_Char)0x20,  /* [2784] */
    (xdc_Char)0x47,  /* [2785] */
    (xdc_Char)0x61,  /* [2786] */
    (xdc_Char)0x74,  /* [2787] */
    (xdc_Char)0x65,  /* [2788] */
    (xdc_Char)0x4d,  /* [2789] */
    (xdc_Char)0x75,  /* [2790] */
    (xdc_Char)0x74,  /* [2791] */
    (xdc_Char)0x65,  /* [2792] */
    (xdc_Char)0x78,  /* [2793] */
    (xdc_Char)0x20,  /* [2794] */
    (xdc_Char)0x41,  /* [2795] */
    (xdc_Char)0x50,  /* [2796] */
    (xdc_Char)0x49,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x64,  /* [2799] */
    (xdc_Char)0x6f,  /* [2800] */
    (xdc_Char)0x63,  /* [2801] */
    (xdc_Char)0x20,  /* [2802] */
    (xdc_Char)0x66,  /* [2803] */
    (xdc_Char)0x6f,  /* [2804] */
    (xdc_Char)0x72,  /* [2805] */
    (xdc_Char)0x20,  /* [2806] */
    (xdc_Char)0x64,  /* [2807] */
    (xdc_Char)0x65,  /* [2808] */
    (xdc_Char)0x74,  /* [2809] */
    (xdc_Char)0x61,  /* [2810] */
    (xdc_Char)0x69,  /* [2811] */
    (xdc_Char)0x6c,  /* [2812] */
    (xdc_Char)0x73,  /* [2813] */
    (xdc_Char)0x2e,  /* [2814] */
    (xdc_Char)0x0,  /* [2815] */
    (xdc_Char)0x41,  /* [2816] */
    (xdc_Char)0x5f,  /* [2817] */
    (xdc_Char)0x62,  /* [2818] */
    (xdc_Char)0x61,  /* [2819] */
    (xdc_Char)0x64,  /* [2820] */
    (xdc_Char)0x43,  /* [2821] */
    (xdc_Char)0x6f,  /* [2822] */
    (xdc_Char)0x6e,  /* [2823] */
    (xdc_Char)0x74,  /* [2824] */
    (xdc_Char)0x65,  /* [2825] */
    (xdc_Char)0x78,  /* [2826] */
    (xdc_Char)0x74,  /* [2827] */
    (xdc_Char)0x3a,  /* [2828] */
    (xdc_Char)0x20,  /* [2829] */
    (xdc_Char)0x62,  /* [2830] */
    (xdc_Char)0x61,  /* [2831] */
    (xdc_Char)0x64,  /* [2832] */
    (xdc_Char)0x20,  /* [2833] */
    (xdc_Char)0x63,  /* [2834] */
    (xdc_Char)0x61,  /* [2835] */
    (xdc_Char)0x6c,  /* [2836] */
    (xdc_Char)0x6c,  /* [2837] */
    (xdc_Char)0x69,  /* [2838] */
    (xdc_Char)0x6e,  /* [2839] */
    (xdc_Char)0x67,  /* [2840] */
    (xdc_Char)0x20,  /* [2841] */
    (xdc_Char)0x63,  /* [2842] */
    (xdc_Char)0x6f,  /* [2843] */
    (xdc_Char)0x6e,  /* [2844] */
    (xdc_Char)0x74,  /* [2845] */
    (xdc_Char)0x65,  /* [2846] */
    (xdc_Char)0x78,  /* [2847] */
    (xdc_Char)0x74,  /* [2848] */
    (xdc_Char)0x2e,  /* [2849] */
    (xdc_Char)0x20,  /* [2850] */
    (xdc_Char)0x53,  /* [2851] */
    (xdc_Char)0x65,  /* [2852] */
    (xdc_Char)0x65,  /* [2853] */
    (xdc_Char)0x20,  /* [2854] */
    (xdc_Char)0x47,  /* [2855] */
    (xdc_Char)0x61,  /* [2856] */
    (xdc_Char)0x74,  /* [2857] */
    (xdc_Char)0x65,  /* [2858] */
    (xdc_Char)0x53,  /* [2859] */
    (xdc_Char)0x70,  /* [2860] */
    (xdc_Char)0x69,  /* [2861] */
    (xdc_Char)0x6e,  /* [2862] */
    (xdc_Char)0x6c,  /* [2863] */
    (xdc_Char)0x6f,  /* [2864] */
    (xdc_Char)0x63,  /* [2865] */
    (xdc_Char)0x6b,  /* [2866] */
    (xdc_Char)0x20,  /* [2867] */
    (xdc_Char)0x41,  /* [2868] */
    (xdc_Char)0x50,  /* [2869] */
    (xdc_Char)0x49,  /* [2870] */
    (xdc_Char)0x20,  /* [2871] */
    (xdc_Char)0x64,  /* [2872] */
    (xdc_Char)0x6f,  /* [2873] */
    (xdc_Char)0x63,  /* [2874] */
    (xdc_Char)0x20,  /* [2875] */
    (xdc_Char)0x66,  /* [2876] */
    (xdc_Char)0x6f,  /* [2877] */
    (xdc_Char)0x72,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x64,  /* [2880] */
    (xdc_Char)0x65,  /* [2881] */
    (xdc_Char)0x74,  /* [2882] */
    (xdc_Char)0x61,  /* [2883] */
    (xdc_Char)0x69,  /* [2884] */
    (xdc_Char)0x6c,  /* [2885] */
    (xdc_Char)0x73,  /* [2886] */
    (xdc_Char)0x2e,  /* [2887] */
    (xdc_Char)0x0,  /* [2888] */
    (xdc_Char)0x41,  /* [2889] */
    (xdc_Char)0x5f,  /* [2890] */
    (xdc_Char)0x69,  /* [2891] */
    (xdc_Char)0x6e,  /* [2892] */
    (xdc_Char)0x76,  /* [2893] */
    (xdc_Char)0x61,  /* [2894] */
    (xdc_Char)0x6c,  /* [2895] */
    (xdc_Char)0x69,  /* [2896] */
    (xdc_Char)0x64,  /* [2897] */
    (xdc_Char)0x51,  /* [2898] */
    (xdc_Char)0x75,  /* [2899] */
    (xdc_Char)0x61,  /* [2900] */
    (xdc_Char)0x6c,  /* [2901] */
    (xdc_Char)0x69,  /* [2902] */
    (xdc_Char)0x74,  /* [2903] */
    (xdc_Char)0x79,  /* [2904] */
    (xdc_Char)0x3a,  /* [2905] */
    (xdc_Char)0x20,  /* [2906] */
    (xdc_Char)0x53,  /* [2907] */
    (xdc_Char)0x65,  /* [2908] */
    (xdc_Char)0x65,  /* [2909] */
    (xdc_Char)0x20,  /* [2910] */
    (xdc_Char)0x47,  /* [2911] */
    (xdc_Char)0x61,  /* [2912] */
    (xdc_Char)0x74,  /* [2913] */
    (xdc_Char)0x65,  /* [2914] */
    (xdc_Char)0x53,  /* [2915] */
    (xdc_Char)0x70,  /* [2916] */
    (xdc_Char)0x69,  /* [2917] */
    (xdc_Char)0x6e,  /* [2918] */
    (xdc_Char)0x6c,  /* [2919] */
    (xdc_Char)0x6f,  /* [2920] */
    (xdc_Char)0x63,  /* [2921] */
    (xdc_Char)0x6b,  /* [2922] */
    (xdc_Char)0x20,  /* [2923] */
    (xdc_Char)0x41,  /* [2924] */
    (xdc_Char)0x50,  /* [2925] */
    (xdc_Char)0x49,  /* [2926] */
    (xdc_Char)0x20,  /* [2927] */
    (xdc_Char)0x64,  /* [2928] */
    (xdc_Char)0x6f,  /* [2929] */
    (xdc_Char)0x63,  /* [2930] */
    (xdc_Char)0x20,  /* [2931] */
    (xdc_Char)0x66,  /* [2932] */
    (xdc_Char)0x6f,  /* [2933] */
    (xdc_Char)0x72,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x64,  /* [2936] */
    (xdc_Char)0x65,  /* [2937] */
    (xdc_Char)0x74,  /* [2938] */
    (xdc_Char)0x61,  /* [2939] */
    (xdc_Char)0x69,  /* [2940] */
    (xdc_Char)0x6c,  /* [2941] */
    (xdc_Char)0x73,  /* [2942] */
    (xdc_Char)0x2e,  /* [2943] */
    (xdc_Char)0x0,  /* [2944] */
    (xdc_Char)0x62,  /* [2945] */
    (xdc_Char)0x75,  /* [2946] */
    (xdc_Char)0x66,  /* [2947] */
    (xdc_Char)0x20,  /* [2948] */
    (xdc_Char)0x70,  /* [2949] */
    (xdc_Char)0x61,  /* [2950] */
    (xdc_Char)0x72,  /* [2951] */
    (xdc_Char)0x61,  /* [2952] */
    (xdc_Char)0x6d,  /* [2953] */
    (xdc_Char)0x65,  /* [2954] */
    (xdc_Char)0x74,  /* [2955] */
    (xdc_Char)0x65,  /* [2956] */
    (xdc_Char)0x72,  /* [2957] */
    (xdc_Char)0x20,  /* [2958] */
    (xdc_Char)0x63,  /* [2959] */
    (xdc_Char)0x61,  /* [2960] */
    (xdc_Char)0x6e,  /* [2961] */
    (xdc_Char)0x6e,  /* [2962] */
    (xdc_Char)0x6f,  /* [2963] */
    (xdc_Char)0x74,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x62,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x20,  /* [2968] */
    (xdc_Char)0x6e,  /* [2969] */
    (xdc_Char)0x75,  /* [2970] */
    (xdc_Char)0x6c,  /* [2971] */
    (xdc_Char)0x6c,  /* [2972] */
    (xdc_Char)0x0,  /* [2973] */
    (xdc_Char)0x62,  /* [2974] */
    (xdc_Char)0x75,  /* [2975] */
    (xdc_Char)0x66,  /* [2976] */
    (xdc_Char)0x20,  /* [2977] */
    (xdc_Char)0x6e,  /* [2978] */
    (xdc_Char)0x6f,  /* [2979] */
    (xdc_Char)0x74,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x70,  /* [2982] */
    (xdc_Char)0x72,  /* [2983] */
    (xdc_Char)0x6f,  /* [2984] */
    (xdc_Char)0x70,  /* [2985] */
    (xdc_Char)0x65,  /* [2986] */
    (xdc_Char)0x72,  /* [2987] */
    (xdc_Char)0x6c,  /* [2988] */
    (xdc_Char)0x79,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x61,  /* [2991] */
    (xdc_Char)0x6c,  /* [2992] */
    (xdc_Char)0x69,  /* [2993] */
    (xdc_Char)0x67,  /* [2994] */
    (xdc_Char)0x6e,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x64,  /* [2997] */
    (xdc_Char)0x0,  /* [2998] */
    (xdc_Char)0x61,  /* [2999] */
    (xdc_Char)0x6c,  /* [3000] */
    (xdc_Char)0x69,  /* [3001] */
    (xdc_Char)0x67,  /* [3002] */
    (xdc_Char)0x6e,  /* [3003] */
    (xdc_Char)0x20,  /* [3004] */
    (xdc_Char)0x70,  /* [3005] */
    (xdc_Char)0x61,  /* [3006] */
    (xdc_Char)0x72,  /* [3007] */
    (xdc_Char)0x61,  /* [3008] */
    (xdc_Char)0x6d,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x74,  /* [3011] */
    (xdc_Char)0x65,  /* [3012] */
    (xdc_Char)0x72,  /* [3013] */
    (xdc_Char)0x20,  /* [3014] */
    (xdc_Char)0x6d,  /* [3015] */
    (xdc_Char)0x75,  /* [3016] */
    (xdc_Char)0x73,  /* [3017] */
    (xdc_Char)0x74,  /* [3018] */
    (xdc_Char)0x20,  /* [3019] */
    (xdc_Char)0x62,  /* [3020] */
    (xdc_Char)0x65,  /* [3021] */
    (xdc_Char)0x20,  /* [3022] */
    (xdc_Char)0x30,  /* [3023] */
    (xdc_Char)0x20,  /* [3024] */
    (xdc_Char)0x6f,  /* [3025] */
    (xdc_Char)0x72,  /* [3026] */
    (xdc_Char)0x20,  /* [3027] */
    (xdc_Char)0x61,  /* [3028] */
    (xdc_Char)0x20,  /* [3029] */
    (xdc_Char)0x70,  /* [3030] */
    (xdc_Char)0x6f,  /* [3031] */
    (xdc_Char)0x77,  /* [3032] */
    (xdc_Char)0x65,  /* [3033] */
    (xdc_Char)0x72,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x6f,  /* [3036] */
    (xdc_Char)0x66,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x32,  /* [3039] */
    (xdc_Char)0x20,  /* [3040] */
    (xdc_Char)0x3e,  /* [3041] */
    (xdc_Char)0x3d,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x74,  /* [3044] */
    (xdc_Char)0x68,  /* [3045] */
    (xdc_Char)0x65,  /* [3046] */
    (xdc_Char)0x20,  /* [3047] */
    (xdc_Char)0x76,  /* [3048] */
    (xdc_Char)0x61,  /* [3049] */
    (xdc_Char)0x6c,  /* [3050] */
    (xdc_Char)0x75,  /* [3051] */
    (xdc_Char)0x65,  /* [3052] */
    (xdc_Char)0x20,  /* [3053] */
    (xdc_Char)0x6f,  /* [3054] */
    (xdc_Char)0x66,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x4d,  /* [3057] */
    (xdc_Char)0x65,  /* [3058] */
    (xdc_Char)0x6d,  /* [3059] */
    (xdc_Char)0x6f,  /* [3060] */
    (xdc_Char)0x72,  /* [3061] */
    (xdc_Char)0x79,  /* [3062] */
    (xdc_Char)0x5f,  /* [3063] */
    (xdc_Char)0x67,  /* [3064] */
    (xdc_Char)0x65,  /* [3065] */
    (xdc_Char)0x74,  /* [3066] */
    (xdc_Char)0x4d,  /* [3067] */
    (xdc_Char)0x61,  /* [3068] */
    (xdc_Char)0x78,  /* [3069] */
    (xdc_Char)0x44,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x66,  /* [3072] */
    (xdc_Char)0x61,  /* [3073] */
    (xdc_Char)0x75,  /* [3074] */
    (xdc_Char)0x6c,  /* [3075] */
    (xdc_Char)0x74,  /* [3076] */
    (xdc_Char)0x54,  /* [3077] */
    (xdc_Char)0x79,  /* [3078] */
    (xdc_Char)0x70,  /* [3079] */
    (xdc_Char)0x65,  /* [3080] */
    (xdc_Char)0x41,  /* [3081] */
    (xdc_Char)0x6c,  /* [3082] */
    (xdc_Char)0x69,  /* [3083] */
    (xdc_Char)0x67,  /* [3084] */
    (xdc_Char)0x6e,  /* [3085] */
    (xdc_Char)0x28,  /* [3086] */
    (xdc_Char)0x29,  /* [3087] */
    (xdc_Char)0x0,  /* [3088] */
    (xdc_Char)0x61,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x69,  /* [3091] */
    (xdc_Char)0x67,  /* [3092] */
    (xdc_Char)0x6e,  /* [3093] */
    (xdc_Char)0x20,  /* [3094] */
    (xdc_Char)0x70,  /* [3095] */
    (xdc_Char)0x61,  /* [3096] */
    (xdc_Char)0x72,  /* [3097] */
    (xdc_Char)0x61,  /* [3098] */
    (xdc_Char)0x6d,  /* [3099] */
    (xdc_Char)0x65,  /* [3100] */
    (xdc_Char)0x74,  /* [3101] */
    (xdc_Char)0x65,  /* [3102] */
    (xdc_Char)0x72,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x31,  /* [3105] */
    (xdc_Char)0x29,  /* [3106] */
    (xdc_Char)0x20,  /* [3107] */
    (xdc_Char)0x6d,  /* [3108] */
    (xdc_Char)0x75,  /* [3109] */
    (xdc_Char)0x73,  /* [3110] */
    (xdc_Char)0x74,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x62,  /* [3113] */
    (xdc_Char)0x65,  /* [3114] */
    (xdc_Char)0x20,  /* [3115] */
    (xdc_Char)0x30,  /* [3116] */
    (xdc_Char)0x20,  /* [3117] */
    (xdc_Char)0x6f,  /* [3118] */
    (xdc_Char)0x72,  /* [3119] */
    (xdc_Char)0x20,  /* [3120] */
    (xdc_Char)0x61,  /* [3121] */
    (xdc_Char)0x20,  /* [3122] */
    (xdc_Char)0x70,  /* [3123] */
    (xdc_Char)0x6f,  /* [3124] */
    (xdc_Char)0x77,  /* [3125] */
    (xdc_Char)0x65,  /* [3126] */
    (xdc_Char)0x72,  /* [3127] */
    (xdc_Char)0x20,  /* [3128] */
    (xdc_Char)0x6f,  /* [3129] */
    (xdc_Char)0x66,  /* [3130] */
    (xdc_Char)0x20,  /* [3131] */
    (xdc_Char)0x32,  /* [3132] */
    (xdc_Char)0x20,  /* [3133] */
    (xdc_Char)0x61,  /* [3134] */
    (xdc_Char)0x6e,  /* [3135] */
    (xdc_Char)0x64,  /* [3136] */
    (xdc_Char)0x20,  /* [3137] */
    (xdc_Char)0x32,  /* [3138] */
    (xdc_Char)0x29,  /* [3139] */
    (xdc_Char)0x20,  /* [3140] */
    (xdc_Char)0x6e,  /* [3141] */
    (xdc_Char)0x6f,  /* [3142] */
    (xdc_Char)0x74,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x67,  /* [3145] */
    (xdc_Char)0x72,  /* [3146] */
    (xdc_Char)0x65,  /* [3147] */
    (xdc_Char)0x61,  /* [3148] */
    (xdc_Char)0x74,  /* [3149] */
    (xdc_Char)0x65,  /* [3150] */
    (xdc_Char)0x72,  /* [3151] */
    (xdc_Char)0x20,  /* [3152] */
    (xdc_Char)0x74,  /* [3153] */
    (xdc_Char)0x68,  /* [3154] */
    (xdc_Char)0x61,  /* [3155] */
    (xdc_Char)0x6e,  /* [3156] */
    (xdc_Char)0x20,  /* [3157] */
    (xdc_Char)0x74,  /* [3158] */
    (xdc_Char)0x68,  /* [3159] */
    (xdc_Char)0x65,  /* [3160] */
    (xdc_Char)0x20,  /* [3161] */
    (xdc_Char)0x68,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x61,  /* [3164] */
    (xdc_Char)0x70,  /* [3165] */
    (xdc_Char)0x73,  /* [3166] */
    (xdc_Char)0x20,  /* [3167] */
    (xdc_Char)0x61,  /* [3168] */
    (xdc_Char)0x6c,  /* [3169] */
    (xdc_Char)0x69,  /* [3170] */
    (xdc_Char)0x67,  /* [3171] */
    (xdc_Char)0x6e,  /* [3172] */
    (xdc_Char)0x6d,  /* [3173] */
    (xdc_Char)0x65,  /* [3174] */
    (xdc_Char)0x6e,  /* [3175] */
    (xdc_Char)0x74,  /* [3176] */
    (xdc_Char)0x0,  /* [3177] */
    (xdc_Char)0x62,  /* [3178] */
    (xdc_Char)0x6c,  /* [3179] */
    (xdc_Char)0x6f,  /* [3180] */
    (xdc_Char)0x63,  /* [3181] */
    (xdc_Char)0x6b,  /* [3182] */
    (xdc_Char)0x53,  /* [3183] */
    (xdc_Char)0x69,  /* [3184] */
    (xdc_Char)0x7a,  /* [3185] */
    (xdc_Char)0x65,  /* [3186] */
    (xdc_Char)0x20,  /* [3187] */
    (xdc_Char)0x6d,  /* [3188] */
    (xdc_Char)0x75,  /* [3189] */
    (xdc_Char)0x73,  /* [3190] */
    (xdc_Char)0x74,  /* [3191] */
    (xdc_Char)0x20,  /* [3192] */
    (xdc_Char)0x62,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x20,  /* [3195] */
    (xdc_Char)0x6c,  /* [3196] */
    (xdc_Char)0x61,  /* [3197] */
    (xdc_Char)0x72,  /* [3198] */
    (xdc_Char)0x67,  /* [3199] */
    (xdc_Char)0x65,  /* [3200] */
    (xdc_Char)0x20,  /* [3201] */
    (xdc_Char)0x65,  /* [3202] */
    (xdc_Char)0x6e,  /* [3203] */
    (xdc_Char)0x6f,  /* [3204] */
    (xdc_Char)0x75,  /* [3205] */
    (xdc_Char)0x67,  /* [3206] */
    (xdc_Char)0x68,  /* [3207] */
    (xdc_Char)0x20,  /* [3208] */
    (xdc_Char)0x74,  /* [3209] */
    (xdc_Char)0x6f,  /* [3210] */
    (xdc_Char)0x20,  /* [3211] */
    (xdc_Char)0x68,  /* [3212] */
    (xdc_Char)0x6f,  /* [3213] */
    (xdc_Char)0x6c,  /* [3214] */
    (xdc_Char)0x64,  /* [3215] */
    (xdc_Char)0x20,  /* [3216] */
    (xdc_Char)0x61,  /* [3217] */
    (xdc_Char)0x74,  /* [3218] */
    (xdc_Char)0x6c,  /* [3219] */
    (xdc_Char)0x65,  /* [3220] */
    (xdc_Char)0x61,  /* [3221] */
    (xdc_Char)0x73,  /* [3222] */
    (xdc_Char)0x74,  /* [3223] */
    (xdc_Char)0x20,  /* [3224] */
    (xdc_Char)0x74,  /* [3225] */
    (xdc_Char)0x77,  /* [3226] */
    (xdc_Char)0x6f,  /* [3227] */
    (xdc_Char)0x20,  /* [3228] */
    (xdc_Char)0x70,  /* [3229] */
    (xdc_Char)0x6f,  /* [3230] */
    (xdc_Char)0x69,  /* [3231] */
    (xdc_Char)0x6e,  /* [3232] */
    (xdc_Char)0x74,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x72,  /* [3235] */
    (xdc_Char)0x73,  /* [3236] */
    (xdc_Char)0x0,  /* [3237] */
    (xdc_Char)0x6e,  /* [3238] */
    (xdc_Char)0x75,  /* [3239] */
    (xdc_Char)0x6d,  /* [3240] */
    (xdc_Char)0x42,  /* [3241] */
    (xdc_Char)0x6c,  /* [3242] */
    (xdc_Char)0x6f,  /* [3243] */
    (xdc_Char)0x63,  /* [3244] */
    (xdc_Char)0x6b,  /* [3245] */
    (xdc_Char)0x73,  /* [3246] */
    (xdc_Char)0x20,  /* [3247] */
    (xdc_Char)0x63,  /* [3248] */
    (xdc_Char)0x61,  /* [3249] */
    (xdc_Char)0x6e,  /* [3250] */
    (xdc_Char)0x6e,  /* [3251] */
    (xdc_Char)0x6f,  /* [3252] */
    (xdc_Char)0x74,  /* [3253] */
    (xdc_Char)0x20,  /* [3254] */
    (xdc_Char)0x62,  /* [3255] */
    (xdc_Char)0x65,  /* [3256] */
    (xdc_Char)0x20,  /* [3257] */
    (xdc_Char)0x7a,  /* [3258] */
    (xdc_Char)0x65,  /* [3259] */
    (xdc_Char)0x72,  /* [3260] */
    (xdc_Char)0x6f,  /* [3261] */
    (xdc_Char)0x0,  /* [3262] */
    (xdc_Char)0x62,  /* [3263] */
    (xdc_Char)0x75,  /* [3264] */
    (xdc_Char)0x66,  /* [3265] */
    (xdc_Char)0x53,  /* [3266] */
    (xdc_Char)0x69,  /* [3267] */
    (xdc_Char)0x7a,  /* [3268] */
    (xdc_Char)0x65,  /* [3269] */
    (xdc_Char)0x20,  /* [3270] */
    (xdc_Char)0x63,  /* [3271] */
    (xdc_Char)0x61,  /* [3272] */
    (xdc_Char)0x6e,  /* [3273] */
    (xdc_Char)0x6e,  /* [3274] */
    (xdc_Char)0x6f,  /* [3275] */
    (xdc_Char)0x74,  /* [3276] */
    (xdc_Char)0x20,  /* [3277] */
    (xdc_Char)0x62,  /* [3278] */
    (xdc_Char)0x65,  /* [3279] */
    (xdc_Char)0x20,  /* [3280] */
    (xdc_Char)0x7a,  /* [3281] */
    (xdc_Char)0x65,  /* [3282] */
    (xdc_Char)0x72,  /* [3283] */
    (xdc_Char)0x6f,  /* [3284] */
    (xdc_Char)0x0,  /* [3285] */
    (xdc_Char)0x48,  /* [3286] */
    (xdc_Char)0x65,  /* [3287] */
    (xdc_Char)0x61,  /* [3288] */
    (xdc_Char)0x70,  /* [3289] */
    (xdc_Char)0x42,  /* [3290] */
    (xdc_Char)0x75,  /* [3291] */
    (xdc_Char)0x66,  /* [3292] */
    (xdc_Char)0x5f,  /* [3293] */
    (xdc_Char)0x63,  /* [3294] */
    (xdc_Char)0x72,  /* [3295] */
    (xdc_Char)0x65,  /* [3296] */
    (xdc_Char)0x61,  /* [3297] */
    (xdc_Char)0x74,  /* [3298] */
    (xdc_Char)0x65,  /* [3299] */
    (xdc_Char)0x27,  /* [3300] */
    (xdc_Char)0x73,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x62,  /* [3303] */
    (xdc_Char)0x75,  /* [3304] */
    (xdc_Char)0x66,  /* [3305] */
    (xdc_Char)0x53,  /* [3306] */
    (xdc_Char)0x69,  /* [3307] */
    (xdc_Char)0x7a,  /* [3308] */
    (xdc_Char)0x65,  /* [3309] */
    (xdc_Char)0x20,  /* [3310] */
    (xdc_Char)0x70,  /* [3311] */
    (xdc_Char)0x61,  /* [3312] */
    (xdc_Char)0x72,  /* [3313] */
    (xdc_Char)0x61,  /* [3314] */
    (xdc_Char)0x6d,  /* [3315] */
    (xdc_Char)0x65,  /* [3316] */
    (xdc_Char)0x74,  /* [3317] */
    (xdc_Char)0x65,  /* [3318] */
    (xdc_Char)0x72,  /* [3319] */
    (xdc_Char)0x20,  /* [3320] */
    (xdc_Char)0x69,  /* [3321] */
    (xdc_Char)0x73,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x69,  /* [3324] */
    (xdc_Char)0x6e,  /* [3325] */
    (xdc_Char)0x76,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x6c,  /* [3328] */
    (xdc_Char)0x69,  /* [3329] */
    (xdc_Char)0x64,  /* [3330] */
    (xdc_Char)0x20,  /* [3331] */
    (xdc_Char)0x28,  /* [3332] */
    (xdc_Char)0x74,  /* [3333] */
    (xdc_Char)0x6f,  /* [3334] */
    (xdc_Char)0x6f,  /* [3335] */
    (xdc_Char)0x20,  /* [3336] */
    (xdc_Char)0x73,  /* [3337] */
    (xdc_Char)0x6d,  /* [3338] */
    (xdc_Char)0x61,  /* [3339] */
    (xdc_Char)0x6c,  /* [3340] */
    (xdc_Char)0x6c,  /* [3341] */
    (xdc_Char)0x29,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x43,  /* [3344] */
    (xdc_Char)0x61,  /* [3345] */
    (xdc_Char)0x6e,  /* [3346] */
    (xdc_Char)0x6e,  /* [3347] */
    (xdc_Char)0x6f,  /* [3348] */
    (xdc_Char)0x74,  /* [3349] */
    (xdc_Char)0x20,  /* [3350] */
    (xdc_Char)0x63,  /* [3351] */
    (xdc_Char)0x61,  /* [3352] */
    (xdc_Char)0x6c,  /* [3353] */
    (xdc_Char)0x6c,  /* [3354] */
    (xdc_Char)0x20,  /* [3355] */
    (xdc_Char)0x48,  /* [3356] */
    (xdc_Char)0x65,  /* [3357] */
    (xdc_Char)0x61,  /* [3358] */
    (xdc_Char)0x70,  /* [3359] */
    (xdc_Char)0x42,  /* [3360] */
    (xdc_Char)0x75,  /* [3361] */
    (xdc_Char)0x66,  /* [3362] */
    (xdc_Char)0x5f,  /* [3363] */
    (xdc_Char)0x66,  /* [3364] */
    (xdc_Char)0x72,  /* [3365] */
    (xdc_Char)0x65,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x20,  /* [3368] */
    (xdc_Char)0x77,  /* [3369] */
    (xdc_Char)0x68,  /* [3370] */
    (xdc_Char)0x65,  /* [3371] */
    (xdc_Char)0x6e,  /* [3372] */
    (xdc_Char)0x20,  /* [3373] */
    (xdc_Char)0x6e,  /* [3374] */
    (xdc_Char)0x6f,  /* [3375] */
    (xdc_Char)0x20,  /* [3376] */
    (xdc_Char)0x62,  /* [3377] */
    (xdc_Char)0x6c,  /* [3378] */
    (xdc_Char)0x6f,  /* [3379] */
    (xdc_Char)0x63,  /* [3380] */
    (xdc_Char)0x6b,  /* [3381] */
    (xdc_Char)0x73,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x68,  /* [3384] */
    (xdc_Char)0x61,  /* [3385] */
    (xdc_Char)0x76,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x20,  /* [3388] */
    (xdc_Char)0x62,  /* [3389] */
    (xdc_Char)0x65,  /* [3390] */
    (xdc_Char)0x65,  /* [3391] */
    (xdc_Char)0x6e,  /* [3392] */
    (xdc_Char)0x20,  /* [3393] */
    (xdc_Char)0x61,  /* [3394] */
    (xdc_Char)0x6c,  /* [3395] */
    (xdc_Char)0x6c,  /* [3396] */
    (xdc_Char)0x6f,  /* [3397] */
    (xdc_Char)0x63,  /* [3398] */
    (xdc_Char)0x61,  /* [3399] */
    (xdc_Char)0x74,  /* [3400] */
    (xdc_Char)0x65,  /* [3401] */
    (xdc_Char)0x64,  /* [3402] */
    (xdc_Char)0x0,  /* [3403] */
    (xdc_Char)0x41,  /* [3404] */
    (xdc_Char)0x5f,  /* [3405] */
    (xdc_Char)0x69,  /* [3406] */
    (xdc_Char)0x6e,  /* [3407] */
    (xdc_Char)0x76,  /* [3408] */
    (xdc_Char)0x61,  /* [3409] */
    (xdc_Char)0x6c,  /* [3410] */
    (xdc_Char)0x69,  /* [3411] */
    (xdc_Char)0x64,  /* [3412] */
    (xdc_Char)0x46,  /* [3413] */
    (xdc_Char)0x72,  /* [3414] */
    (xdc_Char)0x65,  /* [3415] */
    (xdc_Char)0x65,  /* [3416] */
    (xdc_Char)0x3a,  /* [3417] */
    (xdc_Char)0x20,  /* [3418] */
    (xdc_Char)0x49,  /* [3419] */
    (xdc_Char)0x6e,  /* [3420] */
    (xdc_Char)0x76,  /* [3421] */
    (xdc_Char)0x61,  /* [3422] */
    (xdc_Char)0x6c,  /* [3423] */
    (xdc_Char)0x69,  /* [3424] */
    (xdc_Char)0x64,  /* [3425] */
    (xdc_Char)0x20,  /* [3426] */
    (xdc_Char)0x66,  /* [3427] */
    (xdc_Char)0x72,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x65,  /* [3430] */
    (xdc_Char)0x0,  /* [3431] */
    (xdc_Char)0x41,  /* [3432] */
    (xdc_Char)0x5f,  /* [3433] */
    (xdc_Char)0x7a,  /* [3434] */
    (xdc_Char)0x65,  /* [3435] */
    (xdc_Char)0x72,  /* [3436] */
    (xdc_Char)0x6f,  /* [3437] */
    (xdc_Char)0x42,  /* [3438] */
    (xdc_Char)0x6c,  /* [3439] */
    (xdc_Char)0x6f,  /* [3440] */
    (xdc_Char)0x63,  /* [3441] */
    (xdc_Char)0x6b,  /* [3442] */
    (xdc_Char)0x3a,  /* [3443] */
    (xdc_Char)0x20,  /* [3444] */
    (xdc_Char)0x43,  /* [3445] */
    (xdc_Char)0x61,  /* [3446] */
    (xdc_Char)0x6e,  /* [3447] */
    (xdc_Char)0x6e,  /* [3448] */
    (xdc_Char)0x6f,  /* [3449] */
    (xdc_Char)0x74,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x61,  /* [3452] */
    (xdc_Char)0x6c,  /* [3453] */
    (xdc_Char)0x6c,  /* [3454] */
    (xdc_Char)0x6f,  /* [3455] */
    (xdc_Char)0x63,  /* [3456] */
    (xdc_Char)0x61,  /* [3457] */
    (xdc_Char)0x74,  /* [3458] */
    (xdc_Char)0x65,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x73,  /* [3461] */
    (xdc_Char)0x69,  /* [3462] */
    (xdc_Char)0x7a,  /* [3463] */
    (xdc_Char)0x65,  /* [3464] */
    (xdc_Char)0x20,  /* [3465] */
    (xdc_Char)0x30,  /* [3466] */
    (xdc_Char)0x0,  /* [3467] */
    (xdc_Char)0x41,  /* [3468] */
    (xdc_Char)0x5f,  /* [3469] */
    (xdc_Char)0x68,  /* [3470] */
    (xdc_Char)0x65,  /* [3471] */
    (xdc_Char)0x61,  /* [3472] */
    (xdc_Char)0x70,  /* [3473] */
    (xdc_Char)0x53,  /* [3474] */
    (xdc_Char)0x69,  /* [3475] */
    (xdc_Char)0x7a,  /* [3476] */
    (xdc_Char)0x65,  /* [3477] */
    (xdc_Char)0x3a,  /* [3478] */
    (xdc_Char)0x20,  /* [3479] */
    (xdc_Char)0x52,  /* [3480] */
    (xdc_Char)0x65,  /* [3481] */
    (xdc_Char)0x71,  /* [3482] */
    (xdc_Char)0x75,  /* [3483] */
    (xdc_Char)0x65,  /* [3484] */
    (xdc_Char)0x73,  /* [3485] */
    (xdc_Char)0x74,  /* [3486] */
    (xdc_Char)0x65,  /* [3487] */
    (xdc_Char)0x64,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x68,  /* [3490] */
    (xdc_Char)0x65,  /* [3491] */
    (xdc_Char)0x61,  /* [3492] */
    (xdc_Char)0x70,  /* [3493] */
    (xdc_Char)0x20,  /* [3494] */
    (xdc_Char)0x73,  /* [3495] */
    (xdc_Char)0x69,  /* [3496] */
    (xdc_Char)0x7a,  /* [3497] */
    (xdc_Char)0x65,  /* [3498] */
    (xdc_Char)0x20,  /* [3499] */
    (xdc_Char)0x69,  /* [3500] */
    (xdc_Char)0x73,  /* [3501] */
    (xdc_Char)0x20,  /* [3502] */
    (xdc_Char)0x74,  /* [3503] */
    (xdc_Char)0x6f,  /* [3504] */
    (xdc_Char)0x6f,  /* [3505] */
    (xdc_Char)0x20,  /* [3506] */
    (xdc_Char)0x73,  /* [3507] */
    (xdc_Char)0x6d,  /* [3508] */
    (xdc_Char)0x61,  /* [3509] */
    (xdc_Char)0x6c,  /* [3510] */
    (xdc_Char)0x6c,  /* [3511] */
    (xdc_Char)0x0,  /* [3512] */
    (xdc_Char)0x41,  /* [3513] */
    (xdc_Char)0x5f,  /* [3514] */
    (xdc_Char)0x61,  /* [3515] */
    (xdc_Char)0x6c,  /* [3516] */
    (xdc_Char)0x69,  /* [3517] */
    (xdc_Char)0x67,  /* [3518] */
    (xdc_Char)0x6e,  /* [3519] */
    (xdc_Char)0x3a,  /* [3520] */
    (xdc_Char)0x20,  /* [3521] */
    (xdc_Char)0x52,  /* [3522] */
    (xdc_Char)0x65,  /* [3523] */
    (xdc_Char)0x71,  /* [3524] */
    (xdc_Char)0x75,  /* [3525] */
    (xdc_Char)0x65,  /* [3526] */
    (xdc_Char)0x73,  /* [3527] */
    (xdc_Char)0x74,  /* [3528] */
    (xdc_Char)0x65,  /* [3529] */
    (xdc_Char)0x64,  /* [3530] */
    (xdc_Char)0x20,  /* [3531] */
    (xdc_Char)0x61,  /* [3532] */
    (xdc_Char)0x6c,  /* [3533] */
    (xdc_Char)0x69,  /* [3534] */
    (xdc_Char)0x67,  /* [3535] */
    (xdc_Char)0x6e,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x69,  /* [3538] */
    (xdc_Char)0x73,  /* [3539] */
    (xdc_Char)0x20,  /* [3540] */
    (xdc_Char)0x6e,  /* [3541] */
    (xdc_Char)0x6f,  /* [3542] */
    (xdc_Char)0x74,  /* [3543] */
    (xdc_Char)0x20,  /* [3544] */
    (xdc_Char)0x61,  /* [3545] */
    (xdc_Char)0x20,  /* [3546] */
    (xdc_Char)0x70,  /* [3547] */
    (xdc_Char)0x6f,  /* [3548] */
    (xdc_Char)0x77,  /* [3549] */
    (xdc_Char)0x65,  /* [3550] */
    (xdc_Char)0x72,  /* [3551] */
    (xdc_Char)0x20,  /* [3552] */
    (xdc_Char)0x6f,  /* [3553] */
    (xdc_Char)0x66,  /* [3554] */
    (xdc_Char)0x20,  /* [3555] */
    (xdc_Char)0x32,  /* [3556] */
    (xdc_Char)0x0,  /* [3557] */
    (xdc_Char)0x49,  /* [3558] */
    (xdc_Char)0x6e,  /* [3559] */
    (xdc_Char)0x76,  /* [3560] */
    (xdc_Char)0x61,  /* [3561] */
    (xdc_Char)0x6c,  /* [3562] */
    (xdc_Char)0x69,  /* [3563] */
    (xdc_Char)0x64,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x62,  /* [3566] */
    (xdc_Char)0x6c,  /* [3567] */
    (xdc_Char)0x6f,  /* [3568] */
    (xdc_Char)0x63,  /* [3569] */
    (xdc_Char)0x6b,  /* [3570] */
    (xdc_Char)0x20,  /* [3571] */
    (xdc_Char)0x61,  /* [3572] */
    (xdc_Char)0x64,  /* [3573] */
    (xdc_Char)0x64,  /* [3574] */
    (xdc_Char)0x72,  /* [3575] */
    (xdc_Char)0x65,  /* [3576] */
    (xdc_Char)0x73,  /* [3577] */
    (xdc_Char)0x73,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x6f,  /* [3580] */
    (xdc_Char)0x6e,  /* [3581] */
    (xdc_Char)0x20,  /* [3582] */
    (xdc_Char)0x74,  /* [3583] */
    (xdc_Char)0x68,  /* [3584] */
    (xdc_Char)0x65,  /* [3585] */
    (xdc_Char)0x20,  /* [3586] */
    (xdc_Char)0x66,  /* [3587] */
    (xdc_Char)0x72,  /* [3588] */
    (xdc_Char)0x65,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x2e,  /* [3591] */
    (xdc_Char)0x20,  /* [3592] */
    (xdc_Char)0x46,  /* [3593] */
    (xdc_Char)0x61,  /* [3594] */
    (xdc_Char)0x69,  /* [3595] */
    (xdc_Char)0x6c,  /* [3596] */
    (xdc_Char)0x65,  /* [3597] */
    (xdc_Char)0x64,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x74,  /* [3600] */
    (xdc_Char)0x6f,  /* [3601] */
    (xdc_Char)0x20,  /* [3602] */
    (xdc_Char)0x66,  /* [3603] */
    (xdc_Char)0x72,  /* [3604] */
    (xdc_Char)0x65,  /* [3605] */
    (xdc_Char)0x65,  /* [3606] */
    (xdc_Char)0x20,  /* [3607] */
    (xdc_Char)0x62,  /* [3608] */
    (xdc_Char)0x6c,  /* [3609] */
    (xdc_Char)0x6f,  /* [3610] */
    (xdc_Char)0x63,  /* [3611] */
    (xdc_Char)0x6b,  /* [3612] */
    (xdc_Char)0x20,  /* [3613] */
    (xdc_Char)0x62,  /* [3614] */
    (xdc_Char)0x61,  /* [3615] */
    (xdc_Char)0x63,  /* [3616] */
    (xdc_Char)0x6b,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x74,  /* [3619] */
    (xdc_Char)0x6f,  /* [3620] */
    (xdc_Char)0x20,  /* [3621] */
    (xdc_Char)0x68,  /* [3622] */
    (xdc_Char)0x65,  /* [3623] */
    (xdc_Char)0x61,  /* [3624] */
    (xdc_Char)0x70,  /* [3625] */
    (xdc_Char)0x2e,  /* [3626] */
    (xdc_Char)0x0,  /* [3627] */
    (xdc_Char)0x41,  /* [3628] */
    (xdc_Char)0x5f,  /* [3629] */
    (xdc_Char)0x64,  /* [3630] */
    (xdc_Char)0x6f,  /* [3631] */
    (xdc_Char)0x75,  /* [3632] */
    (xdc_Char)0x62,  /* [3633] */
    (xdc_Char)0x6c,  /* [3634] */
    (xdc_Char)0x65,  /* [3635] */
    (xdc_Char)0x46,  /* [3636] */
    (xdc_Char)0x72,  /* [3637] */
    (xdc_Char)0x65,  /* [3638] */
    (xdc_Char)0x65,  /* [3639] */
    (xdc_Char)0x3a,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x42,  /* [3642] */
    (xdc_Char)0x75,  /* [3643] */
    (xdc_Char)0x66,  /* [3644] */
    (xdc_Char)0x66,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x72,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x61,  /* [3649] */
    (xdc_Char)0x6c,  /* [3650] */
    (xdc_Char)0x72,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x61,  /* [3653] */
    (xdc_Char)0x64,  /* [3654] */
    (xdc_Char)0x79,  /* [3655] */
    (xdc_Char)0x20,  /* [3656] */
    (xdc_Char)0x66,  /* [3657] */
    (xdc_Char)0x72,  /* [3658] */
    (xdc_Char)0x65,  /* [3659] */
    (xdc_Char)0x65,  /* [3660] */
    (xdc_Char)0x0,  /* [3661] */
    (xdc_Char)0x41,  /* [3662] */
    (xdc_Char)0x5f,  /* [3663] */
    (xdc_Char)0x62,  /* [3664] */
    (xdc_Char)0x75,  /* [3665] */
    (xdc_Char)0x66,  /* [3666] */
    (xdc_Char)0x4f,  /* [3667] */
    (xdc_Char)0x76,  /* [3668] */
    (xdc_Char)0x65,  /* [3669] */
    (xdc_Char)0x72,  /* [3670] */
    (xdc_Char)0x66,  /* [3671] */
    (xdc_Char)0x6c,  /* [3672] */
    (xdc_Char)0x6f,  /* [3673] */
    (xdc_Char)0x77,  /* [3674] */
    (xdc_Char)0x3a,  /* [3675] */
    (xdc_Char)0x20,  /* [3676] */
    (xdc_Char)0x42,  /* [3677] */
    (xdc_Char)0x75,  /* [3678] */
    (xdc_Char)0x66,  /* [3679] */
    (xdc_Char)0x66,  /* [3680] */
    (xdc_Char)0x65,  /* [3681] */
    (xdc_Char)0x72,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x6f,  /* [3684] */
    (xdc_Char)0x76,  /* [3685] */
    (xdc_Char)0x65,  /* [3686] */
    (xdc_Char)0x72,  /* [3687] */
    (xdc_Char)0x66,  /* [3688] */
    (xdc_Char)0x6c,  /* [3689] */
    (xdc_Char)0x6f,  /* [3690] */
    (xdc_Char)0x77,  /* [3691] */
    (xdc_Char)0x0,  /* [3692] */
    (xdc_Char)0x41,  /* [3693] */
    (xdc_Char)0x5f,  /* [3694] */
    (xdc_Char)0x6e,  /* [3695] */
    (xdc_Char)0x6f,  /* [3696] */
    (xdc_Char)0x74,  /* [3697] */
    (xdc_Char)0x45,  /* [3698] */
    (xdc_Char)0x6d,  /* [3699] */
    (xdc_Char)0x70,  /* [3700] */
    (xdc_Char)0x74,  /* [3701] */
    (xdc_Char)0x79,  /* [3702] */
    (xdc_Char)0x3a,  /* [3703] */
    (xdc_Char)0x20,  /* [3704] */
    (xdc_Char)0x48,  /* [3705] */
    (xdc_Char)0x65,  /* [3706] */
    (xdc_Char)0x61,  /* [3707] */
    (xdc_Char)0x70,  /* [3708] */
    (xdc_Char)0x20,  /* [3709] */
    (xdc_Char)0x6e,  /* [3710] */
    (xdc_Char)0x6f,  /* [3711] */
    (xdc_Char)0x74,  /* [3712] */
    (xdc_Char)0x20,  /* [3713] */
    (xdc_Char)0x65,  /* [3714] */
    (xdc_Char)0x6d,  /* [3715] */
    (xdc_Char)0x70,  /* [3716] */
    (xdc_Char)0x74,  /* [3717] */
    (xdc_Char)0x79,  /* [3718] */
    (xdc_Char)0x0,  /* [3719] */
    (xdc_Char)0x41,  /* [3720] */
    (xdc_Char)0x5f,  /* [3721] */
    (xdc_Char)0x6e,  /* [3722] */
    (xdc_Char)0x75,  /* [3723] */
    (xdc_Char)0x6c,  /* [3724] */
    (xdc_Char)0x6c,  /* [3725] */
    (xdc_Char)0x4f,  /* [3726] */
    (xdc_Char)0x62,  /* [3727] */
    (xdc_Char)0x6a,  /* [3728] */
    (xdc_Char)0x65,  /* [3729] */
    (xdc_Char)0x63,  /* [3730] */
    (xdc_Char)0x74,  /* [3731] */
    (xdc_Char)0x3a,  /* [3732] */
    (xdc_Char)0x20,  /* [3733] */
    (xdc_Char)0x48,  /* [3734] */
    (xdc_Char)0x65,  /* [3735] */
    (xdc_Char)0x61,  /* [3736] */
    (xdc_Char)0x70,  /* [3737] */
    (xdc_Char)0x54,  /* [3738] */
    (xdc_Char)0x72,  /* [3739] */
    (xdc_Char)0x61,  /* [3740] */
    (xdc_Char)0x63,  /* [3741] */
    (xdc_Char)0x6b,  /* [3742] */
    (xdc_Char)0x5f,  /* [3743] */
    (xdc_Char)0x70,  /* [3744] */
    (xdc_Char)0x72,  /* [3745] */
    (xdc_Char)0x69,  /* [3746] */
    (xdc_Char)0x6e,  /* [3747] */
    (xdc_Char)0x74,  /* [3748] */
    (xdc_Char)0x48,  /* [3749] */
    (xdc_Char)0x65,  /* [3750] */
    (xdc_Char)0x61,  /* [3751] */
    (xdc_Char)0x70,  /* [3752] */
    (xdc_Char)0x20,  /* [3753] */
    (xdc_Char)0x63,  /* [3754] */
    (xdc_Char)0x61,  /* [3755] */
    (xdc_Char)0x6c,  /* [3756] */
    (xdc_Char)0x6c,  /* [3757] */
    (xdc_Char)0x65,  /* [3758] */
    (xdc_Char)0x64,  /* [3759] */
    (xdc_Char)0x20,  /* [3760] */
    (xdc_Char)0x77,  /* [3761] */
    (xdc_Char)0x69,  /* [3762] */
    (xdc_Char)0x74,  /* [3763] */
    (xdc_Char)0x68,  /* [3764] */
    (xdc_Char)0x20,  /* [3765] */
    (xdc_Char)0x6e,  /* [3766] */
    (xdc_Char)0x75,  /* [3767] */
    (xdc_Char)0x6c,  /* [3768] */
    (xdc_Char)0x6c,  /* [3769] */
    (xdc_Char)0x20,  /* [3770] */
    (xdc_Char)0x6f,  /* [3771] */
    (xdc_Char)0x62,  /* [3772] */
    (xdc_Char)0x6a,  /* [3773] */
    (xdc_Char)0x0,  /* [3774] */
    (xdc_Char)0x61,  /* [3775] */
    (xdc_Char)0x73,  /* [3776] */
    (xdc_Char)0x73,  /* [3777] */
    (xdc_Char)0x65,  /* [3778] */
    (xdc_Char)0x72,  /* [3779] */
    (xdc_Char)0x74,  /* [3780] */
    (xdc_Char)0x69,  /* [3781] */
    (xdc_Char)0x6f,  /* [3782] */
    (xdc_Char)0x6e,  /* [3783] */
    (xdc_Char)0x20,  /* [3784] */
    (xdc_Char)0x66,  /* [3785] */
    (xdc_Char)0x61,  /* [3786] */
    (xdc_Char)0x69,  /* [3787] */
    (xdc_Char)0x6c,  /* [3788] */
    (xdc_Char)0x75,  /* [3789] */
    (xdc_Char)0x72,  /* [3790] */
    (xdc_Char)0x65,  /* [3791] */
    (xdc_Char)0x25,  /* [3792] */
    (xdc_Char)0x73,  /* [3793] */
    (xdc_Char)0x25,  /* [3794] */
    (xdc_Char)0x73,  /* [3795] */
    (xdc_Char)0x0,  /* [3796] */
    (xdc_Char)0x25,  /* [3797] */
    (xdc_Char)0x24,  /* [3798] */
    (xdc_Char)0x53,  /* [3799] */
    (xdc_Char)0x0,  /* [3800] */
    (xdc_Char)0x6f,  /* [3801] */
    (xdc_Char)0x75,  /* [3802] */
    (xdc_Char)0x74,  /* [3803] */
    (xdc_Char)0x20,  /* [3804] */
    (xdc_Char)0x6f,  /* [3805] */
    (xdc_Char)0x66,  /* [3806] */
    (xdc_Char)0x20,  /* [3807] */
    (xdc_Char)0x6d,  /* [3808] */
    (xdc_Char)0x65,  /* [3809] */
    (xdc_Char)0x6d,  /* [3810] */
    (xdc_Char)0x6f,  /* [3811] */
    (xdc_Char)0x72,  /* [3812] */
    (xdc_Char)0x79,  /* [3813] */
    (xdc_Char)0x3a,  /* [3814] */
    (xdc_Char)0x20,  /* [3815] */
    (xdc_Char)0x68,  /* [3816] */
    (xdc_Char)0x65,  /* [3817] */
    (xdc_Char)0x61,  /* [3818] */
    (xdc_Char)0x70,  /* [3819] */
    (xdc_Char)0x3d,  /* [3820] */
    (xdc_Char)0x30,  /* [3821] */
    (xdc_Char)0x78,  /* [3822] */
    (xdc_Char)0x25,  /* [3823] */
    (xdc_Char)0x78,  /* [3824] */
    (xdc_Char)0x2c,  /* [3825] */
    (xdc_Char)0x20,  /* [3826] */
    (xdc_Char)0x73,  /* [3827] */
    (xdc_Char)0x69,  /* [3828] */
    (xdc_Char)0x7a,  /* [3829] */
    (xdc_Char)0x65,  /* [3830] */
    (xdc_Char)0x3d,  /* [3831] */
    (xdc_Char)0x25,  /* [3832] */
    (xdc_Char)0x75,  /* [3833] */
    (xdc_Char)0x0,  /* [3834] */
    (xdc_Char)0x25,  /* [3835] */
    (xdc_Char)0x73,  /* [3836] */
    (xdc_Char)0x20,  /* [3837] */
    (xdc_Char)0x30,  /* [3838] */
    (xdc_Char)0x78,  /* [3839] */
    (xdc_Char)0x25,  /* [3840] */
    (xdc_Char)0x78,  /* [3841] */
    (xdc_Char)0x0,  /* [3842] */
    (xdc_Char)0x45,  /* [3843] */
    (xdc_Char)0x5f,  /* [3844] */
    (xdc_Char)0x62,  /* [3845] */
    (xdc_Char)0x61,  /* [3846] */
    (xdc_Char)0x64,  /* [3847] */
    (xdc_Char)0x4c,  /* [3848] */
    (xdc_Char)0x65,  /* [3849] */
    (xdc_Char)0x76,  /* [3850] */
    (xdc_Char)0x65,  /* [3851] */
    (xdc_Char)0x6c,  /* [3852] */
    (xdc_Char)0x3a,  /* [3853] */
    (xdc_Char)0x20,  /* [3854] */
    (xdc_Char)0x42,  /* [3855] */
    (xdc_Char)0x61,  /* [3856] */
    (xdc_Char)0x64,  /* [3857] */
    (xdc_Char)0x20,  /* [3858] */
    (xdc_Char)0x66,  /* [3859] */
    (xdc_Char)0x69,  /* [3860] */
    (xdc_Char)0x6c,  /* [3861] */
    (xdc_Char)0x74,  /* [3862] */
    (xdc_Char)0x65,  /* [3863] */
    (xdc_Char)0x72,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x6c,  /* [3866] */
    (xdc_Char)0x65,  /* [3867] */
    (xdc_Char)0x76,  /* [3868] */
    (xdc_Char)0x65,  /* [3869] */
    (xdc_Char)0x6c,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x76,  /* [3872] */
    (xdc_Char)0x61,  /* [3873] */
    (xdc_Char)0x6c,  /* [3874] */
    (xdc_Char)0x75,  /* [3875] */
    (xdc_Char)0x65,  /* [3876] */
    (xdc_Char)0x3a,  /* [3877] */
    (xdc_Char)0x20,  /* [3878] */
    (xdc_Char)0x25,  /* [3879] */
    (xdc_Char)0x64,  /* [3880] */
    (xdc_Char)0x0,  /* [3881] */
    (xdc_Char)0x66,  /* [3882] */
    (xdc_Char)0x72,  /* [3883] */
    (xdc_Char)0x65,  /* [3884] */
    (xdc_Char)0x65,  /* [3885] */
    (xdc_Char)0x28,  /* [3886] */
    (xdc_Char)0x29,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x69,  /* [3889] */
    (xdc_Char)0x6e,  /* [3890] */
    (xdc_Char)0x76,  /* [3891] */
    (xdc_Char)0x61,  /* [3892] */
    (xdc_Char)0x6c,  /* [3893] */
    (xdc_Char)0x69,  /* [3894] */
    (xdc_Char)0x64,  /* [3895] */
    (xdc_Char)0x20,  /* [3896] */
    (xdc_Char)0x69,  /* [3897] */
    (xdc_Char)0x6e,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x67,  /* [3900] */
    (xdc_Char)0x72,  /* [3901] */
    (xdc_Char)0x6f,  /* [3902] */
    (xdc_Char)0x77,  /* [3903] */
    (xdc_Char)0x74,  /* [3904] */
    (xdc_Char)0x68,  /* [3905] */
    (xdc_Char)0x2d,  /* [3906] */
    (xdc_Char)0x6f,  /* [3907] */
    (xdc_Char)0x6e,  /* [3908] */
    (xdc_Char)0x6c,  /* [3909] */
    (xdc_Char)0x79,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x48,  /* [3912] */
    (xdc_Char)0x65,  /* [3913] */
    (xdc_Char)0x61,  /* [3914] */
    (xdc_Char)0x70,  /* [3915] */
    (xdc_Char)0x4d,  /* [3916] */
    (xdc_Char)0x69,  /* [3917] */
    (xdc_Char)0x6e,  /* [3918] */
    (xdc_Char)0x0,  /* [3919] */
    (xdc_Char)0x54,  /* [3920] */
    (xdc_Char)0x68,  /* [3921] */
    (xdc_Char)0x65,  /* [3922] */
    (xdc_Char)0x20,  /* [3923] */
    (xdc_Char)0x52,  /* [3924] */
    (xdc_Char)0x54,  /* [3925] */
    (xdc_Char)0x53,  /* [3926] */
    (xdc_Char)0x20,  /* [3927] */
    (xdc_Char)0x68,  /* [3928] */
    (xdc_Char)0x65,  /* [3929] */
    (xdc_Char)0x61,  /* [3930] */
    (xdc_Char)0x70,  /* [3931] */
    (xdc_Char)0x20,  /* [3932] */
    (xdc_Char)0x69,  /* [3933] */
    (xdc_Char)0x73,  /* [3934] */
    (xdc_Char)0x20,  /* [3935] */
    (xdc_Char)0x75,  /* [3936] */
    (xdc_Char)0x73,  /* [3937] */
    (xdc_Char)0x65,  /* [3938] */
    (xdc_Char)0x64,  /* [3939] */
    (xdc_Char)0x20,  /* [3940] */
    (xdc_Char)0x75,  /* [3941] */
    (xdc_Char)0x70,  /* [3942] */
    (xdc_Char)0x2e,  /* [3943] */
    (xdc_Char)0x20,  /* [3944] */
    (xdc_Char)0x45,  /* [3945] */
    (xdc_Char)0x78,  /* [3946] */
    (xdc_Char)0x61,  /* [3947] */
    (xdc_Char)0x6d,  /* [3948] */
    (xdc_Char)0x69,  /* [3949] */
    (xdc_Char)0x6e,  /* [3950] */
    (xdc_Char)0x65,  /* [3951] */
    (xdc_Char)0x20,  /* [3952] */
    (xdc_Char)0x50,  /* [3953] */
    (xdc_Char)0x72,  /* [3954] */
    (xdc_Char)0x6f,  /* [3955] */
    (xdc_Char)0x67,  /* [3956] */
    (xdc_Char)0x72,  /* [3957] */
    (xdc_Char)0x61,  /* [3958] */
    (xdc_Char)0x6d,  /* [3959] */
    (xdc_Char)0x2e,  /* [3960] */
    (xdc_Char)0x68,  /* [3961] */
    (xdc_Char)0x65,  /* [3962] */
    (xdc_Char)0x61,  /* [3963] */
    (xdc_Char)0x70,  /* [3964] */
    (xdc_Char)0x2e,  /* [3965] */
    (xdc_Char)0x0,  /* [3966] */
    (xdc_Char)0x45,  /* [3967] */
    (xdc_Char)0x5f,  /* [3968] */
    (xdc_Char)0x62,  /* [3969] */
    (xdc_Char)0x61,  /* [3970] */
    (xdc_Char)0x64,  /* [3971] */
    (xdc_Char)0x43,  /* [3972] */
    (xdc_Char)0x6f,  /* [3973] */
    (xdc_Char)0x6d,  /* [3974] */
    (xdc_Char)0x6d,  /* [3975] */
    (xdc_Char)0x61,  /* [3976] */
    (xdc_Char)0x6e,  /* [3977] */
    (xdc_Char)0x64,  /* [3978] */
    (xdc_Char)0x3a,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x52,  /* [3981] */
    (xdc_Char)0x65,  /* [3982] */
    (xdc_Char)0x63,  /* [3983] */
    (xdc_Char)0x65,  /* [3984] */
    (xdc_Char)0x69,  /* [3985] */
    (xdc_Char)0x76,  /* [3986] */
    (xdc_Char)0x65,  /* [3987] */
    (xdc_Char)0x64,  /* [3988] */
    (xdc_Char)0x20,  /* [3989] */
    (xdc_Char)0x69,  /* [3990] */
    (xdc_Char)0x6e,  /* [3991] */
    (xdc_Char)0x76,  /* [3992] */
    (xdc_Char)0x61,  /* [3993] */
    (xdc_Char)0x6c,  /* [3994] */
    (xdc_Char)0x69,  /* [3995] */
    (xdc_Char)0x64,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x63,  /* [3998] */
    (xdc_Char)0x6f,  /* [3999] */
    (xdc_Char)0x6d,  /* [4000] */
    (xdc_Char)0x6d,  /* [4001] */
    (xdc_Char)0x61,  /* [4002] */
    (xdc_Char)0x6e,  /* [4003] */
    (xdc_Char)0x64,  /* [4004] */
    (xdc_Char)0x2c,  /* [4005] */
    (xdc_Char)0x20,  /* [4006] */
    (xdc_Char)0x69,  /* [4007] */
    (xdc_Char)0x64,  /* [4008] */
    (xdc_Char)0x3a,  /* [4009] */
    (xdc_Char)0x20,  /* [4010] */
    (xdc_Char)0x25,  /* [4011] */
    (xdc_Char)0x64,  /* [4012] */
    (xdc_Char)0x2e,  /* [4013] */
    (xdc_Char)0x0,  /* [4014] */
    (xdc_Char)0x45,  /* [4015] */
    (xdc_Char)0x5f,  /* [4016] */
    (xdc_Char)0x6f,  /* [4017] */
    (xdc_Char)0x62,  /* [4018] */
    (xdc_Char)0x6a,  /* [4019] */
    (xdc_Char)0x65,  /* [4020] */
    (xdc_Char)0x63,  /* [4021] */
    (xdc_Char)0x74,  /* [4022] */
    (xdc_Char)0x4e,  /* [4023] */
    (xdc_Char)0x6f,  /* [4024] */
    (xdc_Char)0x74,  /* [4025] */
    (xdc_Char)0x49,  /* [4026] */
    (xdc_Char)0x6e,  /* [4027] */
    (xdc_Char)0x4b,  /* [4028] */
    (xdc_Char)0x65,  /* [4029] */
    (xdc_Char)0x72,  /* [4030] */
    (xdc_Char)0x6e,  /* [4031] */
    (xdc_Char)0x65,  /* [4032] */
    (xdc_Char)0x6c,  /* [4033] */
    (xdc_Char)0x53,  /* [4034] */
    (xdc_Char)0x70,  /* [4035] */
    (xdc_Char)0x61,  /* [4036] */
    (xdc_Char)0x63,  /* [4037] */
    (xdc_Char)0x65,  /* [4038] */
    (xdc_Char)0x3a,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x53,  /* [4041] */
    (xdc_Char)0x65,  /* [4042] */
    (xdc_Char)0x6d,  /* [4043] */
    (xdc_Char)0x61,  /* [4044] */
    (xdc_Char)0x70,  /* [4045] */
    (xdc_Char)0x68,  /* [4046] */
    (xdc_Char)0x6f,  /* [4047] */
    (xdc_Char)0x72,  /* [4048] */
    (xdc_Char)0x65,  /* [4049] */
    (xdc_Char)0x20,  /* [4050] */
    (xdc_Char)0x6f,  /* [4051] */
    (xdc_Char)0x62,  /* [4052] */
    (xdc_Char)0x6a,  /* [4053] */
    (xdc_Char)0x65,  /* [4054] */
    (xdc_Char)0x63,  /* [4055] */
    (xdc_Char)0x74,  /* [4056] */
    (xdc_Char)0x20,  /* [4057] */
    (xdc_Char)0x70,  /* [4058] */
    (xdc_Char)0x61,  /* [4059] */
    (xdc_Char)0x73,  /* [4060] */
    (xdc_Char)0x73,  /* [4061] */
    (xdc_Char)0x65,  /* [4062] */
    (xdc_Char)0x64,  /* [4063] */
    (xdc_Char)0x20,  /* [4064] */
    (xdc_Char)0x6e,  /* [4065] */
    (xdc_Char)0x6f,  /* [4066] */
    (xdc_Char)0x74,  /* [4067] */
    (xdc_Char)0x20,  /* [4068] */
    (xdc_Char)0x69,  /* [4069] */
    (xdc_Char)0x6e,  /* [4070] */
    (xdc_Char)0x20,  /* [4071] */
    (xdc_Char)0x4b,  /* [4072] */
    (xdc_Char)0x65,  /* [4073] */
    (xdc_Char)0x72,  /* [4074] */
    (xdc_Char)0x6e,  /* [4075] */
    (xdc_Char)0x65,  /* [4076] */
    (xdc_Char)0x6c,  /* [4077] */
    (xdc_Char)0x20,  /* [4078] */
    (xdc_Char)0x61,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x64,  /* [4081] */
    (xdc_Char)0x72,  /* [4082] */
    (xdc_Char)0x65,  /* [4083] */
    (xdc_Char)0x73,  /* [4084] */
    (xdc_Char)0x73,  /* [4085] */
    (xdc_Char)0x20,  /* [4086] */
    (xdc_Char)0x73,  /* [4087] */
    (xdc_Char)0x70,  /* [4088] */
    (xdc_Char)0x61,  /* [4089] */
    (xdc_Char)0x63,  /* [4090] */
    (xdc_Char)0x65,  /* [4091] */
    (xdc_Char)0x2e,  /* [4092] */
    (xdc_Char)0x0,  /* [4093] */
    (xdc_Char)0x45,  /* [4094] */
    (xdc_Char)0x5f,  /* [4095] */
    (xdc_Char)0x73,  /* [4096] */
    (xdc_Char)0x74,  /* [4097] */
    (xdc_Char)0x61,  /* [4098] */
    (xdc_Char)0x63,  /* [4099] */
    (xdc_Char)0x6b,  /* [4100] */
    (xdc_Char)0x4f,  /* [4101] */
    (xdc_Char)0x76,  /* [4102] */
    (xdc_Char)0x65,  /* [4103] */
    (xdc_Char)0x72,  /* [4104] */
    (xdc_Char)0x66,  /* [4105] */
    (xdc_Char)0x6c,  /* [4106] */
    (xdc_Char)0x6f,  /* [4107] */
    (xdc_Char)0x77,  /* [4108] */
    (xdc_Char)0x3a,  /* [4109] */
    (xdc_Char)0x20,  /* [4110] */
    (xdc_Char)0x54,  /* [4111] */
    (xdc_Char)0x61,  /* [4112] */
    (xdc_Char)0x73,  /* [4113] */
    (xdc_Char)0x6b,  /* [4114] */
    (xdc_Char)0x20,  /* [4115] */
    (xdc_Char)0x30,  /* [4116] */
    (xdc_Char)0x78,  /* [4117] */
    (xdc_Char)0x25,  /* [4118] */
    (xdc_Char)0x78,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x73,  /* [4121] */
    (xdc_Char)0x74,  /* [4122] */
    (xdc_Char)0x61,  /* [4123] */
    (xdc_Char)0x63,  /* [4124] */
    (xdc_Char)0x6b,  /* [4125] */
    (xdc_Char)0x20,  /* [4126] */
    (xdc_Char)0x6f,  /* [4127] */
    (xdc_Char)0x76,  /* [4128] */
    (xdc_Char)0x65,  /* [4129] */
    (xdc_Char)0x72,  /* [4130] */
    (xdc_Char)0x66,  /* [4131] */
    (xdc_Char)0x6c,  /* [4132] */
    (xdc_Char)0x6f,  /* [4133] */
    (xdc_Char)0x77,  /* [4134] */
    (xdc_Char)0x2e,  /* [4135] */
    (xdc_Char)0x0,  /* [4136] */
    (xdc_Char)0x45,  /* [4137] */
    (xdc_Char)0x5f,  /* [4138] */
    (xdc_Char)0x73,  /* [4139] */
    (xdc_Char)0x70,  /* [4140] */
    (xdc_Char)0x4f,  /* [4141] */
    (xdc_Char)0x75,  /* [4142] */
    (xdc_Char)0x74,  /* [4143] */
    (xdc_Char)0x4f,  /* [4144] */
    (xdc_Char)0x66,  /* [4145] */
    (xdc_Char)0x42,  /* [4146] */
    (xdc_Char)0x6f,  /* [4147] */
    (xdc_Char)0x75,  /* [4148] */
    (xdc_Char)0x6e,  /* [4149] */
    (xdc_Char)0x64,  /* [4150] */
    (xdc_Char)0x73,  /* [4151] */
    (xdc_Char)0x3a,  /* [4152] */
    (xdc_Char)0x20,  /* [4153] */
    (xdc_Char)0x54,  /* [4154] */
    (xdc_Char)0x61,  /* [4155] */
    (xdc_Char)0x73,  /* [4156] */
    (xdc_Char)0x6b,  /* [4157] */
    (xdc_Char)0x20,  /* [4158] */
    (xdc_Char)0x30,  /* [4159] */
    (xdc_Char)0x78,  /* [4160] */
    (xdc_Char)0x25,  /* [4161] */
    (xdc_Char)0x78,  /* [4162] */
    (xdc_Char)0x20,  /* [4163] */
    (xdc_Char)0x73,  /* [4164] */
    (xdc_Char)0x74,  /* [4165] */
    (xdc_Char)0x61,  /* [4166] */
    (xdc_Char)0x63,  /* [4167] */
    (xdc_Char)0x6b,  /* [4168] */
    (xdc_Char)0x20,  /* [4169] */
    (xdc_Char)0x65,  /* [4170] */
    (xdc_Char)0x72,  /* [4171] */
    (xdc_Char)0x72,  /* [4172] */
    (xdc_Char)0x6f,  /* [4173] */
    (xdc_Char)0x72,  /* [4174] */
    (xdc_Char)0x2c,  /* [4175] */
    (xdc_Char)0x20,  /* [4176] */
    (xdc_Char)0x53,  /* [4177] */
    (xdc_Char)0x50,  /* [4178] */
    (xdc_Char)0x20,  /* [4179] */
    (xdc_Char)0x3d,  /* [4180] */
    (xdc_Char)0x20,  /* [4181] */
    (xdc_Char)0x30,  /* [4182] */
    (xdc_Char)0x78,  /* [4183] */
    (xdc_Char)0x25,  /* [4184] */
    (xdc_Char)0x78,  /* [4185] */
    (xdc_Char)0x2e,  /* [4186] */
    (xdc_Char)0x0,  /* [4187] */
    (xdc_Char)0x45,  /* [4188] */
    (xdc_Char)0x5f,  /* [4189] */
    (xdc_Char)0x64,  /* [4190] */
    (xdc_Char)0x65,  /* [4191] */
    (xdc_Char)0x6c,  /* [4192] */
    (xdc_Char)0x65,  /* [4193] */
    (xdc_Char)0x74,  /* [4194] */
    (xdc_Char)0x65,  /* [4195] */
    (xdc_Char)0x4e,  /* [4196] */
    (xdc_Char)0x6f,  /* [4197] */
    (xdc_Char)0x74,  /* [4198] */
    (xdc_Char)0x41,  /* [4199] */
    (xdc_Char)0x6c,  /* [4200] */
    (xdc_Char)0x6c,  /* [4201] */
    (xdc_Char)0x6f,  /* [4202] */
    (xdc_Char)0x77,  /* [4203] */
    (xdc_Char)0x65,  /* [4204] */
    (xdc_Char)0x64,  /* [4205] */
    (xdc_Char)0x3a,  /* [4206] */
    (xdc_Char)0x20,  /* [4207] */
    (xdc_Char)0x54,  /* [4208] */
    (xdc_Char)0x61,  /* [4209] */
    (xdc_Char)0x73,  /* [4210] */
    (xdc_Char)0x6b,  /* [4211] */
    (xdc_Char)0x20,  /* [4212] */
    (xdc_Char)0x30,  /* [4213] */
    (xdc_Char)0x78,  /* [4214] */
    (xdc_Char)0x25,  /* [4215] */
    (xdc_Char)0x78,  /* [4216] */
    (xdc_Char)0x2e,  /* [4217] */
    (xdc_Char)0x0,  /* [4218] */
    (xdc_Char)0x45,  /* [4219] */
    (xdc_Char)0x5f,  /* [4220] */
    (xdc_Char)0x6d,  /* [4221] */
    (xdc_Char)0x6f,  /* [4222] */
    (xdc_Char)0x64,  /* [4223] */
    (xdc_Char)0x75,  /* [4224] */
    (xdc_Char)0x6c,  /* [4225] */
    (xdc_Char)0x65,  /* [4226] */
    (xdc_Char)0x53,  /* [4227] */
    (xdc_Char)0x74,  /* [4228] */
    (xdc_Char)0x61,  /* [4229] */
    (xdc_Char)0x74,  /* [4230] */
    (xdc_Char)0x65,  /* [4231] */
    (xdc_Char)0x43,  /* [4232] */
    (xdc_Char)0x68,  /* [4233] */
    (xdc_Char)0x65,  /* [4234] */
    (xdc_Char)0x63,  /* [4235] */
    (xdc_Char)0x6b,  /* [4236] */
    (xdc_Char)0x46,  /* [4237] */
    (xdc_Char)0x61,  /* [4238] */
    (xdc_Char)0x69,  /* [4239] */
    (xdc_Char)0x6c,  /* [4240] */
    (xdc_Char)0x65,  /* [4241] */
    (xdc_Char)0x64,  /* [4242] */
    (xdc_Char)0x3a,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x54,  /* [4245] */
    (xdc_Char)0x61,  /* [4246] */
    (xdc_Char)0x73,  /* [4247] */
    (xdc_Char)0x6b,  /* [4248] */
    (xdc_Char)0x20,  /* [4249] */
    (xdc_Char)0x6d,  /* [4250] */
    (xdc_Char)0x6f,  /* [4251] */
    (xdc_Char)0x64,  /* [4252] */
    (xdc_Char)0x75,  /* [4253] */
    (xdc_Char)0x6c,  /* [4254] */
    (xdc_Char)0x65,  /* [4255] */
    (xdc_Char)0x20,  /* [4256] */
    (xdc_Char)0x73,  /* [4257] */
    (xdc_Char)0x74,  /* [4258] */
    (xdc_Char)0x61,  /* [4259] */
    (xdc_Char)0x74,  /* [4260] */
    (xdc_Char)0x65,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x64,  /* [4263] */
    (xdc_Char)0x61,  /* [4264] */
    (xdc_Char)0x74,  /* [4265] */
    (xdc_Char)0x61,  /* [4266] */
    (xdc_Char)0x20,  /* [4267] */
    (xdc_Char)0x69,  /* [4268] */
    (xdc_Char)0x6e,  /* [4269] */
    (xdc_Char)0x74,  /* [4270] */
    (xdc_Char)0x65,  /* [4271] */
    (xdc_Char)0x67,  /* [4272] */
    (xdc_Char)0x72,  /* [4273] */
    (xdc_Char)0x69,  /* [4274] */
    (xdc_Char)0x74,  /* [4275] */
    (xdc_Char)0x79,  /* [4276] */
    (xdc_Char)0x20,  /* [4277] */
    (xdc_Char)0x63,  /* [4278] */
    (xdc_Char)0x68,  /* [4279] */
    (xdc_Char)0x65,  /* [4280] */
    (xdc_Char)0x63,  /* [4281] */
    (xdc_Char)0x6b,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x66,  /* [4284] */
    (xdc_Char)0x61,  /* [4285] */
    (xdc_Char)0x69,  /* [4286] */
    (xdc_Char)0x6c,  /* [4287] */
    (xdc_Char)0x65,  /* [4288] */
    (xdc_Char)0x64,  /* [4289] */
    (xdc_Char)0x2e,  /* [4290] */
    (xdc_Char)0x0,  /* [4291] */
    (xdc_Char)0x45,  /* [4292] */
    (xdc_Char)0x5f,  /* [4293] */
    (xdc_Char)0x6f,  /* [4294] */
    (xdc_Char)0x62,  /* [4295] */
    (xdc_Char)0x6a,  /* [4296] */
    (xdc_Char)0x65,  /* [4297] */
    (xdc_Char)0x63,  /* [4298] */
    (xdc_Char)0x74,  /* [4299] */
    (xdc_Char)0x43,  /* [4300] */
    (xdc_Char)0x68,  /* [4301] */
    (xdc_Char)0x65,  /* [4302] */
    (xdc_Char)0x63,  /* [4303] */
    (xdc_Char)0x6b,  /* [4304] */
    (xdc_Char)0x46,  /* [4305] */
    (xdc_Char)0x61,  /* [4306] */
    (xdc_Char)0x69,  /* [4307] */
    (xdc_Char)0x6c,  /* [4308] */
    (xdc_Char)0x65,  /* [4309] */
    (xdc_Char)0x64,  /* [4310] */
    (xdc_Char)0x3a,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x54,  /* [4313] */
    (xdc_Char)0x61,  /* [4314] */
    (xdc_Char)0x73,  /* [4315] */
    (xdc_Char)0x6b,  /* [4316] */
    (xdc_Char)0x20,  /* [4317] */
    (xdc_Char)0x30,  /* [4318] */
    (xdc_Char)0x78,  /* [4319] */
    (xdc_Char)0x25,  /* [4320] */
    (xdc_Char)0x78,  /* [4321] */
    (xdc_Char)0x20,  /* [4322] */
    (xdc_Char)0x6f,  /* [4323] */
    (xdc_Char)0x62,  /* [4324] */
    (xdc_Char)0x6a,  /* [4325] */
    (xdc_Char)0x65,  /* [4326] */
    (xdc_Char)0x63,  /* [4327] */
    (xdc_Char)0x74,  /* [4328] */
    (xdc_Char)0x20,  /* [4329] */
    (xdc_Char)0x64,  /* [4330] */
    (xdc_Char)0x61,  /* [4331] */
    (xdc_Char)0x74,  /* [4332] */
    (xdc_Char)0x61,  /* [4333] */
    (xdc_Char)0x20,  /* [4334] */
    (xdc_Char)0x69,  /* [4335] */
    (xdc_Char)0x6e,  /* [4336] */
    (xdc_Char)0x74,  /* [4337] */
    (xdc_Char)0x65,  /* [4338] */
    (xdc_Char)0x67,  /* [4339] */
    (xdc_Char)0x72,  /* [4340] */
    (xdc_Char)0x69,  /* [4341] */
    (xdc_Char)0x74,  /* [4342] */
    (xdc_Char)0x79,  /* [4343] */
    (xdc_Char)0x20,  /* [4344] */
    (xdc_Char)0x63,  /* [4345] */
    (xdc_Char)0x68,  /* [4346] */
    (xdc_Char)0x65,  /* [4347] */
    (xdc_Char)0x63,  /* [4348] */
    (xdc_Char)0x6b,  /* [4349] */
    (xdc_Char)0x20,  /* [4350] */
    (xdc_Char)0x66,  /* [4351] */
    (xdc_Char)0x61,  /* [4352] */
    (xdc_Char)0x69,  /* [4353] */
    (xdc_Char)0x6c,  /* [4354] */
    (xdc_Char)0x65,  /* [4355] */
    (xdc_Char)0x64,  /* [4356] */
    (xdc_Char)0x2e,  /* [4357] */
    (xdc_Char)0x0,  /* [4358] */
    (xdc_Char)0x45,  /* [4359] */
    (xdc_Char)0x5f,  /* [4360] */
    (xdc_Char)0x6f,  /* [4361] */
    (xdc_Char)0x62,  /* [4362] */
    (xdc_Char)0x6a,  /* [4363] */
    (xdc_Char)0x65,  /* [4364] */
    (xdc_Char)0x63,  /* [4365] */
    (xdc_Char)0x74,  /* [4366] */
    (xdc_Char)0x4e,  /* [4367] */
    (xdc_Char)0x6f,  /* [4368] */
    (xdc_Char)0x74,  /* [4369] */
    (xdc_Char)0x49,  /* [4370] */
    (xdc_Char)0x6e,  /* [4371] */
    (xdc_Char)0x4b,  /* [4372] */
    (xdc_Char)0x65,  /* [4373] */
    (xdc_Char)0x72,  /* [4374] */
    (xdc_Char)0x6e,  /* [4375] */
    (xdc_Char)0x65,  /* [4376] */
    (xdc_Char)0x6c,  /* [4377] */
    (xdc_Char)0x53,  /* [4378] */
    (xdc_Char)0x70,  /* [4379] */
    (xdc_Char)0x61,  /* [4380] */
    (xdc_Char)0x63,  /* [4381] */
    (xdc_Char)0x65,  /* [4382] */
    (xdc_Char)0x3a,  /* [4383] */
    (xdc_Char)0x20,  /* [4384] */
    (xdc_Char)0x54,  /* [4385] */
    (xdc_Char)0x61,  /* [4386] */
    (xdc_Char)0x73,  /* [4387] */
    (xdc_Char)0x6b,  /* [4388] */
    (xdc_Char)0x20,  /* [4389] */
    (xdc_Char)0x6f,  /* [4390] */
    (xdc_Char)0x62,  /* [4391] */
    (xdc_Char)0x6a,  /* [4392] */
    (xdc_Char)0x65,  /* [4393] */
    (xdc_Char)0x63,  /* [4394] */
    (xdc_Char)0x74,  /* [4395] */
    (xdc_Char)0x20,  /* [4396] */
    (xdc_Char)0x70,  /* [4397] */
    (xdc_Char)0x61,  /* [4398] */
    (xdc_Char)0x73,  /* [4399] */
    (xdc_Char)0x73,  /* [4400] */
    (xdc_Char)0x65,  /* [4401] */
    (xdc_Char)0x64,  /* [4402] */
    (xdc_Char)0x20,  /* [4403] */
    (xdc_Char)0x6e,  /* [4404] */
    (xdc_Char)0x6f,  /* [4405] */
    (xdc_Char)0x74,  /* [4406] */
    (xdc_Char)0x20,  /* [4407] */
    (xdc_Char)0x69,  /* [4408] */
    (xdc_Char)0x6e,  /* [4409] */
    (xdc_Char)0x20,  /* [4410] */
    (xdc_Char)0x4b,  /* [4411] */
    (xdc_Char)0x65,  /* [4412] */
    (xdc_Char)0x72,  /* [4413] */
    (xdc_Char)0x6e,  /* [4414] */
    (xdc_Char)0x65,  /* [4415] */
    (xdc_Char)0x6c,  /* [4416] */
    (xdc_Char)0x20,  /* [4417] */
    (xdc_Char)0x61,  /* [4418] */
    (xdc_Char)0x64,  /* [4419] */
    (xdc_Char)0x64,  /* [4420] */
    (xdc_Char)0x72,  /* [4421] */
    (xdc_Char)0x65,  /* [4422] */
    (xdc_Char)0x73,  /* [4423] */
    (xdc_Char)0x73,  /* [4424] */
    (xdc_Char)0x20,  /* [4425] */
    (xdc_Char)0x73,  /* [4426] */
    (xdc_Char)0x70,  /* [4427] */
    (xdc_Char)0x61,  /* [4428] */
    (xdc_Char)0x63,  /* [4429] */
    (xdc_Char)0x65,  /* [4430] */
    (xdc_Char)0x2e,  /* [4431] */
    (xdc_Char)0x0,  /* [4432] */
    (xdc_Char)0x45,  /* [4433] */
    (xdc_Char)0x5f,  /* [4434] */
    (xdc_Char)0x73,  /* [4435] */
    (xdc_Char)0x74,  /* [4436] */
    (xdc_Char)0x61,  /* [4437] */
    (xdc_Char)0x63,  /* [4438] */
    (xdc_Char)0x6b,  /* [4439] */
    (xdc_Char)0x4f,  /* [4440] */
    (xdc_Char)0x76,  /* [4441] */
    (xdc_Char)0x65,  /* [4442] */
    (xdc_Char)0x72,  /* [4443] */
    (xdc_Char)0x66,  /* [4444] */
    (xdc_Char)0x6c,  /* [4445] */
    (xdc_Char)0x6f,  /* [4446] */
    (xdc_Char)0x77,  /* [4447] */
    (xdc_Char)0x3a,  /* [4448] */
    (xdc_Char)0x20,  /* [4449] */
    (xdc_Char)0x49,  /* [4450] */
    (xdc_Char)0x53,  /* [4451] */
    (xdc_Char)0x52,  /* [4452] */
    (xdc_Char)0x20,  /* [4453] */
    (xdc_Char)0x73,  /* [4454] */
    (xdc_Char)0x74,  /* [4455] */
    (xdc_Char)0x61,  /* [4456] */
    (xdc_Char)0x63,  /* [4457] */
    (xdc_Char)0x6b,  /* [4458] */
    (xdc_Char)0x20,  /* [4459] */
    (xdc_Char)0x6f,  /* [4460] */
    (xdc_Char)0x76,  /* [4461] */
    (xdc_Char)0x65,  /* [4462] */
    (xdc_Char)0x72,  /* [4463] */
    (xdc_Char)0x66,  /* [4464] */
    (xdc_Char)0x6c,  /* [4465] */
    (xdc_Char)0x6f,  /* [4466] */
    (xdc_Char)0x77,  /* [4467] */
    (xdc_Char)0x2e,  /* [4468] */
    (xdc_Char)0x0,  /* [4469] */
    (xdc_Char)0x45,  /* [4470] */
    (xdc_Char)0x5f,  /* [4471] */
    (xdc_Char)0x62,  /* [4472] */
    (xdc_Char)0x61,  /* [4473] */
    (xdc_Char)0x64,  /* [4474] */
    (xdc_Char)0x49,  /* [4475] */
    (xdc_Char)0x6e,  /* [4476] */
    (xdc_Char)0x74,  /* [4477] */
    (xdc_Char)0x4e,  /* [4478] */
    (xdc_Char)0x75,  /* [4479] */
    (xdc_Char)0x6d,  /* [4480] */
    (xdc_Char)0x2c,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x69,  /* [4483] */
    (xdc_Char)0x6e,  /* [4484] */
    (xdc_Char)0x74,  /* [4485] */
    (xdc_Char)0x6e,  /* [4486] */
    (xdc_Char)0x75,  /* [4487] */
    (xdc_Char)0x6d,  /* [4488] */
    (xdc_Char)0x3a,  /* [4489] */
    (xdc_Char)0x20,  /* [4490] */
    (xdc_Char)0x25,  /* [4491] */
    (xdc_Char)0x64,  /* [4492] */
    (xdc_Char)0x20,  /* [4493] */
    (xdc_Char)0x69,  /* [4494] */
    (xdc_Char)0x73,  /* [4495] */
    (xdc_Char)0x20,  /* [4496] */
    (xdc_Char)0x6f,  /* [4497] */
    (xdc_Char)0x75,  /* [4498] */
    (xdc_Char)0x74,  /* [4499] */
    (xdc_Char)0x20,  /* [4500] */
    (xdc_Char)0x6f,  /* [4501] */
    (xdc_Char)0x66,  /* [4502] */
    (xdc_Char)0x20,  /* [4503] */
    (xdc_Char)0x72,  /* [4504] */
    (xdc_Char)0x61,  /* [4505] */
    (xdc_Char)0x6e,  /* [4506] */
    (xdc_Char)0x67,  /* [4507] */
    (xdc_Char)0x65,  /* [4508] */
    (xdc_Char)0x0,  /* [4509] */
    (xdc_Char)0x45,  /* [4510] */
    (xdc_Char)0x5f,  /* [4511] */
    (xdc_Char)0x61,  /* [4512] */
    (xdc_Char)0x6c,  /* [4513] */
    (xdc_Char)0x72,  /* [4514] */
    (xdc_Char)0x65,  /* [4515] */
    (xdc_Char)0x61,  /* [4516] */
    (xdc_Char)0x64,  /* [4517] */
    (xdc_Char)0x79,  /* [4518] */
    (xdc_Char)0x44,  /* [4519] */
    (xdc_Char)0x65,  /* [4520] */
    (xdc_Char)0x66,  /* [4521] */
    (xdc_Char)0x69,  /* [4522] */
    (xdc_Char)0x6e,  /* [4523] */
    (xdc_Char)0x65,  /* [4524] */
    (xdc_Char)0x64,  /* [4525] */
    (xdc_Char)0x3a,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x48,  /* [4528] */
    (xdc_Char)0x77,  /* [4529] */
    (xdc_Char)0x69,  /* [4530] */
    (xdc_Char)0x20,  /* [4531] */
    (xdc_Char)0x61,  /* [4532] */
    (xdc_Char)0x6c,  /* [4533] */
    (xdc_Char)0x72,  /* [4534] */
    (xdc_Char)0x65,  /* [4535] */
    (xdc_Char)0x61,  /* [4536] */
    (xdc_Char)0x64,  /* [4537] */
    (xdc_Char)0x79,  /* [4538] */
    (xdc_Char)0x20,  /* [4539] */
    (xdc_Char)0x64,  /* [4540] */
    (xdc_Char)0x65,  /* [4541] */
    (xdc_Char)0x66,  /* [4542] */
    (xdc_Char)0x69,  /* [4543] */
    (xdc_Char)0x6e,  /* [4544] */
    (xdc_Char)0x65,  /* [4545] */
    (xdc_Char)0x64,  /* [4546] */
    (xdc_Char)0x3a,  /* [4547] */
    (xdc_Char)0x20,  /* [4548] */
    (xdc_Char)0x69,  /* [4549] */
    (xdc_Char)0x6e,  /* [4550] */
    (xdc_Char)0x74,  /* [4551] */
    (xdc_Char)0x72,  /* [4552] */
    (xdc_Char)0x23,  /* [4553] */
    (xdc_Char)0x20,  /* [4554] */
    (xdc_Char)0x25,  /* [4555] */
    (xdc_Char)0x64,  /* [4556] */
    (xdc_Char)0x0,  /* [4557] */
    (xdc_Char)0x45,  /* [4558] */
    (xdc_Char)0x5f,  /* [4559] */
    (xdc_Char)0x68,  /* [4560] */
    (xdc_Char)0x77,  /* [4561] */
    (xdc_Char)0x69,  /* [4562] */
    (xdc_Char)0x4c,  /* [4563] */
    (xdc_Char)0x69,  /* [4564] */
    (xdc_Char)0x6d,  /* [4565] */
    (xdc_Char)0x69,  /* [4566] */
    (xdc_Char)0x74,  /* [4567] */
    (xdc_Char)0x45,  /* [4568] */
    (xdc_Char)0x78,  /* [4569] */
    (xdc_Char)0x63,  /* [4570] */
    (xdc_Char)0x65,  /* [4571] */
    (xdc_Char)0x65,  /* [4572] */
    (xdc_Char)0x64,  /* [4573] */
    (xdc_Char)0x65,  /* [4574] */
    (xdc_Char)0x64,  /* [4575] */
    (xdc_Char)0x3a,  /* [4576] */
    (xdc_Char)0x20,  /* [4577] */
    (xdc_Char)0x54,  /* [4578] */
    (xdc_Char)0x6f,  /* [4579] */
    (xdc_Char)0x6f,  /* [4580] */
    (xdc_Char)0x20,  /* [4581] */
    (xdc_Char)0x6d,  /* [4582] */
    (xdc_Char)0x61,  /* [4583] */
    (xdc_Char)0x6e,  /* [4584] */
    (xdc_Char)0x79,  /* [4585] */
    (xdc_Char)0x20,  /* [4586] */
    (xdc_Char)0x69,  /* [4587] */
    (xdc_Char)0x6e,  /* [4588] */
    (xdc_Char)0x74,  /* [4589] */
    (xdc_Char)0x65,  /* [4590] */
    (xdc_Char)0x72,  /* [4591] */
    (xdc_Char)0x72,  /* [4592] */
    (xdc_Char)0x75,  /* [4593] */
    (xdc_Char)0x70,  /* [4594] */
    (xdc_Char)0x74,  /* [4595] */
    (xdc_Char)0x73,  /* [4596] */
    (xdc_Char)0x20,  /* [4597] */
    (xdc_Char)0x64,  /* [4598] */
    (xdc_Char)0x65,  /* [4599] */
    (xdc_Char)0x66,  /* [4600] */
    (xdc_Char)0x69,  /* [4601] */
    (xdc_Char)0x6e,  /* [4602] */
    (xdc_Char)0x65,  /* [4603] */
    (xdc_Char)0x64,  /* [4604] */
    (xdc_Char)0x0,  /* [4605] */
    (xdc_Char)0x45,  /* [4606] */
    (xdc_Char)0x5f,  /* [4607] */
    (xdc_Char)0x65,  /* [4608] */
    (xdc_Char)0x78,  /* [4609] */
    (xdc_Char)0x63,  /* [4610] */
    (xdc_Char)0x65,  /* [4611] */
    (xdc_Char)0x70,  /* [4612] */
    (xdc_Char)0x74,  /* [4613] */
    (xdc_Char)0x69,  /* [4614] */
    (xdc_Char)0x6f,  /* [4615] */
    (xdc_Char)0x6e,  /* [4616] */
    (xdc_Char)0x3a,  /* [4617] */
    (xdc_Char)0x20,  /* [4618] */
    (xdc_Char)0x69,  /* [4619] */
    (xdc_Char)0x64,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x3d,  /* [4622] */
    (xdc_Char)0x20,  /* [4623] */
    (xdc_Char)0x25,  /* [4624] */
    (xdc_Char)0x64,  /* [4625] */
    (xdc_Char)0x2c,  /* [4626] */
    (xdc_Char)0x20,  /* [4627] */
    (xdc_Char)0x70,  /* [4628] */
    (xdc_Char)0x63,  /* [4629] */
    (xdc_Char)0x20,  /* [4630] */
    (xdc_Char)0x3d,  /* [4631] */
    (xdc_Char)0x20,  /* [4632] */
    (xdc_Char)0x25,  /* [4633] */
    (xdc_Char)0x30,  /* [4634] */
    (xdc_Char)0x38,  /* [4635] */
    (xdc_Char)0x78,  /* [4636] */
    (xdc_Char)0x2e,  /* [4637] */
    (xdc_Char)0xa,  /* [4638] */
    (xdc_Char)0x54,  /* [4639] */
    (xdc_Char)0x6f,  /* [4640] */
    (xdc_Char)0x20,  /* [4641] */
    (xdc_Char)0x73,  /* [4642] */
    (xdc_Char)0x65,  /* [4643] */
    (xdc_Char)0x65,  /* [4644] */
    (xdc_Char)0x20,  /* [4645] */
    (xdc_Char)0x6d,  /* [4646] */
    (xdc_Char)0x6f,  /* [4647] */
    (xdc_Char)0x72,  /* [4648] */
    (xdc_Char)0x65,  /* [4649] */
    (xdc_Char)0x20,  /* [4650] */
    (xdc_Char)0x65,  /* [4651] */
    (xdc_Char)0x78,  /* [4652] */
    (xdc_Char)0x63,  /* [4653] */
    (xdc_Char)0x65,  /* [4654] */
    (xdc_Char)0x70,  /* [4655] */
    (xdc_Char)0x74,  /* [4656] */
    (xdc_Char)0x69,  /* [4657] */
    (xdc_Char)0x6f,  /* [4658] */
    (xdc_Char)0x6e,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x64,  /* [4661] */
    (xdc_Char)0x65,  /* [4662] */
    (xdc_Char)0x74,  /* [4663] */
    (xdc_Char)0x61,  /* [4664] */
    (xdc_Char)0x69,  /* [4665] */
    (xdc_Char)0x6c,  /* [4666] */
    (xdc_Char)0x2c,  /* [4667] */
    (xdc_Char)0x20,  /* [4668] */
    (xdc_Char)0x73,  /* [4669] */
    (xdc_Char)0x65,  /* [4670] */
    (xdc_Char)0x74,  /* [4671] */
    (xdc_Char)0x20,  /* [4672] */
    (xdc_Char)0x74,  /* [4673] */
    (xdc_Char)0x69,  /* [4674] */
    (xdc_Char)0x2e,  /* [4675] */
    (xdc_Char)0x73,  /* [4676] */
    (xdc_Char)0x79,  /* [4677] */
    (xdc_Char)0x73,  /* [4678] */
    (xdc_Char)0x62,  /* [4679] */
    (xdc_Char)0x69,  /* [4680] */
    (xdc_Char)0x6f,  /* [4681] */
    (xdc_Char)0x73,  /* [4682] */
    (xdc_Char)0x2e,  /* [4683] */
    (xdc_Char)0x66,  /* [4684] */
    (xdc_Char)0x61,  /* [4685] */
    (xdc_Char)0x6d,  /* [4686] */
    (xdc_Char)0x69,  /* [4687] */
    (xdc_Char)0x6c,  /* [4688] */
    (xdc_Char)0x79,  /* [4689] */
    (xdc_Char)0x2e,  /* [4690] */
    (xdc_Char)0x61,  /* [4691] */
    (xdc_Char)0x72,  /* [4692] */
    (xdc_Char)0x6d,  /* [4693] */
    (xdc_Char)0x2e,  /* [4694] */
    (xdc_Char)0x6d,  /* [4695] */
    (xdc_Char)0x33,  /* [4696] */
    (xdc_Char)0x2e,  /* [4697] */
    (xdc_Char)0x48,  /* [4698] */
    (xdc_Char)0x77,  /* [4699] */
    (xdc_Char)0x69,  /* [4700] */
    (xdc_Char)0x2e,  /* [4701] */
    (xdc_Char)0x65,  /* [4702] */
    (xdc_Char)0x6e,  /* [4703] */
    (xdc_Char)0x61,  /* [4704] */
    (xdc_Char)0x62,  /* [4705] */
    (xdc_Char)0x6c,  /* [4706] */
    (xdc_Char)0x65,  /* [4707] */
    (xdc_Char)0x45,  /* [4708] */
    (xdc_Char)0x78,  /* [4709] */
    (xdc_Char)0x63,  /* [4710] */
    (xdc_Char)0x65,  /* [4711] */
    (xdc_Char)0x70,  /* [4712] */
    (xdc_Char)0x74,  /* [4713] */
    (xdc_Char)0x69,  /* [4714] */
    (xdc_Char)0x6f,  /* [4715] */
    (xdc_Char)0x6e,  /* [4716] */
    (xdc_Char)0x20,  /* [4717] */
    (xdc_Char)0x3d,  /* [4718] */
    (xdc_Char)0x20,  /* [4719] */
    (xdc_Char)0x74,  /* [4720] */
    (xdc_Char)0x72,  /* [4721] */
    (xdc_Char)0x75,  /* [4722] */
    (xdc_Char)0x65,  /* [4723] */
    (xdc_Char)0x20,  /* [4724] */
    (xdc_Char)0x6f,  /* [4725] */
    (xdc_Char)0x72,  /* [4726] */
    (xdc_Char)0x2c,  /* [4727] */
    (xdc_Char)0xa,  /* [4728] */
    (xdc_Char)0x65,  /* [4729] */
    (xdc_Char)0x78,  /* [4730] */
    (xdc_Char)0x61,  /* [4731] */
    (xdc_Char)0x6d,  /* [4732] */
    (xdc_Char)0x69,  /* [4733] */
    (xdc_Char)0x6e,  /* [4734] */
    (xdc_Char)0x65,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x74,  /* [4737] */
    (xdc_Char)0x68,  /* [4738] */
    (xdc_Char)0x65,  /* [4739] */
    (xdc_Char)0x20,  /* [4740] */
    (xdc_Char)0x45,  /* [4741] */
    (xdc_Char)0x78,  /* [4742] */
    (xdc_Char)0x63,  /* [4743] */
    (xdc_Char)0x65,  /* [4744] */
    (xdc_Char)0x70,  /* [4745] */
    (xdc_Char)0x74,  /* [4746] */
    (xdc_Char)0x69,  /* [4747] */
    (xdc_Char)0x6f,  /* [4748] */
    (xdc_Char)0x6e,  /* [4749] */
    (xdc_Char)0x20,  /* [4750] */
    (xdc_Char)0x76,  /* [4751] */
    (xdc_Char)0x69,  /* [4752] */
    (xdc_Char)0x65,  /* [4753] */
    (xdc_Char)0x77,  /* [4754] */
    (xdc_Char)0x20,  /* [4755] */
    (xdc_Char)0x66,  /* [4756] */
    (xdc_Char)0x6f,  /* [4757] */
    (xdc_Char)0x72,  /* [4758] */
    (xdc_Char)0x20,  /* [4759] */
    (xdc_Char)0x74,  /* [4760] */
    (xdc_Char)0x68,  /* [4761] */
    (xdc_Char)0x65,  /* [4762] */
    (xdc_Char)0x20,  /* [4763] */
    (xdc_Char)0x74,  /* [4764] */
    (xdc_Char)0x69,  /* [4765] */
    (xdc_Char)0x2e,  /* [4766] */
    (xdc_Char)0x73,  /* [4767] */
    (xdc_Char)0x79,  /* [4768] */
    (xdc_Char)0x73,  /* [4769] */
    (xdc_Char)0x62,  /* [4770] */
    (xdc_Char)0x69,  /* [4771] */
    (xdc_Char)0x6f,  /* [4772] */
    (xdc_Char)0x73,  /* [4773] */
    (xdc_Char)0x2e,  /* [4774] */
    (xdc_Char)0x66,  /* [4775] */
    (xdc_Char)0x61,  /* [4776] */
    (xdc_Char)0x6d,  /* [4777] */
    (xdc_Char)0x69,  /* [4778] */
    (xdc_Char)0x6c,  /* [4779] */
    (xdc_Char)0x79,  /* [4780] */
    (xdc_Char)0x2e,  /* [4781] */
    (xdc_Char)0x61,  /* [4782] */
    (xdc_Char)0x72,  /* [4783] */
    (xdc_Char)0x6d,  /* [4784] */
    (xdc_Char)0x2e,  /* [4785] */
    (xdc_Char)0x6d,  /* [4786] */
    (xdc_Char)0x33,  /* [4787] */
    (xdc_Char)0x2e,  /* [4788] */
    (xdc_Char)0x48,  /* [4789] */
    (xdc_Char)0x77,  /* [4790] */
    (xdc_Char)0x69,  /* [4791] */
    (xdc_Char)0x20,  /* [4792] */
    (xdc_Char)0x6d,  /* [4793] */
    (xdc_Char)0x6f,  /* [4794] */
    (xdc_Char)0x64,  /* [4795] */
    (xdc_Char)0x75,  /* [4796] */
    (xdc_Char)0x6c,  /* [4797] */
    (xdc_Char)0x65,  /* [4798] */
    (xdc_Char)0x20,  /* [4799] */
    (xdc_Char)0x75,  /* [4800] */
    (xdc_Char)0x73,  /* [4801] */
    (xdc_Char)0x69,  /* [4802] */
    (xdc_Char)0x6e,  /* [4803] */
    (xdc_Char)0x67,  /* [4804] */
    (xdc_Char)0x20,  /* [4805] */
    (xdc_Char)0x52,  /* [4806] */
    (xdc_Char)0x4f,  /* [4807] */
    (xdc_Char)0x56,  /* [4808] */
    (xdc_Char)0x2e,  /* [4809] */
    (xdc_Char)0x0,  /* [4810] */
    (xdc_Char)0x45,  /* [4811] */
    (xdc_Char)0x5f,  /* [4812] */
    (xdc_Char)0x6e,  /* [4813] */
    (xdc_Char)0x6f,  /* [4814] */
    (xdc_Char)0x49,  /* [4815] */
    (xdc_Char)0x73,  /* [4816] */
    (xdc_Char)0x72,  /* [4817] */
    (xdc_Char)0x3a,  /* [4818] */
    (xdc_Char)0x20,  /* [4819] */
    (xdc_Char)0x69,  /* [4820] */
    (xdc_Char)0x64,  /* [4821] */
    (xdc_Char)0x20,  /* [4822] */
    (xdc_Char)0x3d,  /* [4823] */
    (xdc_Char)0x20,  /* [4824] */
    (xdc_Char)0x25,  /* [4825] */
    (xdc_Char)0x64,  /* [4826] */
    (xdc_Char)0x2c,  /* [4827] */
    (xdc_Char)0x20,  /* [4828] */
    (xdc_Char)0x70,  /* [4829] */
    (xdc_Char)0x63,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x3d,  /* [4832] */
    (xdc_Char)0x20,  /* [4833] */
    (xdc_Char)0x25,  /* [4834] */
    (xdc_Char)0x30,  /* [4835] */
    (xdc_Char)0x38,  /* [4836] */
    (xdc_Char)0x78,  /* [4837] */
    (xdc_Char)0x0,  /* [4838] */
    (xdc_Char)0x45,  /* [4839] */
    (xdc_Char)0x5f,  /* [4840] */
    (xdc_Char)0x4e,  /* [4841] */
    (xdc_Char)0x4d,  /* [4842] */
    (xdc_Char)0x49,  /* [4843] */
    (xdc_Char)0x3a,  /* [4844] */
    (xdc_Char)0x20,  /* [4845] */
    (xdc_Char)0x25,  /* [4846] */
    (xdc_Char)0x73,  /* [4847] */
    (xdc_Char)0x0,  /* [4848] */
    (xdc_Char)0x45,  /* [4849] */
    (xdc_Char)0x5f,  /* [4850] */
    (xdc_Char)0x68,  /* [4851] */
    (xdc_Char)0x61,  /* [4852] */
    (xdc_Char)0x72,  /* [4853] */
    (xdc_Char)0x64,  /* [4854] */
    (xdc_Char)0x46,  /* [4855] */
    (xdc_Char)0x61,  /* [4856] */
    (xdc_Char)0x75,  /* [4857] */
    (xdc_Char)0x6c,  /* [4858] */
    (xdc_Char)0x74,  /* [4859] */
    (xdc_Char)0x3a,  /* [4860] */
    (xdc_Char)0x20,  /* [4861] */
    (xdc_Char)0x25,  /* [4862] */
    (xdc_Char)0x73,  /* [4863] */
    (xdc_Char)0x0,  /* [4864] */
    (xdc_Char)0x45,  /* [4865] */
    (xdc_Char)0x5f,  /* [4866] */
    (xdc_Char)0x6d,  /* [4867] */
    (xdc_Char)0x65,  /* [4868] */
    (xdc_Char)0x6d,  /* [4869] */
    (xdc_Char)0x46,  /* [4870] */
    (xdc_Char)0x61,  /* [4871] */
    (xdc_Char)0x75,  /* [4872] */
    (xdc_Char)0x6c,  /* [4873] */
    (xdc_Char)0x74,  /* [4874] */
    (xdc_Char)0x3a,  /* [4875] */
    (xdc_Char)0x20,  /* [4876] */
    (xdc_Char)0x25,  /* [4877] */
    (xdc_Char)0x73,  /* [4878] */
    (xdc_Char)0x2c,  /* [4879] */
    (xdc_Char)0x20,  /* [4880] */
    (xdc_Char)0x61,  /* [4881] */
    (xdc_Char)0x64,  /* [4882] */
    (xdc_Char)0x64,  /* [4883] */
    (xdc_Char)0x72,  /* [4884] */
    (xdc_Char)0x65,  /* [4885] */
    (xdc_Char)0x73,  /* [4886] */
    (xdc_Char)0x73,  /* [4887] */
    (xdc_Char)0x3a,  /* [4888] */
    (xdc_Char)0x20,  /* [4889] */
    (xdc_Char)0x25,  /* [4890] */
    (xdc_Char)0x30,  /* [4891] */
    (xdc_Char)0x38,  /* [4892] */
    (xdc_Char)0x78,  /* [4893] */
    (xdc_Char)0x0,  /* [4894] */
    (xdc_Char)0x45,  /* [4895] */
    (xdc_Char)0x5f,  /* [4896] */
    (xdc_Char)0x62,  /* [4897] */
    (xdc_Char)0x75,  /* [4898] */
    (xdc_Char)0x73,  /* [4899] */
    (xdc_Char)0x46,  /* [4900] */
    (xdc_Char)0x61,  /* [4901] */
    (xdc_Char)0x75,  /* [4902] */
    (xdc_Char)0x6c,  /* [4903] */
    (xdc_Char)0x74,  /* [4904] */
    (xdc_Char)0x3a,  /* [4905] */
    (xdc_Char)0x20,  /* [4906] */
    (xdc_Char)0x25,  /* [4907] */
    (xdc_Char)0x73,  /* [4908] */
    (xdc_Char)0x2c,  /* [4909] */
    (xdc_Char)0x20,  /* [4910] */
    (xdc_Char)0x61,  /* [4911] */
    (xdc_Char)0x64,  /* [4912] */
    (xdc_Char)0x64,  /* [4913] */
    (xdc_Char)0x72,  /* [4914] */
    (xdc_Char)0x65,  /* [4915] */
    (xdc_Char)0x73,  /* [4916] */
    (xdc_Char)0x73,  /* [4917] */
    (xdc_Char)0x3a,  /* [4918] */
    (xdc_Char)0x20,  /* [4919] */
    (xdc_Char)0x25,  /* [4920] */
    (xdc_Char)0x30,  /* [4921] */
    (xdc_Char)0x38,  /* [4922] */
    (xdc_Char)0x78,  /* [4923] */
    (xdc_Char)0x0,  /* [4924] */
    (xdc_Char)0x45,  /* [4925] */
    (xdc_Char)0x5f,  /* [4926] */
    (xdc_Char)0x75,  /* [4927] */
    (xdc_Char)0x73,  /* [4928] */
    (xdc_Char)0x61,  /* [4929] */
    (xdc_Char)0x67,  /* [4930] */
    (xdc_Char)0x65,  /* [4931] */
    (xdc_Char)0x46,  /* [4932] */
    (xdc_Char)0x61,  /* [4933] */
    (xdc_Char)0x75,  /* [4934] */
    (xdc_Char)0x6c,  /* [4935] */
    (xdc_Char)0x74,  /* [4936] */
    (xdc_Char)0x3a,  /* [4937] */
    (xdc_Char)0x20,  /* [4938] */
    (xdc_Char)0x25,  /* [4939] */
    (xdc_Char)0x73,  /* [4940] */
    (xdc_Char)0x0,  /* [4941] */
    (xdc_Char)0x45,  /* [4942] */
    (xdc_Char)0x5f,  /* [4943] */
    (xdc_Char)0x73,  /* [4944] */
    (xdc_Char)0x76,  /* [4945] */
    (xdc_Char)0x43,  /* [4946] */
    (xdc_Char)0x61,  /* [4947] */
    (xdc_Char)0x6c,  /* [4948] */
    (xdc_Char)0x6c,  /* [4949] */
    (xdc_Char)0x3a,  /* [4950] */
    (xdc_Char)0x20,  /* [4951] */
    (xdc_Char)0x73,  /* [4952] */
    (xdc_Char)0x76,  /* [4953] */
    (xdc_Char)0x4e,  /* [4954] */
    (xdc_Char)0x75,  /* [4955] */
    (xdc_Char)0x6d,  /* [4956] */
    (xdc_Char)0x20,  /* [4957] */
    (xdc_Char)0x3d,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x25,  /* [4960] */
    (xdc_Char)0x64,  /* [4961] */
    (xdc_Char)0x0,  /* [4962] */
    (xdc_Char)0x45,  /* [4963] */
    (xdc_Char)0x5f,  /* [4964] */
    (xdc_Char)0x64,  /* [4965] */
    (xdc_Char)0x65,  /* [4966] */
    (xdc_Char)0x62,  /* [4967] */
    (xdc_Char)0x75,  /* [4968] */
    (xdc_Char)0x67,  /* [4969] */
    (xdc_Char)0x4d,  /* [4970] */
    (xdc_Char)0x6f,  /* [4971] */
    (xdc_Char)0x6e,  /* [4972] */
    (xdc_Char)0x3a,  /* [4973] */
    (xdc_Char)0x20,  /* [4974] */
    (xdc_Char)0x25,  /* [4975] */
    (xdc_Char)0x73,  /* [4976] */
    (xdc_Char)0x0,  /* [4977] */
    (xdc_Char)0x45,  /* [4978] */
    (xdc_Char)0x5f,  /* [4979] */
    (xdc_Char)0x72,  /* [4980] */
    (xdc_Char)0x65,  /* [4981] */
    (xdc_Char)0x73,  /* [4982] */
    (xdc_Char)0x65,  /* [4983] */
    (xdc_Char)0x72,  /* [4984] */
    (xdc_Char)0x76,  /* [4985] */
    (xdc_Char)0x65,  /* [4986] */
    (xdc_Char)0x64,  /* [4987] */
    (xdc_Char)0x3a,  /* [4988] */
    (xdc_Char)0x20,  /* [4989] */
    (xdc_Char)0x25,  /* [4990] */
    (xdc_Char)0x73,  /* [4991] */
    (xdc_Char)0x20,  /* [4992] */
    (xdc_Char)0x25,  /* [4993] */
    (xdc_Char)0x64,  /* [4994] */
    (xdc_Char)0x0,  /* [4995] */
    (xdc_Char)0x45,  /* [4996] */
    (xdc_Char)0x5f,  /* [4997] */
    (xdc_Char)0x69,  /* [4998] */
    (xdc_Char)0x6e,  /* [4999] */
    (xdc_Char)0x76,  /* [5000] */
    (xdc_Char)0x61,  /* [5001] */
    (xdc_Char)0x6c,  /* [5002] */
    (xdc_Char)0x69,  /* [5003] */
    (xdc_Char)0x64,  /* [5004] */
    (xdc_Char)0x54,  /* [5005] */
    (xdc_Char)0x69,  /* [5006] */
    (xdc_Char)0x6d,  /* [5007] */
    (xdc_Char)0x65,  /* [5008] */
    (xdc_Char)0x72,  /* [5009] */
    (xdc_Char)0x3a,  /* [5010] */
    (xdc_Char)0x20,  /* [5011] */
    (xdc_Char)0x49,  /* [5012] */
    (xdc_Char)0x6e,  /* [5013] */
    (xdc_Char)0x76,  /* [5014] */
    (xdc_Char)0x61,  /* [5015] */
    (xdc_Char)0x6c,  /* [5016] */
    (xdc_Char)0x69,  /* [5017] */
    (xdc_Char)0x64,  /* [5018] */
    (xdc_Char)0x20,  /* [5019] */
    (xdc_Char)0x54,  /* [5020] */
    (xdc_Char)0x69,  /* [5021] */
    (xdc_Char)0x6d,  /* [5022] */
    (xdc_Char)0x65,  /* [5023] */
    (xdc_Char)0x72,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x49,  /* [5026] */
    (xdc_Char)0x64,  /* [5027] */
    (xdc_Char)0x20,  /* [5028] */
    (xdc_Char)0x25,  /* [5029] */
    (xdc_Char)0x64,  /* [5030] */
    (xdc_Char)0x0,  /* [5031] */
    (xdc_Char)0x45,  /* [5032] */
    (xdc_Char)0x5f,  /* [5033] */
    (xdc_Char)0x6e,  /* [5034] */
    (xdc_Char)0x6f,  /* [5035] */
    (xdc_Char)0x74,  /* [5036] */
    (xdc_Char)0x41,  /* [5037] */
    (xdc_Char)0x76,  /* [5038] */
    (xdc_Char)0x61,  /* [5039] */
    (xdc_Char)0x69,  /* [5040] */
    (xdc_Char)0x6c,  /* [5041] */
    (xdc_Char)0x61,  /* [5042] */
    (xdc_Char)0x62,  /* [5043] */
    (xdc_Char)0x6c,  /* [5044] */
    (xdc_Char)0x65,  /* [5045] */
    (xdc_Char)0x3a,  /* [5046] */
    (xdc_Char)0x20,  /* [5047] */
    (xdc_Char)0x54,  /* [5048] */
    (xdc_Char)0x69,  /* [5049] */
    (xdc_Char)0x6d,  /* [5050] */
    (xdc_Char)0x65,  /* [5051] */
    (xdc_Char)0x72,  /* [5052] */
    (xdc_Char)0x20,  /* [5053] */
    (xdc_Char)0x6e,  /* [5054] */
    (xdc_Char)0x6f,  /* [5055] */
    (xdc_Char)0x74,  /* [5056] */
    (xdc_Char)0x20,  /* [5057] */
    (xdc_Char)0x61,  /* [5058] */
    (xdc_Char)0x76,  /* [5059] */
    (xdc_Char)0x61,  /* [5060] */
    (xdc_Char)0x69,  /* [5061] */
    (xdc_Char)0x6c,  /* [5062] */
    (xdc_Char)0x61,  /* [5063] */
    (xdc_Char)0x62,  /* [5064] */
    (xdc_Char)0x6c,  /* [5065] */
    (xdc_Char)0x65,  /* [5066] */
    (xdc_Char)0x20,  /* [5067] */
    (xdc_Char)0x25,  /* [5068] */
    (xdc_Char)0x64,  /* [5069] */
    (xdc_Char)0x0,  /* [5070] */
    (xdc_Char)0x45,  /* [5071] */
    (xdc_Char)0x5f,  /* [5072] */
    (xdc_Char)0x63,  /* [5073] */
    (xdc_Char)0x61,  /* [5074] */
    (xdc_Char)0x6e,  /* [5075] */
    (xdc_Char)0x6e,  /* [5076] */
    (xdc_Char)0x6f,  /* [5077] */
    (xdc_Char)0x74,  /* [5078] */
    (xdc_Char)0x53,  /* [5079] */
    (xdc_Char)0x75,  /* [5080] */
    (xdc_Char)0x70,  /* [5081] */
    (xdc_Char)0x70,  /* [5082] */
    (xdc_Char)0x6f,  /* [5083] */
    (xdc_Char)0x72,  /* [5084] */
    (xdc_Char)0x74,  /* [5085] */
    (xdc_Char)0x3a,  /* [5086] */
    (xdc_Char)0x20,  /* [5087] */
    (xdc_Char)0x54,  /* [5088] */
    (xdc_Char)0x69,  /* [5089] */
    (xdc_Char)0x6d,  /* [5090] */
    (xdc_Char)0x65,  /* [5091] */
    (xdc_Char)0x72,  /* [5092] */
    (xdc_Char)0x20,  /* [5093] */
    (xdc_Char)0x63,  /* [5094] */
    (xdc_Char)0x61,  /* [5095] */
    (xdc_Char)0x6e,  /* [5096] */
    (xdc_Char)0x6e,  /* [5097] */
    (xdc_Char)0x6f,  /* [5098] */
    (xdc_Char)0x74,  /* [5099] */
    (xdc_Char)0x20,  /* [5100] */
    (xdc_Char)0x73,  /* [5101] */
    (xdc_Char)0x75,  /* [5102] */
    (xdc_Char)0x70,  /* [5103] */
    (xdc_Char)0x70,  /* [5104] */
    (xdc_Char)0x6f,  /* [5105] */
    (xdc_Char)0x72,  /* [5106] */
    (xdc_Char)0x74,  /* [5107] */
    (xdc_Char)0x20,  /* [5108] */
    (xdc_Char)0x72,  /* [5109] */
    (xdc_Char)0x65,  /* [5110] */
    (xdc_Char)0x71,  /* [5111] */
    (xdc_Char)0x75,  /* [5112] */
    (xdc_Char)0x65,  /* [5113] */
    (xdc_Char)0x73,  /* [5114] */
    (xdc_Char)0x74,  /* [5115] */
    (xdc_Char)0x65,  /* [5116] */
    (xdc_Char)0x64,  /* [5117] */
    (xdc_Char)0x20,  /* [5118] */
    (xdc_Char)0x70,  /* [5119] */
    (xdc_Char)0x65,  /* [5120] */
    (xdc_Char)0x72,  /* [5121] */
    (xdc_Char)0x69,  /* [5122] */
    (xdc_Char)0x6f,  /* [5123] */
    (xdc_Char)0x64,  /* [5124] */
    (xdc_Char)0x20,  /* [5125] */
    (xdc_Char)0x25,  /* [5126] */
    (xdc_Char)0x64,  /* [5127] */
    (xdc_Char)0x0,  /* [5128] */
    (xdc_Char)0x45,  /* [5129] */
    (xdc_Char)0x5f,  /* [5130] */
    (xdc_Char)0x70,  /* [5131] */
    (xdc_Char)0x72,  /* [5132] */
    (xdc_Char)0x69,  /* [5133] */
    (xdc_Char)0x6f,  /* [5134] */
    (xdc_Char)0x72,  /* [5135] */
    (xdc_Char)0x69,  /* [5136] */
    (xdc_Char)0x74,  /* [5137] */
    (xdc_Char)0x79,  /* [5138] */
    (xdc_Char)0x3a,  /* [5139] */
    (xdc_Char)0x20,  /* [5140] */
    (xdc_Char)0x54,  /* [5141] */
    (xdc_Char)0x68,  /* [5142] */
    (xdc_Char)0x72,  /* [5143] */
    (xdc_Char)0x65,  /* [5144] */
    (xdc_Char)0x61,  /* [5145] */
    (xdc_Char)0x64,  /* [5146] */
    (xdc_Char)0x20,  /* [5147] */
    (xdc_Char)0x70,  /* [5148] */
    (xdc_Char)0x72,  /* [5149] */
    (xdc_Char)0x69,  /* [5150] */
    (xdc_Char)0x6f,  /* [5151] */
    (xdc_Char)0x72,  /* [5152] */
    (xdc_Char)0x69,  /* [5153] */
    (xdc_Char)0x74,  /* [5154] */
    (xdc_Char)0x79,  /* [5155] */
    (xdc_Char)0x20,  /* [5156] */
    (xdc_Char)0x69,  /* [5157] */
    (xdc_Char)0x73,  /* [5158] */
    (xdc_Char)0x20,  /* [5159] */
    (xdc_Char)0x69,  /* [5160] */
    (xdc_Char)0x6e,  /* [5161] */
    (xdc_Char)0x76,  /* [5162] */
    (xdc_Char)0x61,  /* [5163] */
    (xdc_Char)0x6c,  /* [5164] */
    (xdc_Char)0x69,  /* [5165] */
    (xdc_Char)0x64,  /* [5166] */
    (xdc_Char)0x20,  /* [5167] */
    (xdc_Char)0x25,  /* [5168] */
    (xdc_Char)0x64,  /* [5169] */
    (xdc_Char)0x0,  /* [5170] */
    (xdc_Char)0x72,  /* [5171] */
    (xdc_Char)0x65,  /* [5172] */
    (xdc_Char)0x71,  /* [5173] */
    (xdc_Char)0x75,  /* [5174] */
    (xdc_Char)0x65,  /* [5175] */
    (xdc_Char)0x73,  /* [5176] */
    (xdc_Char)0x74,  /* [5177] */
    (xdc_Char)0x65,  /* [5178] */
    (xdc_Char)0x64,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x73,  /* [5181] */
    (xdc_Char)0x69,  /* [5182] */
    (xdc_Char)0x7a,  /* [5183] */
    (xdc_Char)0x65,  /* [5184] */
    (xdc_Char)0x20,  /* [5185] */
    (xdc_Char)0x69,  /* [5186] */
    (xdc_Char)0x73,  /* [5187] */
    (xdc_Char)0x20,  /* [5188] */
    (xdc_Char)0x74,  /* [5189] */
    (xdc_Char)0x6f,  /* [5190] */
    (xdc_Char)0x6f,  /* [5191] */
    (xdc_Char)0x20,  /* [5192] */
    (xdc_Char)0x62,  /* [5193] */
    (xdc_Char)0x69,  /* [5194] */
    (xdc_Char)0x67,  /* [5195] */
    (xdc_Char)0x3a,  /* [5196] */
    (xdc_Char)0x20,  /* [5197] */
    (xdc_Char)0x68,  /* [5198] */
    (xdc_Char)0x61,  /* [5199] */
    (xdc_Char)0x6e,  /* [5200] */
    (xdc_Char)0x64,  /* [5201] */
    (xdc_Char)0x6c,  /* [5202] */
    (xdc_Char)0x65,  /* [5203] */
    (xdc_Char)0x3d,  /* [5204] */
    (xdc_Char)0x30,  /* [5205] */
    (xdc_Char)0x78,  /* [5206] */
    (xdc_Char)0x25,  /* [5207] */
    (xdc_Char)0x78,  /* [5208] */
    (xdc_Char)0x2c,  /* [5209] */
    (xdc_Char)0x20,  /* [5210] */
    (xdc_Char)0x73,  /* [5211] */
    (xdc_Char)0x69,  /* [5212] */
    (xdc_Char)0x7a,  /* [5213] */
    (xdc_Char)0x65,  /* [5214] */
    (xdc_Char)0x3d,  /* [5215] */
    (xdc_Char)0x25,  /* [5216] */
    (xdc_Char)0x75,  /* [5217] */
    (xdc_Char)0x0,  /* [5218] */
    (xdc_Char)0x6f,  /* [5219] */
    (xdc_Char)0x75,  /* [5220] */
    (xdc_Char)0x74,  /* [5221] */
    (xdc_Char)0x20,  /* [5222] */
    (xdc_Char)0x6f,  /* [5223] */
    (xdc_Char)0x66,  /* [5224] */
    (xdc_Char)0x20,  /* [5225] */
    (xdc_Char)0x6d,  /* [5226] */
    (xdc_Char)0x65,  /* [5227] */
    (xdc_Char)0x6d,  /* [5228] */
    (xdc_Char)0x6f,  /* [5229] */
    (xdc_Char)0x72,  /* [5230] */
    (xdc_Char)0x79,  /* [5231] */
    (xdc_Char)0x3a,  /* [5232] */
    (xdc_Char)0x20,  /* [5233] */
    (xdc_Char)0x68,  /* [5234] */
    (xdc_Char)0x61,  /* [5235] */
    (xdc_Char)0x6e,  /* [5236] */
    (xdc_Char)0x64,  /* [5237] */
    (xdc_Char)0x6c,  /* [5238] */
    (xdc_Char)0x65,  /* [5239] */
    (xdc_Char)0x3d,  /* [5240] */
    (xdc_Char)0x30,  /* [5241] */
    (xdc_Char)0x78,  /* [5242] */
    (xdc_Char)0x25,  /* [5243] */
    (xdc_Char)0x78,  /* [5244] */
    (xdc_Char)0x2c,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x73,  /* [5247] */
    (xdc_Char)0x69,  /* [5248] */
    (xdc_Char)0x7a,  /* [5249] */
    (xdc_Char)0x65,  /* [5250] */
    (xdc_Char)0x3d,  /* [5251] */
    (xdc_Char)0x25,  /* [5252] */
    (xdc_Char)0x75,  /* [5253] */
    (xdc_Char)0x0,  /* [5254] */
    (xdc_Char)0x45,  /* [5255] */
    (xdc_Char)0x5f,  /* [5256] */
    (xdc_Char)0x6e,  /* [5257] */
    (xdc_Char)0x6f,  /* [5258] */
    (xdc_Char)0x61,  /* [5259] */
    (xdc_Char)0x6c,  /* [5260] */
    (xdc_Char)0x74,  /* [5261] */
    (xdc_Char)0x63,  /* [5262] */
    (xdc_Char)0x6c,  /* [5263] */
    (xdc_Char)0x6b,  /* [5264] */
    (xdc_Char)0x3a,  /* [5265] */
    (xdc_Char)0x20,  /* [5266] */
    (xdc_Char)0x54,  /* [5267] */
    (xdc_Char)0x69,  /* [5268] */
    (xdc_Char)0x6d,  /* [5269] */
    (xdc_Char)0x65,  /* [5270] */
    (xdc_Char)0x72,  /* [5271] */
    (xdc_Char)0x20,  /* [5272] */
    (xdc_Char)0x64,  /* [5273] */
    (xdc_Char)0x6f,  /* [5274] */
    (xdc_Char)0x65,  /* [5275] */
    (xdc_Char)0x73,  /* [5276] */
    (xdc_Char)0x20,  /* [5277] */
    (xdc_Char)0x6e,  /* [5278] */
    (xdc_Char)0x6f,  /* [5279] */
    (xdc_Char)0x74,  /* [5280] */
    (xdc_Char)0x20,  /* [5281] */
    (xdc_Char)0x73,  /* [5282] */
    (xdc_Char)0x75,  /* [5283] */
    (xdc_Char)0x70,  /* [5284] */
    (xdc_Char)0x70,  /* [5285] */
    (xdc_Char)0x6f,  /* [5286] */
    (xdc_Char)0x72,  /* [5287] */
    (xdc_Char)0x74,  /* [5288] */
    (xdc_Char)0x20,  /* [5289] */
    (xdc_Char)0x61,  /* [5290] */
    (xdc_Char)0x6c,  /* [5291] */
    (xdc_Char)0x74,  /* [5292] */
    (xdc_Char)0x63,  /* [5293] */
    (xdc_Char)0x6c,  /* [5294] */
    (xdc_Char)0x6b,  /* [5295] */
    (xdc_Char)0x0,  /* [5296] */
    (xdc_Char)0x3c,  /* [5297] */
    (xdc_Char)0x2d,  /* [5298] */
    (xdc_Char)0x2d,  /* [5299] */
    (xdc_Char)0x20,  /* [5300] */
    (xdc_Char)0x63,  /* [5301] */
    (xdc_Char)0x6f,  /* [5302] */
    (xdc_Char)0x6e,  /* [5303] */
    (xdc_Char)0x73,  /* [5304] */
    (xdc_Char)0x74,  /* [5305] */
    (xdc_Char)0x72,  /* [5306] */
    (xdc_Char)0x75,  /* [5307] */
    (xdc_Char)0x63,  /* [5308] */
    (xdc_Char)0x74,  /* [5309] */
    (xdc_Char)0x3a,  /* [5310] */
    (xdc_Char)0x20,  /* [5311] */
    (xdc_Char)0x25,  /* [5312] */
    (xdc_Char)0x70,  /* [5313] */
    (xdc_Char)0x28,  /* [5314] */
    (xdc_Char)0x27,  /* [5315] */
    (xdc_Char)0x25,  /* [5316] */
    (xdc_Char)0x73,  /* [5317] */
    (xdc_Char)0x27,  /* [5318] */
    (xdc_Char)0x29,  /* [5319] */
    (xdc_Char)0x0,  /* [5320] */
    (xdc_Char)0x3c,  /* [5321] */
    (xdc_Char)0x2d,  /* [5322] */
    (xdc_Char)0x2d,  /* [5323] */
    (xdc_Char)0x20,  /* [5324] */
    (xdc_Char)0x63,  /* [5325] */
    (xdc_Char)0x72,  /* [5326] */
    (xdc_Char)0x65,  /* [5327] */
    (xdc_Char)0x61,  /* [5328] */
    (xdc_Char)0x74,  /* [5329] */
    (xdc_Char)0x65,  /* [5330] */
    (xdc_Char)0x3a,  /* [5331] */
    (xdc_Char)0x20,  /* [5332] */
    (xdc_Char)0x25,  /* [5333] */
    (xdc_Char)0x70,  /* [5334] */
    (xdc_Char)0x28,  /* [5335] */
    (xdc_Char)0x27,  /* [5336] */
    (xdc_Char)0x25,  /* [5337] */
    (xdc_Char)0x73,  /* [5338] */
    (xdc_Char)0x27,  /* [5339] */
    (xdc_Char)0x29,  /* [5340] */
    (xdc_Char)0x0,  /* [5341] */
    (xdc_Char)0x2d,  /* [5342] */
    (xdc_Char)0x2d,  /* [5343] */
    (xdc_Char)0x3e,  /* [5344] */
    (xdc_Char)0x20,  /* [5345] */
    (xdc_Char)0x64,  /* [5346] */
    (xdc_Char)0x65,  /* [5347] */
    (xdc_Char)0x73,  /* [5348] */
    (xdc_Char)0x74,  /* [5349] */
    (xdc_Char)0x72,  /* [5350] */
    (xdc_Char)0x75,  /* [5351] */
    (xdc_Char)0x63,  /* [5352] */
    (xdc_Char)0x74,  /* [5353] */
    (xdc_Char)0x3a,  /* [5354] */
    (xdc_Char)0x20,  /* [5355] */
    (xdc_Char)0x28,  /* [5356] */
    (xdc_Char)0x25,  /* [5357] */
    (xdc_Char)0x70,  /* [5358] */
    (xdc_Char)0x29,  /* [5359] */
    (xdc_Char)0x0,  /* [5360] */
    (xdc_Char)0x2d,  /* [5361] */
    (xdc_Char)0x2d,  /* [5362] */
    (xdc_Char)0x3e,  /* [5363] */
    (xdc_Char)0x20,  /* [5364] */
    (xdc_Char)0x64,  /* [5365] */
    (xdc_Char)0x65,  /* [5366] */
    (xdc_Char)0x6c,  /* [5367] */
    (xdc_Char)0x65,  /* [5368] */
    (xdc_Char)0x74,  /* [5369] */
    (xdc_Char)0x65,  /* [5370] */
    (xdc_Char)0x3a,  /* [5371] */
    (xdc_Char)0x20,  /* [5372] */
    (xdc_Char)0x28,  /* [5373] */
    (xdc_Char)0x25,  /* [5374] */
    (xdc_Char)0x70,  /* [5375] */
    (xdc_Char)0x29,  /* [5376] */
    (xdc_Char)0x0,  /* [5377] */
    (xdc_Char)0x45,  /* [5378] */
    (xdc_Char)0x52,  /* [5379] */
    (xdc_Char)0x52,  /* [5380] */
    (xdc_Char)0x4f,  /* [5381] */
    (xdc_Char)0x52,  /* [5382] */
    (xdc_Char)0x3a,  /* [5383] */
    (xdc_Char)0x20,  /* [5384] */
    (xdc_Char)0x25,  /* [5385] */
    (xdc_Char)0x24,  /* [5386] */
    (xdc_Char)0x46,  /* [5387] */
    (xdc_Char)0x25,  /* [5388] */
    (xdc_Char)0x24,  /* [5389] */
    (xdc_Char)0x53,  /* [5390] */
    (xdc_Char)0x0,  /* [5391] */
    (xdc_Char)0x57,  /* [5392] */
    (xdc_Char)0x41,  /* [5393] */
    (xdc_Char)0x52,  /* [5394] */
    (xdc_Char)0x4e,  /* [5395] */
    (xdc_Char)0x49,  /* [5396] */
    (xdc_Char)0x4e,  /* [5397] */
    (xdc_Char)0x47,  /* [5398] */
    (xdc_Char)0x3a,  /* [5399] */
    (xdc_Char)0x20,  /* [5400] */
    (xdc_Char)0x25,  /* [5401] */
    (xdc_Char)0x24,  /* [5402] */
    (xdc_Char)0x46,  /* [5403] */
    (xdc_Char)0x25,  /* [5404] */
    (xdc_Char)0x24,  /* [5405] */
    (xdc_Char)0x53,  /* [5406] */
    (xdc_Char)0x0,  /* [5407] */
    (xdc_Char)0x25,  /* [5408] */
    (xdc_Char)0x24,  /* [5409] */
    (xdc_Char)0x46,  /* [5410] */
    (xdc_Char)0x25,  /* [5411] */
    (xdc_Char)0x24,  /* [5412] */
    (xdc_Char)0x53,  /* [5413] */
    (xdc_Char)0x0,  /* [5414] */
    (xdc_Char)0x53,  /* [5415] */
    (xdc_Char)0x74,  /* [5416] */
    (xdc_Char)0x61,  /* [5417] */
    (xdc_Char)0x72,  /* [5418] */
    (xdc_Char)0x74,  /* [5419] */
    (xdc_Char)0x3a,  /* [5420] */
    (xdc_Char)0x20,  /* [5421] */
    (xdc_Char)0x25,  /* [5422] */
    (xdc_Char)0x24,  /* [5423] */
    (xdc_Char)0x53,  /* [5424] */
    (xdc_Char)0x0,  /* [5425] */
    (xdc_Char)0x53,  /* [5426] */
    (xdc_Char)0x74,  /* [5427] */
    (xdc_Char)0x6f,  /* [5428] */
    (xdc_Char)0x70,  /* [5429] */
    (xdc_Char)0x3a,  /* [5430] */
    (xdc_Char)0x20,  /* [5431] */
    (xdc_Char)0x25,  /* [5432] */
    (xdc_Char)0x24,  /* [5433] */
    (xdc_Char)0x53,  /* [5434] */
    (xdc_Char)0x0,  /* [5435] */
    (xdc_Char)0x53,  /* [5436] */
    (xdc_Char)0x74,  /* [5437] */
    (xdc_Char)0x61,  /* [5438] */
    (xdc_Char)0x72,  /* [5439] */
    (xdc_Char)0x74,  /* [5440] */
    (xdc_Char)0x49,  /* [5441] */
    (xdc_Char)0x6e,  /* [5442] */
    (xdc_Char)0x73,  /* [5443] */
    (xdc_Char)0x74,  /* [5444] */
    (xdc_Char)0x61,  /* [5445] */
    (xdc_Char)0x6e,  /* [5446] */
    (xdc_Char)0x63,  /* [5447] */
    (xdc_Char)0x65,  /* [5448] */
    (xdc_Char)0x3a,  /* [5449] */
    (xdc_Char)0x20,  /* [5450] */
    (xdc_Char)0x25,  /* [5451] */
    (xdc_Char)0x24,  /* [5452] */
    (xdc_Char)0x53,  /* [5453] */
    (xdc_Char)0x0,  /* [5454] */
    (xdc_Char)0x53,  /* [5455] */
    (xdc_Char)0x74,  /* [5456] */
    (xdc_Char)0x6f,  /* [5457] */
    (xdc_Char)0x70,  /* [5458] */
    (xdc_Char)0x49,  /* [5459] */
    (xdc_Char)0x6e,  /* [5460] */
    (xdc_Char)0x73,  /* [5461] */
    (xdc_Char)0x74,  /* [5462] */
    (xdc_Char)0x61,  /* [5463] */
    (xdc_Char)0x6e,  /* [5464] */
    (xdc_Char)0x63,  /* [5465] */
    (xdc_Char)0x65,  /* [5466] */
    (xdc_Char)0x3a,  /* [5467] */
    (xdc_Char)0x20,  /* [5468] */
    (xdc_Char)0x25,  /* [5469] */
    (xdc_Char)0x24,  /* [5470] */
    (xdc_Char)0x53,  /* [5471] */
    (xdc_Char)0x0,  /* [5472] */
    (xdc_Char)0x4c,  /* [5473] */
    (xdc_Char)0x57,  /* [5474] */
    (xdc_Char)0x5f,  /* [5475] */
    (xdc_Char)0x64,  /* [5476] */
    (xdc_Char)0x65,  /* [5477] */
    (xdc_Char)0x6c,  /* [5478] */
    (xdc_Char)0x61,  /* [5479] */
    (xdc_Char)0x79,  /* [5480] */
    (xdc_Char)0x65,  /* [5481] */
    (xdc_Char)0x64,  /* [5482] */
    (xdc_Char)0x3a,  /* [5483] */
    (xdc_Char)0x20,  /* [5484] */
    (xdc_Char)0x64,  /* [5485] */
    (xdc_Char)0x65,  /* [5486] */
    (xdc_Char)0x6c,  /* [5487] */
    (xdc_Char)0x61,  /* [5488] */
    (xdc_Char)0x79,  /* [5489] */
    (xdc_Char)0x3a,  /* [5490] */
    (xdc_Char)0x20,  /* [5491] */
    (xdc_Char)0x25,  /* [5492] */
    (xdc_Char)0x64,  /* [5493] */
    (xdc_Char)0x0,  /* [5494] */
    (xdc_Char)0x4c,  /* [5495] */
    (xdc_Char)0x4d,  /* [5496] */
    (xdc_Char)0x5f,  /* [5497] */
    (xdc_Char)0x74,  /* [5498] */
    (xdc_Char)0x69,  /* [5499] */
    (xdc_Char)0x63,  /* [5500] */
    (xdc_Char)0x6b,  /* [5501] */
    (xdc_Char)0x3a,  /* [5502] */
    (xdc_Char)0x20,  /* [5503] */
    (xdc_Char)0x74,  /* [5504] */
    (xdc_Char)0x69,  /* [5505] */
    (xdc_Char)0x63,  /* [5506] */
    (xdc_Char)0x6b,  /* [5507] */
    (xdc_Char)0x3a,  /* [5508] */
    (xdc_Char)0x20,  /* [5509] */
    (xdc_Char)0x25,  /* [5510] */
    (xdc_Char)0x64,  /* [5511] */
    (xdc_Char)0x0,  /* [5512] */
    (xdc_Char)0x4c,  /* [5513] */
    (xdc_Char)0x4d,  /* [5514] */
    (xdc_Char)0x5f,  /* [5515] */
    (xdc_Char)0x62,  /* [5516] */
    (xdc_Char)0x65,  /* [5517] */
    (xdc_Char)0x67,  /* [5518] */
    (xdc_Char)0x69,  /* [5519] */
    (xdc_Char)0x6e,  /* [5520] */
    (xdc_Char)0x3a,  /* [5521] */
    (xdc_Char)0x20,  /* [5522] */
    (xdc_Char)0x63,  /* [5523] */
    (xdc_Char)0x6c,  /* [5524] */
    (xdc_Char)0x6b,  /* [5525] */
    (xdc_Char)0x3a,  /* [5526] */
    (xdc_Char)0x20,  /* [5527] */
    (xdc_Char)0x30,  /* [5528] */
    (xdc_Char)0x78,  /* [5529] */
    (xdc_Char)0x25,  /* [5530] */
    (xdc_Char)0x78,  /* [5531] */
    (xdc_Char)0x2c,  /* [5532] */
    (xdc_Char)0x20,  /* [5533] */
    (xdc_Char)0x66,  /* [5534] */
    (xdc_Char)0x75,  /* [5535] */
    (xdc_Char)0x6e,  /* [5536] */
    (xdc_Char)0x63,  /* [5537] */
    (xdc_Char)0x3a,  /* [5538] */
    (xdc_Char)0x20,  /* [5539] */
    (xdc_Char)0x30,  /* [5540] */
    (xdc_Char)0x78,  /* [5541] */
    (xdc_Char)0x25,  /* [5542] */
    (xdc_Char)0x78,  /* [5543] */
    (xdc_Char)0x0,  /* [5544] */
    (xdc_Char)0x4c,  /* [5545] */
    (xdc_Char)0x4d,  /* [5546] */
    (xdc_Char)0x5f,  /* [5547] */
    (xdc_Char)0x70,  /* [5548] */
    (xdc_Char)0x6f,  /* [5549] */
    (xdc_Char)0x73,  /* [5550] */
    (xdc_Char)0x74,  /* [5551] */
    (xdc_Char)0x3a,  /* [5552] */
    (xdc_Char)0x20,  /* [5553] */
    (xdc_Char)0x73,  /* [5554] */
    (xdc_Char)0x65,  /* [5555] */
    (xdc_Char)0x6d,  /* [5556] */
    (xdc_Char)0x3a,  /* [5557] */
    (xdc_Char)0x20,  /* [5558] */
    (xdc_Char)0x30,  /* [5559] */
    (xdc_Char)0x78,  /* [5560] */
    (xdc_Char)0x25,  /* [5561] */
    (xdc_Char)0x78,  /* [5562] */
    (xdc_Char)0x2c,  /* [5563] */
    (xdc_Char)0x20,  /* [5564] */
    (xdc_Char)0x63,  /* [5565] */
    (xdc_Char)0x6f,  /* [5566] */
    (xdc_Char)0x75,  /* [5567] */
    (xdc_Char)0x6e,  /* [5568] */
    (xdc_Char)0x74,  /* [5569] */
    (xdc_Char)0x3a,  /* [5570] */
    (xdc_Char)0x20,  /* [5571] */
    (xdc_Char)0x25,  /* [5572] */
    (xdc_Char)0x64,  /* [5573] */
    (xdc_Char)0x0,  /* [5574] */
    (xdc_Char)0x4c,  /* [5575] */
    (xdc_Char)0x4d,  /* [5576] */
    (xdc_Char)0x5f,  /* [5577] */
    (xdc_Char)0x70,  /* [5578] */
    (xdc_Char)0x65,  /* [5579] */
    (xdc_Char)0x6e,  /* [5580] */
    (xdc_Char)0x64,  /* [5581] */
    (xdc_Char)0x3a,  /* [5582] */
    (xdc_Char)0x20,  /* [5583] */
    (xdc_Char)0x73,  /* [5584] */
    (xdc_Char)0x65,  /* [5585] */
    (xdc_Char)0x6d,  /* [5586] */
    (xdc_Char)0x3a,  /* [5587] */
    (xdc_Char)0x20,  /* [5588] */
    (xdc_Char)0x30,  /* [5589] */
    (xdc_Char)0x78,  /* [5590] */
    (xdc_Char)0x25,  /* [5591] */
    (xdc_Char)0x78,  /* [5592] */
    (xdc_Char)0x2c,  /* [5593] */
    (xdc_Char)0x20,  /* [5594] */
    (xdc_Char)0x63,  /* [5595] */
    (xdc_Char)0x6f,  /* [5596] */
    (xdc_Char)0x75,  /* [5597] */
    (xdc_Char)0x6e,  /* [5598] */
    (xdc_Char)0x74,  /* [5599] */
    (xdc_Char)0x3a,  /* [5600] */
    (xdc_Char)0x20,  /* [5601] */
    (xdc_Char)0x25,  /* [5602] */
    (xdc_Char)0x64,  /* [5603] */
    (xdc_Char)0x2c,  /* [5604] */
    (xdc_Char)0x20,  /* [5605] */
    (xdc_Char)0x74,  /* [5606] */
    (xdc_Char)0x69,  /* [5607] */
    (xdc_Char)0x6d,  /* [5608] */
    (xdc_Char)0x65,  /* [5609] */
    (xdc_Char)0x6f,  /* [5610] */
    (xdc_Char)0x75,  /* [5611] */
    (xdc_Char)0x74,  /* [5612] */
    (xdc_Char)0x3a,  /* [5613] */
    (xdc_Char)0x20,  /* [5614] */
    (xdc_Char)0x25,  /* [5615] */
    (xdc_Char)0x64,  /* [5616] */
    (xdc_Char)0x0,  /* [5617] */
    (xdc_Char)0x4c,  /* [5618] */
    (xdc_Char)0x4d,  /* [5619] */
    (xdc_Char)0x5f,  /* [5620] */
    (xdc_Char)0x62,  /* [5621] */
    (xdc_Char)0x65,  /* [5622] */
    (xdc_Char)0x67,  /* [5623] */
    (xdc_Char)0x69,  /* [5624] */
    (xdc_Char)0x6e,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x73,  /* [5628] */
    (xdc_Char)0x77,  /* [5629] */
    (xdc_Char)0x69,  /* [5630] */
    (xdc_Char)0x3a,  /* [5631] */
    (xdc_Char)0x20,  /* [5632] */
    (xdc_Char)0x30,  /* [5633] */
    (xdc_Char)0x78,  /* [5634] */
    (xdc_Char)0x25,  /* [5635] */
    (xdc_Char)0x78,  /* [5636] */
    (xdc_Char)0x2c,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x66,  /* [5639] */
    (xdc_Char)0x75,  /* [5640] */
    (xdc_Char)0x6e,  /* [5641] */
    (xdc_Char)0x63,  /* [5642] */
    (xdc_Char)0x3a,  /* [5643] */
    (xdc_Char)0x20,  /* [5644] */
    (xdc_Char)0x30,  /* [5645] */
    (xdc_Char)0x78,  /* [5646] */
    (xdc_Char)0x25,  /* [5647] */
    (xdc_Char)0x78,  /* [5648] */
    (xdc_Char)0x2c,  /* [5649] */
    (xdc_Char)0x20,  /* [5650] */
    (xdc_Char)0x70,  /* [5651] */
    (xdc_Char)0x72,  /* [5652] */
    (xdc_Char)0x65,  /* [5653] */
    (xdc_Char)0x54,  /* [5654] */
    (xdc_Char)0x68,  /* [5655] */
    (xdc_Char)0x72,  /* [5656] */
    (xdc_Char)0x65,  /* [5657] */
    (xdc_Char)0x61,  /* [5658] */
    (xdc_Char)0x64,  /* [5659] */
    (xdc_Char)0x3a,  /* [5660] */
    (xdc_Char)0x20,  /* [5661] */
    (xdc_Char)0x25,  /* [5662] */
    (xdc_Char)0x64,  /* [5663] */
    (xdc_Char)0x0,  /* [5664] */
    (xdc_Char)0x4c,  /* [5665] */
    (xdc_Char)0x44,  /* [5666] */
    (xdc_Char)0x5f,  /* [5667] */
    (xdc_Char)0x65,  /* [5668] */
    (xdc_Char)0x6e,  /* [5669] */
    (xdc_Char)0x64,  /* [5670] */
    (xdc_Char)0x3a,  /* [5671] */
    (xdc_Char)0x20,  /* [5672] */
    (xdc_Char)0x73,  /* [5673] */
    (xdc_Char)0x77,  /* [5674] */
    (xdc_Char)0x69,  /* [5675] */
    (xdc_Char)0x3a,  /* [5676] */
    (xdc_Char)0x20,  /* [5677] */
    (xdc_Char)0x30,  /* [5678] */
    (xdc_Char)0x78,  /* [5679] */
    (xdc_Char)0x25,  /* [5680] */
    (xdc_Char)0x78,  /* [5681] */
    (xdc_Char)0x0,  /* [5682] */
    (xdc_Char)0x4c,  /* [5683] */
    (xdc_Char)0x4d,  /* [5684] */
    (xdc_Char)0x5f,  /* [5685] */
    (xdc_Char)0x70,  /* [5686] */
    (xdc_Char)0x6f,  /* [5687] */
    (xdc_Char)0x73,  /* [5688] */
    (xdc_Char)0x74,  /* [5689] */
    (xdc_Char)0x3a,  /* [5690] */
    (xdc_Char)0x20,  /* [5691] */
    (xdc_Char)0x73,  /* [5692] */
    (xdc_Char)0x77,  /* [5693] */
    (xdc_Char)0x69,  /* [5694] */
    (xdc_Char)0x3a,  /* [5695] */
    (xdc_Char)0x20,  /* [5696] */
    (xdc_Char)0x30,  /* [5697] */
    (xdc_Char)0x78,  /* [5698] */
    (xdc_Char)0x25,  /* [5699] */
    (xdc_Char)0x78,  /* [5700] */
    (xdc_Char)0x2c,  /* [5701] */
    (xdc_Char)0x20,  /* [5702] */
    (xdc_Char)0x66,  /* [5703] */
    (xdc_Char)0x75,  /* [5704] */
    (xdc_Char)0x6e,  /* [5705] */
    (xdc_Char)0x63,  /* [5706] */
    (xdc_Char)0x3a,  /* [5707] */
    (xdc_Char)0x20,  /* [5708] */
    (xdc_Char)0x30,  /* [5709] */
    (xdc_Char)0x78,  /* [5710] */
    (xdc_Char)0x25,  /* [5711] */
    (xdc_Char)0x78,  /* [5712] */
    (xdc_Char)0x2c,  /* [5713] */
    (xdc_Char)0x20,  /* [5714] */
    (xdc_Char)0x70,  /* [5715] */
    (xdc_Char)0x72,  /* [5716] */
    (xdc_Char)0x69,  /* [5717] */
    (xdc_Char)0x3a,  /* [5718] */
    (xdc_Char)0x20,  /* [5719] */
    (xdc_Char)0x25,  /* [5720] */
    (xdc_Char)0x64,  /* [5721] */
    (xdc_Char)0x0,  /* [5722] */
    (xdc_Char)0x4c,  /* [5723] */
    (xdc_Char)0x4d,  /* [5724] */
    (xdc_Char)0x5f,  /* [5725] */
    (xdc_Char)0x73,  /* [5726] */
    (xdc_Char)0x77,  /* [5727] */
    (xdc_Char)0x69,  /* [5728] */
    (xdc_Char)0x74,  /* [5729] */
    (xdc_Char)0x63,  /* [5730] */
    (xdc_Char)0x68,  /* [5731] */
    (xdc_Char)0x3a,  /* [5732] */
    (xdc_Char)0x20,  /* [5733] */
    (xdc_Char)0x6f,  /* [5734] */
    (xdc_Char)0x6c,  /* [5735] */
    (xdc_Char)0x64,  /* [5736] */
    (xdc_Char)0x74,  /* [5737] */
    (xdc_Char)0x73,  /* [5738] */
    (xdc_Char)0x6b,  /* [5739] */
    (xdc_Char)0x3a,  /* [5740] */
    (xdc_Char)0x20,  /* [5741] */
    (xdc_Char)0x30,  /* [5742] */
    (xdc_Char)0x78,  /* [5743] */
    (xdc_Char)0x25,  /* [5744] */
    (xdc_Char)0x78,  /* [5745] */
    (xdc_Char)0x2c,  /* [5746] */
    (xdc_Char)0x20,  /* [5747] */
    (xdc_Char)0x6f,  /* [5748] */
    (xdc_Char)0x6c,  /* [5749] */
    (xdc_Char)0x64,  /* [5750] */
    (xdc_Char)0x66,  /* [5751] */
    (xdc_Char)0x75,  /* [5752] */
    (xdc_Char)0x6e,  /* [5753] */
    (xdc_Char)0x63,  /* [5754] */
    (xdc_Char)0x3a,  /* [5755] */
    (xdc_Char)0x20,  /* [5756] */
    (xdc_Char)0x30,  /* [5757] */
    (xdc_Char)0x78,  /* [5758] */
    (xdc_Char)0x25,  /* [5759] */
    (xdc_Char)0x78,  /* [5760] */
    (xdc_Char)0x2c,  /* [5761] */
    (xdc_Char)0x20,  /* [5762] */
    (xdc_Char)0x6e,  /* [5763] */
    (xdc_Char)0x65,  /* [5764] */
    (xdc_Char)0x77,  /* [5765] */
    (xdc_Char)0x74,  /* [5766] */
    (xdc_Char)0x73,  /* [5767] */
    (xdc_Char)0x6b,  /* [5768] */
    (xdc_Char)0x3a,  /* [5769] */
    (xdc_Char)0x20,  /* [5770] */
    (xdc_Char)0x30,  /* [5771] */
    (xdc_Char)0x78,  /* [5772] */
    (xdc_Char)0x25,  /* [5773] */
    (xdc_Char)0x78,  /* [5774] */
    (xdc_Char)0x2c,  /* [5775] */
    (xdc_Char)0x20,  /* [5776] */
    (xdc_Char)0x6e,  /* [5777] */
    (xdc_Char)0x65,  /* [5778] */
    (xdc_Char)0x77,  /* [5779] */
    (xdc_Char)0x66,  /* [5780] */
    (xdc_Char)0x75,  /* [5781] */
    (xdc_Char)0x6e,  /* [5782] */
    (xdc_Char)0x63,  /* [5783] */
    (xdc_Char)0x3a,  /* [5784] */
    (xdc_Char)0x20,  /* [5785] */
    (xdc_Char)0x30,  /* [5786] */
    (xdc_Char)0x78,  /* [5787] */
    (xdc_Char)0x25,  /* [5788] */
    (xdc_Char)0x78,  /* [5789] */
    (xdc_Char)0x0,  /* [5790] */
    (xdc_Char)0x4c,  /* [5791] */
    (xdc_Char)0x4d,  /* [5792] */
    (xdc_Char)0x5f,  /* [5793] */
    (xdc_Char)0x73,  /* [5794] */
    (xdc_Char)0x6c,  /* [5795] */
    (xdc_Char)0x65,  /* [5796] */
    (xdc_Char)0x65,  /* [5797] */
    (xdc_Char)0x70,  /* [5798] */
    (xdc_Char)0x3a,  /* [5799] */
    (xdc_Char)0x20,  /* [5800] */
    (xdc_Char)0x74,  /* [5801] */
    (xdc_Char)0x73,  /* [5802] */
    (xdc_Char)0x6b,  /* [5803] */
    (xdc_Char)0x3a,  /* [5804] */
    (xdc_Char)0x20,  /* [5805] */
    (xdc_Char)0x30,  /* [5806] */
    (xdc_Char)0x78,  /* [5807] */
    (xdc_Char)0x25,  /* [5808] */
    (xdc_Char)0x78,  /* [5809] */
    (xdc_Char)0x2c,  /* [5810] */
    (xdc_Char)0x20,  /* [5811] */
    (xdc_Char)0x66,  /* [5812] */
    (xdc_Char)0x75,  /* [5813] */
    (xdc_Char)0x6e,  /* [5814] */
    (xdc_Char)0x63,  /* [5815] */
    (xdc_Char)0x3a,  /* [5816] */
    (xdc_Char)0x20,  /* [5817] */
    (xdc_Char)0x30,  /* [5818] */
    (xdc_Char)0x78,  /* [5819] */
    (xdc_Char)0x25,  /* [5820] */
    (xdc_Char)0x78,  /* [5821] */
    (xdc_Char)0x2c,  /* [5822] */
    (xdc_Char)0x20,  /* [5823] */
    (xdc_Char)0x74,  /* [5824] */
    (xdc_Char)0x69,  /* [5825] */
    (xdc_Char)0x6d,  /* [5826] */
    (xdc_Char)0x65,  /* [5827] */
    (xdc_Char)0x6f,  /* [5828] */
    (xdc_Char)0x75,  /* [5829] */
    (xdc_Char)0x74,  /* [5830] */
    (xdc_Char)0x3a,  /* [5831] */
    (xdc_Char)0x20,  /* [5832] */
    (xdc_Char)0x25,  /* [5833] */
    (xdc_Char)0x64,  /* [5834] */
    (xdc_Char)0x0,  /* [5835] */
    (xdc_Char)0x4c,  /* [5836] */
    (xdc_Char)0x44,  /* [5837] */
    (xdc_Char)0x5f,  /* [5838] */
    (xdc_Char)0x72,  /* [5839] */
    (xdc_Char)0x65,  /* [5840] */
    (xdc_Char)0x61,  /* [5841] */
    (xdc_Char)0x64,  /* [5842] */
    (xdc_Char)0x79,  /* [5843] */
    (xdc_Char)0x3a,  /* [5844] */
    (xdc_Char)0x20,  /* [5845] */
    (xdc_Char)0x74,  /* [5846] */
    (xdc_Char)0x73,  /* [5847] */
    (xdc_Char)0x6b,  /* [5848] */
    (xdc_Char)0x3a,  /* [5849] */
    (xdc_Char)0x20,  /* [5850] */
    (xdc_Char)0x30,  /* [5851] */
    (xdc_Char)0x78,  /* [5852] */
    (xdc_Char)0x25,  /* [5853] */
    (xdc_Char)0x78,  /* [5854] */
    (xdc_Char)0x2c,  /* [5855] */
    (xdc_Char)0x20,  /* [5856] */
    (xdc_Char)0x66,  /* [5857] */
    (xdc_Char)0x75,  /* [5858] */
    (xdc_Char)0x6e,  /* [5859] */
    (xdc_Char)0x63,  /* [5860] */
    (xdc_Char)0x3a,  /* [5861] */
    (xdc_Char)0x20,  /* [5862] */
    (xdc_Char)0x30,  /* [5863] */
    (xdc_Char)0x78,  /* [5864] */
    (xdc_Char)0x25,  /* [5865] */
    (xdc_Char)0x78,  /* [5866] */
    (xdc_Char)0x2c,  /* [5867] */
    (xdc_Char)0x20,  /* [5868] */
    (xdc_Char)0x70,  /* [5869] */
    (xdc_Char)0x72,  /* [5870] */
    (xdc_Char)0x69,  /* [5871] */
    (xdc_Char)0x3a,  /* [5872] */
    (xdc_Char)0x20,  /* [5873] */
    (xdc_Char)0x25,  /* [5874] */
    (xdc_Char)0x64,  /* [5875] */
    (xdc_Char)0x0,  /* [5876] */
    (xdc_Char)0x4c,  /* [5877] */
    (xdc_Char)0x44,  /* [5878] */
    (xdc_Char)0x5f,  /* [5879] */
    (xdc_Char)0x62,  /* [5880] */
    (xdc_Char)0x6c,  /* [5881] */
    (xdc_Char)0x6f,  /* [5882] */
    (xdc_Char)0x63,  /* [5883] */
    (xdc_Char)0x6b,  /* [5884] */
    (xdc_Char)0x3a,  /* [5885] */
    (xdc_Char)0x20,  /* [5886] */
    (xdc_Char)0x74,  /* [5887] */
    (xdc_Char)0x73,  /* [5888] */
    (xdc_Char)0x6b,  /* [5889] */
    (xdc_Char)0x3a,  /* [5890] */
    (xdc_Char)0x20,  /* [5891] */
    (xdc_Char)0x30,  /* [5892] */
    (xdc_Char)0x78,  /* [5893] */
    (xdc_Char)0x25,  /* [5894] */
    (xdc_Char)0x78,  /* [5895] */
    (xdc_Char)0x2c,  /* [5896] */
    (xdc_Char)0x20,  /* [5897] */
    (xdc_Char)0x66,  /* [5898] */
    (xdc_Char)0x75,  /* [5899] */
    (xdc_Char)0x6e,  /* [5900] */
    (xdc_Char)0x63,  /* [5901] */
    (xdc_Char)0x3a,  /* [5902] */
    (xdc_Char)0x20,  /* [5903] */
    (xdc_Char)0x30,  /* [5904] */
    (xdc_Char)0x78,  /* [5905] */
    (xdc_Char)0x25,  /* [5906] */
    (xdc_Char)0x78,  /* [5907] */
    (xdc_Char)0x0,  /* [5908] */
    (xdc_Char)0x4c,  /* [5909] */
    (xdc_Char)0x4d,  /* [5910] */
    (xdc_Char)0x5f,  /* [5911] */
    (xdc_Char)0x79,  /* [5912] */
    (xdc_Char)0x69,  /* [5913] */
    (xdc_Char)0x65,  /* [5914] */
    (xdc_Char)0x6c,  /* [5915] */
    (xdc_Char)0x64,  /* [5916] */
    (xdc_Char)0x3a,  /* [5917] */
    (xdc_Char)0x20,  /* [5918] */
    (xdc_Char)0x74,  /* [5919] */
    (xdc_Char)0x73,  /* [5920] */
    (xdc_Char)0x6b,  /* [5921] */
    (xdc_Char)0x3a,  /* [5922] */
    (xdc_Char)0x20,  /* [5923] */
    (xdc_Char)0x30,  /* [5924] */
    (xdc_Char)0x78,  /* [5925] */
    (xdc_Char)0x25,  /* [5926] */
    (xdc_Char)0x78,  /* [5927] */
    (xdc_Char)0x2c,  /* [5928] */
    (xdc_Char)0x20,  /* [5929] */
    (xdc_Char)0x66,  /* [5930] */
    (xdc_Char)0x75,  /* [5931] */
    (xdc_Char)0x6e,  /* [5932] */
    (xdc_Char)0x63,  /* [5933] */
    (xdc_Char)0x3a,  /* [5934] */
    (xdc_Char)0x20,  /* [5935] */
    (xdc_Char)0x30,  /* [5936] */
    (xdc_Char)0x78,  /* [5937] */
    (xdc_Char)0x25,  /* [5938] */
    (xdc_Char)0x78,  /* [5939] */
    (xdc_Char)0x2c,  /* [5940] */
    (xdc_Char)0x20,  /* [5941] */
    (xdc_Char)0x63,  /* [5942] */
    (xdc_Char)0x75,  /* [5943] */
    (xdc_Char)0x72,  /* [5944] */
    (xdc_Char)0x72,  /* [5945] */
    (xdc_Char)0x54,  /* [5946] */
    (xdc_Char)0x68,  /* [5947] */
    (xdc_Char)0x72,  /* [5948] */
    (xdc_Char)0x65,  /* [5949] */
    (xdc_Char)0x61,  /* [5950] */
    (xdc_Char)0x64,  /* [5951] */
    (xdc_Char)0x3a,  /* [5952] */
    (xdc_Char)0x20,  /* [5953] */
    (xdc_Char)0x25,  /* [5954] */
    (xdc_Char)0x64,  /* [5955] */
    (xdc_Char)0x0,  /* [5956] */
    (xdc_Char)0x4c,  /* [5957] */
    (xdc_Char)0x4d,  /* [5958] */
    (xdc_Char)0x5f,  /* [5959] */
    (xdc_Char)0x73,  /* [5960] */
    (xdc_Char)0x65,  /* [5961] */
    (xdc_Char)0x74,  /* [5962] */
    (xdc_Char)0x50,  /* [5963] */
    (xdc_Char)0x72,  /* [5964] */
    (xdc_Char)0x69,  /* [5965] */
    (xdc_Char)0x3a,  /* [5966] */
    (xdc_Char)0x20,  /* [5967] */
    (xdc_Char)0x74,  /* [5968] */
    (xdc_Char)0x73,  /* [5969] */
    (xdc_Char)0x6b,  /* [5970] */
    (xdc_Char)0x3a,  /* [5971] */
    (xdc_Char)0x20,  /* [5972] */
    (xdc_Char)0x30,  /* [5973] */
    (xdc_Char)0x78,  /* [5974] */
    (xdc_Char)0x25,  /* [5975] */
    (xdc_Char)0x78,  /* [5976] */
    (xdc_Char)0x2c,  /* [5977] */
    (xdc_Char)0x20,  /* [5978] */
    (xdc_Char)0x66,  /* [5979] */
    (xdc_Char)0x75,  /* [5980] */
    (xdc_Char)0x6e,  /* [5981] */
    (xdc_Char)0x63,  /* [5982] */
    (xdc_Char)0x3a,  /* [5983] */
    (xdc_Char)0x20,  /* [5984] */
    (xdc_Char)0x30,  /* [5985] */
    (xdc_Char)0x78,  /* [5986] */
    (xdc_Char)0x25,  /* [5987] */
    (xdc_Char)0x78,  /* [5988] */
    (xdc_Char)0x2c,  /* [5989] */
    (xdc_Char)0x20,  /* [5990] */
    (xdc_Char)0x6f,  /* [5991] */
    (xdc_Char)0x6c,  /* [5992] */
    (xdc_Char)0x64,  /* [5993] */
    (xdc_Char)0x50,  /* [5994] */
    (xdc_Char)0x72,  /* [5995] */
    (xdc_Char)0x69,  /* [5996] */
    (xdc_Char)0x3a,  /* [5997] */
    (xdc_Char)0x20,  /* [5998] */
    (xdc_Char)0x25,  /* [5999] */
    (xdc_Char)0x64,  /* [6000] */
    (xdc_Char)0x2c,  /* [6001] */
    (xdc_Char)0x20,  /* [6002] */
    (xdc_Char)0x6e,  /* [6003] */
    (xdc_Char)0x65,  /* [6004] */
    (xdc_Char)0x77,  /* [6005] */
    (xdc_Char)0x50,  /* [6006] */
    (xdc_Char)0x72,  /* [6007] */
    (xdc_Char)0x69,  /* [6008] */
    (xdc_Char)0x20,  /* [6009] */
    (xdc_Char)0x25,  /* [6010] */
    (xdc_Char)0x64,  /* [6011] */
    (xdc_Char)0x0,  /* [6012] */
    (xdc_Char)0x4c,  /* [6013] */
    (xdc_Char)0x44,  /* [6014] */
    (xdc_Char)0x5f,  /* [6015] */
    (xdc_Char)0x65,  /* [6016] */
    (xdc_Char)0x78,  /* [6017] */
    (xdc_Char)0x69,  /* [6018] */
    (xdc_Char)0x74,  /* [6019] */
    (xdc_Char)0x3a,  /* [6020] */
    (xdc_Char)0x20,  /* [6021] */
    (xdc_Char)0x74,  /* [6022] */
    (xdc_Char)0x73,  /* [6023] */
    (xdc_Char)0x6b,  /* [6024] */
    (xdc_Char)0x3a,  /* [6025] */
    (xdc_Char)0x20,  /* [6026] */
    (xdc_Char)0x30,  /* [6027] */
    (xdc_Char)0x78,  /* [6028] */
    (xdc_Char)0x25,  /* [6029] */
    (xdc_Char)0x78,  /* [6030] */
    (xdc_Char)0x2c,  /* [6031] */
    (xdc_Char)0x20,  /* [6032] */
    (xdc_Char)0x66,  /* [6033] */
    (xdc_Char)0x75,  /* [6034] */
    (xdc_Char)0x6e,  /* [6035] */
    (xdc_Char)0x63,  /* [6036] */
    (xdc_Char)0x3a,  /* [6037] */
    (xdc_Char)0x20,  /* [6038] */
    (xdc_Char)0x30,  /* [6039] */
    (xdc_Char)0x78,  /* [6040] */
    (xdc_Char)0x25,  /* [6041] */
    (xdc_Char)0x78,  /* [6042] */
    (xdc_Char)0x0,  /* [6043] */
    (xdc_Char)0x4c,  /* [6044] */
    (xdc_Char)0x4d,  /* [6045] */
    (xdc_Char)0x5f,  /* [6046] */
    (xdc_Char)0x73,  /* [6047] */
    (xdc_Char)0x65,  /* [6048] */
    (xdc_Char)0x74,  /* [6049] */
    (xdc_Char)0x41,  /* [6050] */
    (xdc_Char)0x66,  /* [6051] */
    (xdc_Char)0x66,  /* [6052] */
    (xdc_Char)0x69,  /* [6053] */
    (xdc_Char)0x6e,  /* [6054] */
    (xdc_Char)0x69,  /* [6055] */
    (xdc_Char)0x74,  /* [6056] */
    (xdc_Char)0x79,  /* [6057] */
    (xdc_Char)0x3a,  /* [6058] */
    (xdc_Char)0x20,  /* [6059] */
    (xdc_Char)0x74,  /* [6060] */
    (xdc_Char)0x73,  /* [6061] */
    (xdc_Char)0x6b,  /* [6062] */
    (xdc_Char)0x3a,  /* [6063] */
    (xdc_Char)0x20,  /* [6064] */
    (xdc_Char)0x30,  /* [6065] */
    (xdc_Char)0x78,  /* [6066] */
    (xdc_Char)0x25,  /* [6067] */
    (xdc_Char)0x78,  /* [6068] */
    (xdc_Char)0x2c,  /* [6069] */
    (xdc_Char)0x20,  /* [6070] */
    (xdc_Char)0x66,  /* [6071] */
    (xdc_Char)0x75,  /* [6072] */
    (xdc_Char)0x6e,  /* [6073] */
    (xdc_Char)0x63,  /* [6074] */
    (xdc_Char)0x3a,  /* [6075] */
    (xdc_Char)0x20,  /* [6076] */
    (xdc_Char)0x30,  /* [6077] */
    (xdc_Char)0x78,  /* [6078] */
    (xdc_Char)0x25,  /* [6079] */
    (xdc_Char)0x78,  /* [6080] */
    (xdc_Char)0x2c,  /* [6081] */
    (xdc_Char)0x20,  /* [6082] */
    (xdc_Char)0x6f,  /* [6083] */
    (xdc_Char)0x6c,  /* [6084] */
    (xdc_Char)0x64,  /* [6085] */
    (xdc_Char)0x43,  /* [6086] */
    (xdc_Char)0x6f,  /* [6087] */
    (xdc_Char)0x72,  /* [6088] */
    (xdc_Char)0x65,  /* [6089] */
    (xdc_Char)0x3a,  /* [6090] */
    (xdc_Char)0x20,  /* [6091] */
    (xdc_Char)0x25,  /* [6092] */
    (xdc_Char)0x64,  /* [6093] */
    (xdc_Char)0x2c,  /* [6094] */
    (xdc_Char)0x20,  /* [6095] */
    (xdc_Char)0x6f,  /* [6096] */
    (xdc_Char)0x6c,  /* [6097] */
    (xdc_Char)0x64,  /* [6098] */
    (xdc_Char)0x41,  /* [6099] */
    (xdc_Char)0x66,  /* [6100] */
    (xdc_Char)0x66,  /* [6101] */
    (xdc_Char)0x69,  /* [6102] */
    (xdc_Char)0x6e,  /* [6103] */
    (xdc_Char)0x69,  /* [6104] */
    (xdc_Char)0x74,  /* [6105] */
    (xdc_Char)0x79,  /* [6106] */
    (xdc_Char)0x20,  /* [6107] */
    (xdc_Char)0x25,  /* [6108] */
    (xdc_Char)0x64,  /* [6109] */
    (xdc_Char)0x2c,  /* [6110] */
    (xdc_Char)0x20,  /* [6111] */
    (xdc_Char)0x6e,  /* [6112] */
    (xdc_Char)0x65,  /* [6113] */
    (xdc_Char)0x77,  /* [6114] */
    (xdc_Char)0x41,  /* [6115] */
    (xdc_Char)0x66,  /* [6116] */
    (xdc_Char)0x66,  /* [6117] */
    (xdc_Char)0x69,  /* [6118] */
    (xdc_Char)0x6e,  /* [6119] */
    (xdc_Char)0x69,  /* [6120] */
    (xdc_Char)0x74,  /* [6121] */
    (xdc_Char)0x79,  /* [6122] */
    (xdc_Char)0x20,  /* [6123] */
    (xdc_Char)0x25,  /* [6124] */
    (xdc_Char)0x64,  /* [6125] */
    (xdc_Char)0x0,  /* [6126] */
    (xdc_Char)0x4c,  /* [6127] */
    (xdc_Char)0x44,  /* [6128] */
    (xdc_Char)0x5f,  /* [6129] */
    (xdc_Char)0x73,  /* [6130] */
    (xdc_Char)0x63,  /* [6131] */
    (xdc_Char)0x68,  /* [6132] */
    (xdc_Char)0x65,  /* [6133] */
    (xdc_Char)0x64,  /* [6134] */
    (xdc_Char)0x75,  /* [6135] */
    (xdc_Char)0x6c,  /* [6136] */
    (xdc_Char)0x65,  /* [6137] */
    (xdc_Char)0x3a,  /* [6138] */
    (xdc_Char)0x20,  /* [6139] */
    (xdc_Char)0x63,  /* [6140] */
    (xdc_Char)0x6f,  /* [6141] */
    (xdc_Char)0x72,  /* [6142] */
    (xdc_Char)0x65,  /* [6143] */
    (xdc_Char)0x49,  /* [6144] */
    (xdc_Char)0x64,  /* [6145] */
    (xdc_Char)0x3a,  /* [6146] */
    (xdc_Char)0x20,  /* [6147] */
    (xdc_Char)0x25,  /* [6148] */
    (xdc_Char)0x64,  /* [6149] */
    (xdc_Char)0x2c,  /* [6150] */
    (xdc_Char)0x20,  /* [6151] */
    (xdc_Char)0x77,  /* [6152] */
    (xdc_Char)0x6f,  /* [6153] */
    (xdc_Char)0x72,  /* [6154] */
    (xdc_Char)0x6b,  /* [6155] */
    (xdc_Char)0x46,  /* [6156] */
    (xdc_Char)0x6c,  /* [6157] */
    (xdc_Char)0x61,  /* [6158] */
    (xdc_Char)0x67,  /* [6159] */
    (xdc_Char)0x3a,  /* [6160] */
    (xdc_Char)0x20,  /* [6161] */
    (xdc_Char)0x25,  /* [6162] */
    (xdc_Char)0x64,  /* [6163] */
    (xdc_Char)0x2c,  /* [6164] */
    (xdc_Char)0x20,  /* [6165] */
    (xdc_Char)0x63,  /* [6166] */
    (xdc_Char)0x75,  /* [6167] */
    (xdc_Char)0x72,  /* [6168] */
    (xdc_Char)0x53,  /* [6169] */
    (xdc_Char)0x65,  /* [6170] */
    (xdc_Char)0x74,  /* [6171] */
    (xdc_Char)0x4c,  /* [6172] */
    (xdc_Char)0x6f,  /* [6173] */
    (xdc_Char)0x63,  /* [6174] */
    (xdc_Char)0x61,  /* [6175] */
    (xdc_Char)0x6c,  /* [6176] */
    (xdc_Char)0x3a,  /* [6177] */
    (xdc_Char)0x20,  /* [6178] */
    (xdc_Char)0x25,  /* [6179] */
    (xdc_Char)0x64,  /* [6180] */
    (xdc_Char)0x2c,  /* [6181] */
    (xdc_Char)0x20,  /* [6182] */
    (xdc_Char)0x63,  /* [6183] */
    (xdc_Char)0x75,  /* [6184] */
    (xdc_Char)0x72,  /* [6185] */
    (xdc_Char)0x53,  /* [6186] */
    (xdc_Char)0x65,  /* [6187] */
    (xdc_Char)0x74,  /* [6188] */
    (xdc_Char)0x58,  /* [6189] */
    (xdc_Char)0x3a,  /* [6190] */
    (xdc_Char)0x20,  /* [6191] */
    (xdc_Char)0x25,  /* [6192] */
    (xdc_Char)0x64,  /* [6193] */
    (xdc_Char)0x2c,  /* [6194] */
    (xdc_Char)0x20,  /* [6195] */
    (xdc_Char)0x63,  /* [6196] */
    (xdc_Char)0x75,  /* [6197] */
    (xdc_Char)0x72,  /* [6198] */
    (xdc_Char)0x4d,  /* [6199] */
    (xdc_Char)0x61,  /* [6200] */
    (xdc_Char)0x73,  /* [6201] */
    (xdc_Char)0x6b,  /* [6202] */
    (xdc_Char)0x4c,  /* [6203] */
    (xdc_Char)0x6f,  /* [6204] */
    (xdc_Char)0x63,  /* [6205] */
    (xdc_Char)0x61,  /* [6206] */
    (xdc_Char)0x6c,  /* [6207] */
    (xdc_Char)0x3a,  /* [6208] */
    (xdc_Char)0x20,  /* [6209] */
    (xdc_Char)0x25,  /* [6210] */
    (xdc_Char)0x64,  /* [6211] */
    (xdc_Char)0x0,  /* [6212] */
    (xdc_Char)0x4c,  /* [6213] */
    (xdc_Char)0x44,  /* [6214] */
    (xdc_Char)0x5f,  /* [6215] */
    (xdc_Char)0x6e,  /* [6216] */
    (xdc_Char)0x6f,  /* [6217] */
    (xdc_Char)0x57,  /* [6218] */
    (xdc_Char)0x6f,  /* [6219] */
    (xdc_Char)0x72,  /* [6220] */
    (xdc_Char)0x6b,  /* [6221] */
    (xdc_Char)0x3a,  /* [6222] */
    (xdc_Char)0x20,  /* [6223] */
    (xdc_Char)0x63,  /* [6224] */
    (xdc_Char)0x6f,  /* [6225] */
    (xdc_Char)0x72,  /* [6226] */
    (xdc_Char)0x65,  /* [6227] */
    (xdc_Char)0x49,  /* [6228] */
    (xdc_Char)0x64,  /* [6229] */
    (xdc_Char)0x3a,  /* [6230] */
    (xdc_Char)0x20,  /* [6231] */
    (xdc_Char)0x25,  /* [6232] */
    (xdc_Char)0x64,  /* [6233] */
    (xdc_Char)0x2c,  /* [6234] */
    (xdc_Char)0x20,  /* [6235] */
    (xdc_Char)0x63,  /* [6236] */
    (xdc_Char)0x75,  /* [6237] */
    (xdc_Char)0x72,  /* [6238] */
    (xdc_Char)0x53,  /* [6239] */
    (xdc_Char)0x65,  /* [6240] */
    (xdc_Char)0x74,  /* [6241] */
    (xdc_Char)0x4c,  /* [6242] */
    (xdc_Char)0x6f,  /* [6243] */
    (xdc_Char)0x63,  /* [6244] */
    (xdc_Char)0x61,  /* [6245] */
    (xdc_Char)0x6c,  /* [6246] */
    (xdc_Char)0x3a,  /* [6247] */
    (xdc_Char)0x20,  /* [6248] */
    (xdc_Char)0x25,  /* [6249] */
    (xdc_Char)0x64,  /* [6250] */
    (xdc_Char)0x2c,  /* [6251] */
    (xdc_Char)0x20,  /* [6252] */
    (xdc_Char)0x63,  /* [6253] */
    (xdc_Char)0x75,  /* [6254] */
    (xdc_Char)0x72,  /* [6255] */
    (xdc_Char)0x53,  /* [6256] */
    (xdc_Char)0x65,  /* [6257] */
    (xdc_Char)0x74,  /* [6258] */
    (xdc_Char)0x58,  /* [6259] */
    (xdc_Char)0x3a,  /* [6260] */
    (xdc_Char)0x20,  /* [6261] */
    (xdc_Char)0x25,  /* [6262] */
    (xdc_Char)0x64,  /* [6263] */
    (xdc_Char)0x2c,  /* [6264] */
    (xdc_Char)0x20,  /* [6265] */
    (xdc_Char)0x63,  /* [6266] */
    (xdc_Char)0x75,  /* [6267] */
    (xdc_Char)0x72,  /* [6268] */
    (xdc_Char)0x4d,  /* [6269] */
    (xdc_Char)0x61,  /* [6270] */
    (xdc_Char)0x73,  /* [6271] */
    (xdc_Char)0x6b,  /* [6272] */
    (xdc_Char)0x4c,  /* [6273] */
    (xdc_Char)0x6f,  /* [6274] */
    (xdc_Char)0x63,  /* [6275] */
    (xdc_Char)0x61,  /* [6276] */
    (xdc_Char)0x6c,  /* [6277] */
    (xdc_Char)0x3a,  /* [6278] */
    (xdc_Char)0x20,  /* [6279] */
    (xdc_Char)0x25,  /* [6280] */
    (xdc_Char)0x64,  /* [6281] */
    (xdc_Char)0x0,  /* [6282] */
    (xdc_Char)0x4c,  /* [6283] */
    (xdc_Char)0x4d,  /* [6284] */
    (xdc_Char)0x5f,  /* [6285] */
    (xdc_Char)0x62,  /* [6286] */
    (xdc_Char)0x65,  /* [6287] */
    (xdc_Char)0x67,  /* [6288] */
    (xdc_Char)0x69,  /* [6289] */
    (xdc_Char)0x6e,  /* [6290] */
    (xdc_Char)0x3a,  /* [6291] */
    (xdc_Char)0x20,  /* [6292] */
    (xdc_Char)0x68,  /* [6293] */
    (xdc_Char)0x77,  /* [6294] */
    (xdc_Char)0x69,  /* [6295] */
    (xdc_Char)0x3a,  /* [6296] */
    (xdc_Char)0x20,  /* [6297] */
    (xdc_Char)0x30,  /* [6298] */
    (xdc_Char)0x78,  /* [6299] */
    (xdc_Char)0x25,  /* [6300] */
    (xdc_Char)0x78,  /* [6301] */
    (xdc_Char)0x2c,  /* [6302] */
    (xdc_Char)0x20,  /* [6303] */
    (xdc_Char)0x66,  /* [6304] */
    (xdc_Char)0x75,  /* [6305] */
    (xdc_Char)0x6e,  /* [6306] */
    (xdc_Char)0x63,  /* [6307] */
    (xdc_Char)0x3a,  /* [6308] */
    (xdc_Char)0x20,  /* [6309] */
    (xdc_Char)0x30,  /* [6310] */
    (xdc_Char)0x78,  /* [6311] */
    (xdc_Char)0x25,  /* [6312] */
    (xdc_Char)0x78,  /* [6313] */
    (xdc_Char)0x2c,  /* [6314] */
    (xdc_Char)0x20,  /* [6315] */
    (xdc_Char)0x70,  /* [6316] */
    (xdc_Char)0x72,  /* [6317] */
    (xdc_Char)0x65,  /* [6318] */
    (xdc_Char)0x54,  /* [6319] */
    (xdc_Char)0x68,  /* [6320] */
    (xdc_Char)0x72,  /* [6321] */
    (xdc_Char)0x65,  /* [6322] */
    (xdc_Char)0x61,  /* [6323] */
    (xdc_Char)0x64,  /* [6324] */
    (xdc_Char)0x3a,  /* [6325] */
    (xdc_Char)0x20,  /* [6326] */
    (xdc_Char)0x25,  /* [6327] */
    (xdc_Char)0x64,  /* [6328] */
    (xdc_Char)0x2c,  /* [6329] */
    (xdc_Char)0x20,  /* [6330] */
    (xdc_Char)0x69,  /* [6331] */
    (xdc_Char)0x6e,  /* [6332] */
    (xdc_Char)0x74,  /* [6333] */
    (xdc_Char)0x4e,  /* [6334] */
    (xdc_Char)0x75,  /* [6335] */
    (xdc_Char)0x6d,  /* [6336] */
    (xdc_Char)0x3a,  /* [6337] */
    (xdc_Char)0x20,  /* [6338] */
    (xdc_Char)0x25,  /* [6339] */
    (xdc_Char)0x64,  /* [6340] */
    (xdc_Char)0x2c,  /* [6341] */
    (xdc_Char)0x20,  /* [6342] */
    (xdc_Char)0x69,  /* [6343] */
    (xdc_Char)0x72,  /* [6344] */
    (xdc_Char)0x70,  /* [6345] */
    (xdc_Char)0x3a,  /* [6346] */
    (xdc_Char)0x20,  /* [6347] */
    (xdc_Char)0x30,  /* [6348] */
    (xdc_Char)0x78,  /* [6349] */
    (xdc_Char)0x25,  /* [6350] */
    (xdc_Char)0x78,  /* [6351] */
    (xdc_Char)0x0,  /* [6352] */
    (xdc_Char)0x4c,  /* [6353] */
    (xdc_Char)0x44,  /* [6354] */
    (xdc_Char)0x5f,  /* [6355] */
    (xdc_Char)0x65,  /* [6356] */
    (xdc_Char)0x6e,  /* [6357] */
    (xdc_Char)0x64,  /* [6358] */
    (xdc_Char)0x3a,  /* [6359] */
    (xdc_Char)0x20,  /* [6360] */
    (xdc_Char)0x68,  /* [6361] */
    (xdc_Char)0x77,  /* [6362] */
    (xdc_Char)0x69,  /* [6363] */
    (xdc_Char)0x3a,  /* [6364] */
    (xdc_Char)0x20,  /* [6365] */
    (xdc_Char)0x30,  /* [6366] */
    (xdc_Char)0x78,  /* [6367] */
    (xdc_Char)0x25,  /* [6368] */
    (xdc_Char)0x78,  /* [6369] */
    (xdc_Char)0x0,  /* [6370] */
    (xdc_Char)0x78,  /* [6371] */
    (xdc_Char)0x64,  /* [6372] */
    (xdc_Char)0x63,  /* [6373] */
    (xdc_Char)0x2e,  /* [6374] */
    (xdc_Char)0x0,  /* [6375] */
    (xdc_Char)0x72,  /* [6376] */
    (xdc_Char)0x75,  /* [6377] */
    (xdc_Char)0x6e,  /* [6378] */
    (xdc_Char)0x74,  /* [6379] */
    (xdc_Char)0x69,  /* [6380] */
    (xdc_Char)0x6d,  /* [6381] */
    (xdc_Char)0x65,  /* [6382] */
    (xdc_Char)0x2e,  /* [6383] */
    (xdc_Char)0x0,  /* [6384] */
    (xdc_Char)0x41,  /* [6385] */
    (xdc_Char)0x73,  /* [6386] */
    (xdc_Char)0x73,  /* [6387] */
    (xdc_Char)0x65,  /* [6388] */
    (xdc_Char)0x72,  /* [6389] */
    (xdc_Char)0x74,  /* [6390] */
    (xdc_Char)0x0,  /* [6391] */
    (xdc_Char)0x43,  /* [6392] */
    (xdc_Char)0x6f,  /* [6393] */
    (xdc_Char)0x72,  /* [6394] */
    (xdc_Char)0x65,  /* [6395] */
    (xdc_Char)0x0,  /* [6396] */
    (xdc_Char)0x44,  /* [6397] */
    (xdc_Char)0x65,  /* [6398] */
    (xdc_Char)0x66,  /* [6399] */
    (xdc_Char)0x61,  /* [6400] */
    (xdc_Char)0x75,  /* [6401] */
    (xdc_Char)0x6c,  /* [6402] */
    (xdc_Char)0x74,  /* [6403] */
    (xdc_Char)0x73,  /* [6404] */
    (xdc_Char)0x0,  /* [6405] */
    (xdc_Char)0x44,  /* [6406] */
    (xdc_Char)0x69,  /* [6407] */
    (xdc_Char)0x61,  /* [6408] */
    (xdc_Char)0x67,  /* [6409] */
    (xdc_Char)0x73,  /* [6410] */
    (xdc_Char)0x0,  /* [6411] */
    (xdc_Char)0x45,  /* [6412] */
    (xdc_Char)0x72,  /* [6413] */
    (xdc_Char)0x72,  /* [6414] */
    (xdc_Char)0x6f,  /* [6415] */
    (xdc_Char)0x72,  /* [6416] */
    (xdc_Char)0x0,  /* [6417] */
    (xdc_Char)0x47,  /* [6418] */
    (xdc_Char)0x61,  /* [6419] */
    (xdc_Char)0x74,  /* [6420] */
    (xdc_Char)0x65,  /* [6421] */
    (xdc_Char)0x0,  /* [6422] */
    (xdc_Char)0x4c,  /* [6423] */
    (xdc_Char)0x6f,  /* [6424] */
    (xdc_Char)0x67,  /* [6425] */
    (xdc_Char)0x0,  /* [6426] */
    (xdc_Char)0x4c,  /* [6427] */
    (xdc_Char)0x6f,  /* [6428] */
    (xdc_Char)0x67,  /* [6429] */
    (xdc_Char)0x67,  /* [6430] */
    (xdc_Char)0x65,  /* [6431] */
    (xdc_Char)0x72,  /* [6432] */
    (xdc_Char)0x42,  /* [6433] */
    (xdc_Char)0x75,  /* [6434] */
    (xdc_Char)0x66,  /* [6435] */
    (xdc_Char)0x0,  /* [6436] */
    (xdc_Char)0x4d,  /* [6437] */
    (xdc_Char)0x61,  /* [6438] */
    (xdc_Char)0x69,  /* [6439] */
    (xdc_Char)0x6e,  /* [6440] */
    (xdc_Char)0x0,  /* [6441] */
    (xdc_Char)0x4d,  /* [6442] */
    (xdc_Char)0x65,  /* [6443] */
    (xdc_Char)0x6d,  /* [6444] */
    (xdc_Char)0x6f,  /* [6445] */
    (xdc_Char)0x72,  /* [6446] */
    (xdc_Char)0x79,  /* [6447] */
    (xdc_Char)0x0,  /* [6448] */
    (xdc_Char)0x52,  /* [6449] */
    (xdc_Char)0x65,  /* [6450] */
    (xdc_Char)0x67,  /* [6451] */
    (xdc_Char)0x69,  /* [6452] */
    (xdc_Char)0x73,  /* [6453] */
    (xdc_Char)0x74,  /* [6454] */
    (xdc_Char)0x72,  /* [6455] */
    (xdc_Char)0x79,  /* [6456] */
    (xdc_Char)0x0,  /* [6457] */
    (xdc_Char)0x53,  /* [6458] */
    (xdc_Char)0x74,  /* [6459] */
    (xdc_Char)0x61,  /* [6460] */
    (xdc_Char)0x72,  /* [6461] */
    (xdc_Char)0x74,  /* [6462] */
    (xdc_Char)0x75,  /* [6463] */
    (xdc_Char)0x70,  /* [6464] */
    (xdc_Char)0x0,  /* [6465] */
    (xdc_Char)0x53,  /* [6466] */
    (xdc_Char)0x79,  /* [6467] */
    (xdc_Char)0x73,  /* [6468] */
    (xdc_Char)0x74,  /* [6469] */
    (xdc_Char)0x65,  /* [6470] */
    (xdc_Char)0x6d,  /* [6471] */
    (xdc_Char)0x0,  /* [6472] */
    (xdc_Char)0x53,  /* [6473] */
    (xdc_Char)0x79,  /* [6474] */
    (xdc_Char)0x73,  /* [6475] */
    (xdc_Char)0x4d,  /* [6476] */
    (xdc_Char)0x69,  /* [6477] */
    (xdc_Char)0x6e,  /* [6478] */
    (xdc_Char)0x0,  /* [6479] */
    (xdc_Char)0x54,  /* [6480] */
    (xdc_Char)0x65,  /* [6481] */
    (xdc_Char)0x78,  /* [6482] */
    (xdc_Char)0x74,  /* [6483] */
    (xdc_Char)0x0,  /* [6484] */
    (xdc_Char)0x74,  /* [6485] */
    (xdc_Char)0x69,  /* [6486] */
    (xdc_Char)0x2e,  /* [6487] */
    (xdc_Char)0x0,  /* [6488] */
    (xdc_Char)0x63,  /* [6489] */
    (xdc_Char)0x61,  /* [6490] */
    (xdc_Char)0x74,  /* [6491] */
    (xdc_Char)0x61,  /* [6492] */
    (xdc_Char)0x6c,  /* [6493] */
    (xdc_Char)0x6f,  /* [6494] */
    (xdc_Char)0x67,  /* [6495] */
    (xdc_Char)0x2e,  /* [6496] */
    (xdc_Char)0x0,  /* [6497] */
    (xdc_Char)0x61,  /* [6498] */
    (xdc_Char)0x72,  /* [6499] */
    (xdc_Char)0x6d,  /* [6500] */
    (xdc_Char)0x2e,  /* [6501] */
    (xdc_Char)0x0,  /* [6502] */
    (xdc_Char)0x63,  /* [6503] */
    (xdc_Char)0x6f,  /* [6504] */
    (xdc_Char)0x72,  /* [6505] */
    (xdc_Char)0x74,  /* [6506] */
    (xdc_Char)0x65,  /* [6507] */
    (xdc_Char)0x78,  /* [6508] */
    (xdc_Char)0x6d,  /* [6509] */
    (xdc_Char)0x34,  /* [6510] */
    (xdc_Char)0x2e,  /* [6511] */
    (xdc_Char)0x0,  /* [6512] */
    (xdc_Char)0x74,  /* [6513] */
    (xdc_Char)0x69,  /* [6514] */
    (xdc_Char)0x76,  /* [6515] */
    (xdc_Char)0x61,  /* [6516] */
    (xdc_Char)0x2e,  /* [6517] */
    (xdc_Char)0x0,  /* [6518] */
    (xdc_Char)0x63,  /* [6519] */
    (xdc_Char)0x65,  /* [6520] */
    (xdc_Char)0x2e,  /* [6521] */
    (xdc_Char)0x0,  /* [6522] */
    (xdc_Char)0x42,  /* [6523] */
    (xdc_Char)0x6f,  /* [6524] */
    (xdc_Char)0x6f,  /* [6525] */
    (xdc_Char)0x74,  /* [6526] */
    (xdc_Char)0x0,  /* [6527] */
    (xdc_Char)0x73,  /* [6528] */
    (xdc_Char)0x79,  /* [6529] */
    (xdc_Char)0x73,  /* [6530] */
    (xdc_Char)0x62,  /* [6531] */
    (xdc_Char)0x69,  /* [6532] */
    (xdc_Char)0x6f,  /* [6533] */
    (xdc_Char)0x73,  /* [6534] */
    (xdc_Char)0x2e,  /* [6535] */
    (xdc_Char)0x0,  /* [6536] */
    (xdc_Char)0x42,  /* [6537] */
    (xdc_Char)0x49,  /* [6538] */
    (xdc_Char)0x4f,  /* [6539] */
    (xdc_Char)0x53,  /* [6540] */
    (xdc_Char)0x0,  /* [6541] */
    (xdc_Char)0x6b,  /* [6542] */
    (xdc_Char)0x6e,  /* [6543] */
    (xdc_Char)0x6c,  /* [6544] */
    (xdc_Char)0x2e,  /* [6545] */
    (xdc_Char)0x0,  /* [6546] */
    (xdc_Char)0x43,  /* [6547] */
    (xdc_Char)0x6c,  /* [6548] */
    (xdc_Char)0x6f,  /* [6549] */
    (xdc_Char)0x63,  /* [6550] */
    (xdc_Char)0x6b,  /* [6551] */
    (xdc_Char)0x0,  /* [6552] */
    (xdc_Char)0x49,  /* [6553] */
    (xdc_Char)0x64,  /* [6554] */
    (xdc_Char)0x6c,  /* [6555] */
    (xdc_Char)0x65,  /* [6556] */
    (xdc_Char)0x0,  /* [6557] */
    (xdc_Char)0x49,  /* [6558] */
    (xdc_Char)0x6e,  /* [6559] */
    (xdc_Char)0x74,  /* [6560] */
    (xdc_Char)0x72,  /* [6561] */
    (xdc_Char)0x69,  /* [6562] */
    (xdc_Char)0x6e,  /* [6563] */
    (xdc_Char)0x73,  /* [6564] */
    (xdc_Char)0x69,  /* [6565] */
    (xdc_Char)0x63,  /* [6566] */
    (xdc_Char)0x73,  /* [6567] */
    (xdc_Char)0x0,  /* [6568] */
    (xdc_Char)0x51,  /* [6569] */
    (xdc_Char)0x75,  /* [6570] */
    (xdc_Char)0x65,  /* [6571] */
    (xdc_Char)0x75,  /* [6572] */
    (xdc_Char)0x65,  /* [6573] */
    (xdc_Char)0x0,  /* [6574] */
    (xdc_Char)0x53,  /* [6575] */
    (xdc_Char)0x65,  /* [6576] */
    (xdc_Char)0x6d,  /* [6577] */
    (xdc_Char)0x61,  /* [6578] */
    (xdc_Char)0x70,  /* [6579] */
    (xdc_Char)0x68,  /* [6580] */
    (xdc_Char)0x6f,  /* [6581] */
    (xdc_Char)0x72,  /* [6582] */
    (xdc_Char)0x65,  /* [6583] */
    (xdc_Char)0x0,  /* [6584] */
    (xdc_Char)0x53,  /* [6585] */
    (xdc_Char)0x77,  /* [6586] */
    (xdc_Char)0x69,  /* [6587] */
    (xdc_Char)0x0,  /* [6588] */
    (xdc_Char)0x54,  /* [6589] */
    (xdc_Char)0x61,  /* [6590] */
    (xdc_Char)0x73,  /* [6591] */
    (xdc_Char)0x6b,  /* [6592] */
    (xdc_Char)0x0,  /* [6593] */
    (xdc_Char)0x68,  /* [6594] */
    (xdc_Char)0x61,  /* [6595] */
    (xdc_Char)0x6c,  /* [6596] */
    (xdc_Char)0x2e,  /* [6597] */
    (xdc_Char)0x0,  /* [6598] */
    (xdc_Char)0x48,  /* [6599] */
    (xdc_Char)0x77,  /* [6600] */
    (xdc_Char)0x69,  /* [6601] */
    (xdc_Char)0x0,  /* [6602] */
    (xdc_Char)0x66,  /* [6603] */
    (xdc_Char)0x61,  /* [6604] */
    (xdc_Char)0x6d,  /* [6605] */
    (xdc_Char)0x69,  /* [6606] */
    (xdc_Char)0x6c,  /* [6607] */
    (xdc_Char)0x79,  /* [6608] */
    (xdc_Char)0x2e,  /* [6609] */
    (xdc_Char)0x0,  /* [6610] */
    (xdc_Char)0x6d,  /* [6611] */
    (xdc_Char)0x33,  /* [6612] */
    (xdc_Char)0x2e,  /* [6613] */
    (xdc_Char)0x0,  /* [6614] */
    (xdc_Char)0x49,  /* [6615] */
    (xdc_Char)0x6e,  /* [6616] */
    (xdc_Char)0x74,  /* [6617] */
    (xdc_Char)0x72,  /* [6618] */
    (xdc_Char)0x69,  /* [6619] */
    (xdc_Char)0x6e,  /* [6620] */
    (xdc_Char)0x73,  /* [6621] */
    (xdc_Char)0x69,  /* [6622] */
    (xdc_Char)0x63,  /* [6623] */
    (xdc_Char)0x73,  /* [6624] */
    (xdc_Char)0x53,  /* [6625] */
    (xdc_Char)0x75,  /* [6626] */
    (xdc_Char)0x70,  /* [6627] */
    (xdc_Char)0x70,  /* [6628] */
    (xdc_Char)0x6f,  /* [6629] */
    (xdc_Char)0x72,  /* [6630] */
    (xdc_Char)0x74,  /* [6631] */
    (xdc_Char)0x0,  /* [6632] */
    (xdc_Char)0x54,  /* [6633] */
    (xdc_Char)0x61,  /* [6634] */
    (xdc_Char)0x73,  /* [6635] */
    (xdc_Char)0x6b,  /* [6636] */
    (xdc_Char)0x53,  /* [6637] */
    (xdc_Char)0x75,  /* [6638] */
    (xdc_Char)0x70,  /* [6639] */
    (xdc_Char)0x70,  /* [6640] */
    (xdc_Char)0x6f,  /* [6641] */
    (xdc_Char)0x72,  /* [6642] */
    (xdc_Char)0x74,  /* [6643] */
    (xdc_Char)0x0,  /* [6644] */
    (xdc_Char)0x72,  /* [6645] */
    (xdc_Char)0x74,  /* [6646] */
    (xdc_Char)0x73,  /* [6647] */
    (xdc_Char)0x2e,  /* [6648] */
    (xdc_Char)0x0,  /* [6649] */
    (xdc_Char)0x67,  /* [6650] */
    (xdc_Char)0x6e,  /* [6651] */
    (xdc_Char)0x75,  /* [6652] */
    (xdc_Char)0x2e,  /* [6653] */
    (xdc_Char)0x0,  /* [6654] */
    (xdc_Char)0x52,  /* [6655] */
    (xdc_Char)0x65,  /* [6656] */
    (xdc_Char)0x65,  /* [6657] */
    (xdc_Char)0x6e,  /* [6658] */
    (xdc_Char)0x74,  /* [6659] */
    (xdc_Char)0x53,  /* [6660] */
    (xdc_Char)0x75,  /* [6661] */
    (xdc_Char)0x70,  /* [6662] */
    (xdc_Char)0x70,  /* [6663] */
    (xdc_Char)0x6f,  /* [6664] */
    (xdc_Char)0x72,  /* [6665] */
    (xdc_Char)0x74,  /* [6666] */
    (xdc_Char)0x0,  /* [6667] */
    (xdc_Char)0x67,  /* [6668] */
    (xdc_Char)0x61,  /* [6669] */
    (xdc_Char)0x74,  /* [6670] */
    (xdc_Char)0x65,  /* [6671] */
    (xdc_Char)0x73,  /* [6672] */
    (xdc_Char)0x2e,  /* [6673] */
    (xdc_Char)0x0,  /* [6674] */
    (xdc_Char)0x47,  /* [6675] */
    (xdc_Char)0x61,  /* [6676] */
    (xdc_Char)0x74,  /* [6677] */
    (xdc_Char)0x65,  /* [6678] */
    (xdc_Char)0x48,  /* [6679] */
    (xdc_Char)0x77,  /* [6680] */
    (xdc_Char)0x69,  /* [6681] */
    (xdc_Char)0x0,  /* [6682] */
    (xdc_Char)0x47,  /* [6683] */
    (xdc_Char)0x61,  /* [6684] */
    (xdc_Char)0x74,  /* [6685] */
    (xdc_Char)0x65,  /* [6686] */
    (xdc_Char)0x4d,  /* [6687] */
    (xdc_Char)0x75,  /* [6688] */
    (xdc_Char)0x74,  /* [6689] */
    (xdc_Char)0x65,  /* [6690] */
    (xdc_Char)0x78,  /* [6691] */
    (xdc_Char)0x0,  /* [6692] */
    (xdc_Char)0x68,  /* [6693] */
    (xdc_Char)0x65,  /* [6694] */
    (xdc_Char)0x61,  /* [6695] */
    (xdc_Char)0x70,  /* [6696] */
    (xdc_Char)0x73,  /* [6697] */
    (xdc_Char)0x2e,  /* [6698] */
    (xdc_Char)0x0,  /* [6699] */
    (xdc_Char)0x48,  /* [6700] */
    (xdc_Char)0x65,  /* [6701] */
    (xdc_Char)0x61,  /* [6702] */
    (xdc_Char)0x70,  /* [6703] */
    (xdc_Char)0x4d,  /* [6704] */
    (xdc_Char)0x65,  /* [6705] */
    (xdc_Char)0x6d,  /* [6706] */
    (xdc_Char)0x0,  /* [6707] */
    (xdc_Char)0x6c,  /* [6708] */
    (xdc_Char)0x6d,  /* [6709] */
    (xdc_Char)0x34,  /* [6710] */
    (xdc_Char)0x2e,  /* [6711] */
    (xdc_Char)0x0,  /* [6712] */
    (xdc_Char)0x54,  /* [6713] */
    (xdc_Char)0x69,  /* [6714] */
    (xdc_Char)0x6d,  /* [6715] */
    (xdc_Char)0x65,  /* [6716] */
    (xdc_Char)0x73,  /* [6717] */
    (xdc_Char)0x74,  /* [6718] */
    (xdc_Char)0x61,  /* [6719] */
    (xdc_Char)0x6d,  /* [6720] */
    (xdc_Char)0x70,  /* [6721] */
    (xdc_Char)0x50,  /* [6722] */
    (xdc_Char)0x72,  /* [6723] */
    (xdc_Char)0x6f,  /* [6724] */
    (xdc_Char)0x76,  /* [6725] */
    (xdc_Char)0x69,  /* [6726] */
    (xdc_Char)0x64,  /* [6727] */
    (xdc_Char)0x65,  /* [6728] */
    (xdc_Char)0x72,  /* [6729] */
    (xdc_Char)0x0,  /* [6730] */
    (xdc_Char)0x54,  /* [6731] */
    (xdc_Char)0x69,  /* [6732] */
    (xdc_Char)0x6d,  /* [6733] */
    (xdc_Char)0x65,  /* [6734] */
    (xdc_Char)0x72,  /* [6735] */
    (xdc_Char)0x0,  /* [6736] */
    (xdc_Char)0x74,  /* [6737] */
    (xdc_Char)0x69,  /* [6738] */
    (xdc_Char)0x2e,  /* [6739] */
    (xdc_Char)0x73,  /* [6740] */
    (xdc_Char)0x79,  /* [6741] */
    (xdc_Char)0x73,  /* [6742] */
    (xdc_Char)0x62,  /* [6743] */
    (xdc_Char)0x69,  /* [6744] */
    (xdc_Char)0x6f,  /* [6745] */
    (xdc_Char)0x73,  /* [6746] */
    (xdc_Char)0x2e,  /* [6747] */
    (xdc_Char)0x6b,  /* [6748] */
    (xdc_Char)0x6e,  /* [6749] */
    (xdc_Char)0x6c,  /* [6750] */
    (xdc_Char)0x2e,  /* [6751] */
    (xdc_Char)0x54,  /* [6752] */
    (xdc_Char)0x61,  /* [6753] */
    (xdc_Char)0x73,  /* [6754] */
    (xdc_Char)0x6b,  /* [6755] */
    (xdc_Char)0x2e,  /* [6756] */
    (xdc_Char)0x49,  /* [6757] */
    (xdc_Char)0x64,  /* [6758] */
    (xdc_Char)0x6c,  /* [6759] */
    (xdc_Char)0x65,  /* [6760] */
    (xdc_Char)0x54,  /* [6761] */
    (xdc_Char)0x61,  /* [6762] */
    (xdc_Char)0x73,  /* [6763] */
    (xdc_Char)0x6b,  /* [6764] */
    (xdc_Char)0x0,  /* [6765] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[] __attribute__ ((section (".rodata_xdc_runtime_Text_nodeTab__A")));
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[52] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x18e3,  /* left */
        (xdc_Bits16)0x18e8,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18f1,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18f8,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18fd,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1906,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x190c,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1912,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1917,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x191b,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1925,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x192a,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1931,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x193a,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1942,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1949,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1950,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x1955,  /* left */
        (xdc_Bits16)0x1959,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1962,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1967,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1971,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1977,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x197b,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x1955,  /* left */
        (xdc_Bits16)0x1980,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1989,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x198e,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1993,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1999,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x199e,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x19a9,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x19af,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x19b9,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x19bd,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x19c2,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x19c7,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x19cb,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1962,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x19d3,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x19c7,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x19d7,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x19e9,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x19f5,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x19fa,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x19ff,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1a0c,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1a13,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1a1b,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1a25,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1a2c,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x1a34,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1a39,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1a4b,  /* right */
    },  /* [51] */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__id__C")));
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__count__C")));
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__table__C")));
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C __attribute__ ((section (".rodata_xdc_runtime_Text_nameUnknown__C")));
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C __attribute__ ((section (".rodata_xdc_runtime_Text_nameEmpty__C")));
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C __attribute__ ((section (".rodata_xdc_runtime_Text_nameStatic__C")));
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C __attribute__ ((section (".rodata_xdc_runtime_Text_isLoaded__C")));
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C __attribute__ ((section (".rodata_xdc_runtime_Text_charTab__C")));
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C __attribute__ ((section (".rodata_xdc_runtime_Text_nodeTab__C")));
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C __attribute__ ((section (".rodata_xdc_runtime_Text_charCnt__C")));
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1a6e;

/* nodeCnt__C */
const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C __attribute__ ((section (".rodata_xdc_runtime_Text_nodeCnt__C")));
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x34;

/* unnamedModsLastId__C */
const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C __attribute__ ((section (".rodata_xdc_runtime_Text_unnamedModsLastId__C")));
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C __attribute__ ((section (".rodata_xdc_runtime_Text_registryModsLastId__C")));
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C __attribute__ ((section (".rodata_xdc_runtime_Text_visitRopeFxn__C")));
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Text_visitRopeFxn2__C")));
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_m3_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_m3_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_arm_lm4_Timer_create(id, tickFxn, (const ti_sysbios_family_arm_lm4_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_LoggerBuf_Module_GateProxy_Handle xdc_runtime_LoggerBuf_Module_GateProxy_create( const xdc_runtime_LoggerBuf_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_LoggerBuf_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_LoggerBuf_Module_GateProxy_delete(xdc_runtime_LoggerBuf_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_lm4_Timer_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C __attribute__ ((section (".rodata_xdc_runtime_LoggerBuf_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32819;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_lm4_Timer_Object__ * const)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_lm4_Timer_Args__create *__args = req_args;
    ti_sysbios_family_arm_lm4_Timer_Params instPrms;
    ti_sysbios_family_arm_lm4_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_lm4_Timer_Params prms;
    ti_sysbios_family_arm_lm4_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_lm4_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_m3_Hwi_Object__ * const)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_m3_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    ti_sysbios_family_arm_m3_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32813;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32816;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;
    ti_sysbios_heaps_HeapMem_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *objp, const ti_sysbios_heaps_HeapMem_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Semaphore_Object__ * const)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__S( void )
{
    return ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32777;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((xdc_runtime_LoggerBuf_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((xdc_runtime_LoggerBuf_Object__ * const)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    xdc_runtime_LoggerBuf_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
xdc_runtime_LoggerBuf_Handle xdc_runtime_LoggerBuf_create( const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params prms;
    xdc_runtime_LoggerBuf_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void xdc_runtime_LoggerBuf_construct(xdc_runtime_LoggerBuf_Struct *objp, const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E((xdc_Ptr)objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void xdc_runtime_LoggerBuf_destruct(xdc_runtime_LoggerBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_LoggerBuf_delete(xdc_runtime_LoggerBuf_Handle *instp)
{
    xdc_runtime_LoggerBuf_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot PRAGMAS ========
 */

const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C __attribute__ ((externally_visible));
const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C __attribute__ ((externally_visible));
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.BIOS PRAGMAS ========
 */

const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.hal.Hwi PRAGMAS ========
 */

const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Clock PRAGMAS ========
 */

const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Clock_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Clock_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Semaphore PRAGMAS ========
 */

const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Swi PRAGMAS ========
 */

const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Task PRAGMAS ========
 */

const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Task_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Task_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Defaults PRAGMAS ========
 */

const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Diags PRAGMAS ========
 */

const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Diags_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Error PRAGMAS ========
 */

const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Error_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Log PRAGMAS ========
 */

const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Log_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.LoggerBuf PRAGMAS ========
 */

const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_LoggerBuf_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Main PRAGMAS ========
 */

const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Main_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Memory PRAGMAS ========
 */

const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Memory_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Startup PRAGMAS ========
 */

const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Startup_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.SysMin PRAGMAS ========
 */

const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.System PRAGMAS ========
 */

const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_System_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_printf__E(xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_aprintf__E(xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_sprintf__E(xdc_Char buf[], xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_asprintf__E(xdc_Char buf[], xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_snprintf__E(xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Text PRAGMAS ========
 */

const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Text_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

