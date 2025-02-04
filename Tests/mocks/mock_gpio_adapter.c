/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_gpio_adapter.h"

static const char* CMockString_GpioAdapter_init = "GpioAdapter_init";
static const char* CMockString_GpioAdapter_led1Off = "GpioAdapter_led1Off";
static const char* CMockString_GpioAdapter_led1On = "GpioAdapter_led1On";
static const char* CMockString_GpioAdapter_led1Toggle = "GpioAdapter_led1Toggle";

typedef struct _CMOCK_GpioAdapter_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_GpioAdapter_init_CALL_INSTANCE;

typedef struct _CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE;

typedef struct _CMOCK_GpioAdapter_led1On_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_GpioAdapter_led1On_CALL_INSTANCE;

typedef struct _CMOCK_GpioAdapter_led1Off_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_GpioAdapter_led1Off_CALL_INSTANCE;

static struct mock_gpio_adapterInstance
{
  char GpioAdapter_init_IgnoreBool;
  char GpioAdapter_init_CallbackBool;
  CMOCK_GpioAdapter_init_CALLBACK GpioAdapter_init_CallbackFunctionPointer;
  int GpioAdapter_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GpioAdapter_init_CallInstance;
  char GpioAdapter_led1Toggle_IgnoreBool;
  char GpioAdapter_led1Toggle_CallbackBool;
  CMOCK_GpioAdapter_led1Toggle_CALLBACK GpioAdapter_led1Toggle_CallbackFunctionPointer;
  int GpioAdapter_led1Toggle_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GpioAdapter_led1Toggle_CallInstance;
  char GpioAdapter_led1On_IgnoreBool;
  char GpioAdapter_led1On_CallbackBool;
  CMOCK_GpioAdapter_led1On_CALLBACK GpioAdapter_led1On_CallbackFunctionPointer;
  int GpioAdapter_led1On_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GpioAdapter_led1On_CallInstance;
  char GpioAdapter_led1Off_IgnoreBool;
  char GpioAdapter_led1Off_CallbackBool;
  CMOCK_GpioAdapter_led1Off_CALLBACK GpioAdapter_led1Off_CallbackFunctionPointer;
  int GpioAdapter_led1Off_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GpioAdapter_led1Off_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_gpio_adapter_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.GpioAdapter_init_CallInstance;
  if (Mock.GpioAdapter_init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GpioAdapter_init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GpioAdapter_init_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.GpioAdapter_led1Toggle_CallInstance;
  if (Mock.GpioAdapter_led1Toggle_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GpioAdapter_led1Toggle);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.GpioAdapter_led1On_CallInstance;
  if (Mock.GpioAdapter_led1On_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GpioAdapter_led1On);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GpioAdapter_led1On_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.GpioAdapter_led1Off_CallInstance;
  if (Mock.GpioAdapter_led1Off_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_GpioAdapter_led1Off);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.GpioAdapter_led1Off_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_gpio_adapter_Init(void)
{
  mock_gpio_adapter_Destroy();
}

void mock_gpio_adapter_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void GpioAdapter_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GpioAdapter_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GpioAdapter_init);
  cmock_call_instance = (CMOCK_GpioAdapter_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GpioAdapter_init_CallInstance);
  Mock.GpioAdapter_init_CallInstance = CMock_Guts_MemNext(Mock.GpioAdapter_init_CallInstance);
  if (Mock.GpioAdapter_init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.GpioAdapter_init_CallbackBool &&
      Mock.GpioAdapter_init_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_init_CallbackFunctionPointer(Mock.GpioAdapter_init_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.GpioAdapter_init_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_init_CallbackFunctionPointer(Mock.GpioAdapter_init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void GpioAdapter_init_CMockIgnore(void)
{
  Mock.GpioAdapter_init_IgnoreBool = (char)1;
}

void GpioAdapter_init_CMockStopIgnore(void)
{
  Mock.GpioAdapter_init_IgnoreBool = (char)0;
}

void GpioAdapter_init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GpioAdapter_init_CALL_INSTANCE));
  CMOCK_GpioAdapter_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_GpioAdapter_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GpioAdapter_init_CallInstance = CMock_Guts_MemChain(Mock.GpioAdapter_init_CallInstance, cmock_guts_index);
  Mock.GpioAdapter_init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void GpioAdapter_init_AddCallback(CMOCK_GpioAdapter_init_CALLBACK Callback)
{
  Mock.GpioAdapter_init_IgnoreBool = (char)0;
  Mock.GpioAdapter_init_CallbackBool = (char)1;
  Mock.GpioAdapter_init_CallbackFunctionPointer = Callback;
}

void GpioAdapter_init_Stub(CMOCK_GpioAdapter_init_CALLBACK Callback)
{
  Mock.GpioAdapter_init_IgnoreBool = (char)0;
  Mock.GpioAdapter_init_CallbackBool = (char)0;
  Mock.GpioAdapter_init_CallbackFunctionPointer = Callback;
}

void GpioAdapter_led1Toggle(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GpioAdapter_led1Toggle);
  cmock_call_instance = (CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GpioAdapter_led1Toggle_CallInstance);
  Mock.GpioAdapter_led1Toggle_CallInstance = CMock_Guts_MemNext(Mock.GpioAdapter_led1Toggle_CallInstance);
  if (Mock.GpioAdapter_led1Toggle_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.GpioAdapter_led1Toggle_CallbackBool &&
      Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer(Mock.GpioAdapter_led1Toggle_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer(Mock.GpioAdapter_led1Toggle_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void GpioAdapter_led1Toggle_CMockIgnore(void)
{
  Mock.GpioAdapter_led1Toggle_IgnoreBool = (char)1;
}

void GpioAdapter_led1Toggle_CMockStopIgnore(void)
{
  Mock.GpioAdapter_led1Toggle_IgnoreBool = (char)0;
}

void GpioAdapter_led1Toggle_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE));
  CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE* cmock_call_instance = (CMOCK_GpioAdapter_led1Toggle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GpioAdapter_led1Toggle_CallInstance = CMock_Guts_MemChain(Mock.GpioAdapter_led1Toggle_CallInstance, cmock_guts_index);
  Mock.GpioAdapter_led1Toggle_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void GpioAdapter_led1Toggle_AddCallback(CMOCK_GpioAdapter_led1Toggle_CALLBACK Callback)
{
  Mock.GpioAdapter_led1Toggle_IgnoreBool = (char)0;
  Mock.GpioAdapter_led1Toggle_CallbackBool = (char)1;
  Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer = Callback;
}

void GpioAdapter_led1Toggle_Stub(CMOCK_GpioAdapter_led1Toggle_CALLBACK Callback)
{
  Mock.GpioAdapter_led1Toggle_IgnoreBool = (char)0;
  Mock.GpioAdapter_led1Toggle_CallbackBool = (char)0;
  Mock.GpioAdapter_led1Toggle_CallbackFunctionPointer = Callback;
}

void GpioAdapter_led1On(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GpioAdapter_led1On_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GpioAdapter_led1On);
  cmock_call_instance = (CMOCK_GpioAdapter_led1On_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GpioAdapter_led1On_CallInstance);
  Mock.GpioAdapter_led1On_CallInstance = CMock_Guts_MemNext(Mock.GpioAdapter_led1On_CallInstance);
  if (Mock.GpioAdapter_led1On_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.GpioAdapter_led1On_CallbackBool &&
      Mock.GpioAdapter_led1On_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_led1On_CallbackFunctionPointer(Mock.GpioAdapter_led1On_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.GpioAdapter_led1On_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_led1On_CallbackFunctionPointer(Mock.GpioAdapter_led1On_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void GpioAdapter_led1On_CMockIgnore(void)
{
  Mock.GpioAdapter_led1On_IgnoreBool = (char)1;
}

void GpioAdapter_led1On_CMockStopIgnore(void)
{
  Mock.GpioAdapter_led1On_IgnoreBool = (char)0;
}

void GpioAdapter_led1On_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GpioAdapter_led1On_CALL_INSTANCE));
  CMOCK_GpioAdapter_led1On_CALL_INSTANCE* cmock_call_instance = (CMOCK_GpioAdapter_led1On_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GpioAdapter_led1On_CallInstance = CMock_Guts_MemChain(Mock.GpioAdapter_led1On_CallInstance, cmock_guts_index);
  Mock.GpioAdapter_led1On_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void GpioAdapter_led1On_AddCallback(CMOCK_GpioAdapter_led1On_CALLBACK Callback)
{
  Mock.GpioAdapter_led1On_IgnoreBool = (char)0;
  Mock.GpioAdapter_led1On_CallbackBool = (char)1;
  Mock.GpioAdapter_led1On_CallbackFunctionPointer = Callback;
}

void GpioAdapter_led1On_Stub(CMOCK_GpioAdapter_led1On_CALLBACK Callback)
{
  Mock.GpioAdapter_led1On_IgnoreBool = (char)0;
  Mock.GpioAdapter_led1On_CallbackBool = (char)0;
  Mock.GpioAdapter_led1On_CallbackFunctionPointer = Callback;
}

void GpioAdapter_led1Off(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GpioAdapter_led1Off_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GpioAdapter_led1Off);
  cmock_call_instance = (CMOCK_GpioAdapter_led1Off_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GpioAdapter_led1Off_CallInstance);
  Mock.GpioAdapter_led1Off_CallInstance = CMock_Guts_MemNext(Mock.GpioAdapter_led1Off_CallInstance);
  if (Mock.GpioAdapter_led1Off_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.GpioAdapter_led1Off_CallbackBool &&
      Mock.GpioAdapter_led1Off_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_led1Off_CallbackFunctionPointer(Mock.GpioAdapter_led1Off_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.GpioAdapter_led1Off_CallbackFunctionPointer != NULL)
  {
    Mock.GpioAdapter_led1Off_CallbackFunctionPointer(Mock.GpioAdapter_led1Off_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void GpioAdapter_led1Off_CMockIgnore(void)
{
  Mock.GpioAdapter_led1Off_IgnoreBool = (char)1;
}

void GpioAdapter_led1Off_CMockStopIgnore(void)
{
  Mock.GpioAdapter_led1Off_IgnoreBool = (char)0;
}

void GpioAdapter_led1Off_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GpioAdapter_led1Off_CALL_INSTANCE));
  CMOCK_GpioAdapter_led1Off_CALL_INSTANCE* cmock_call_instance = (CMOCK_GpioAdapter_led1Off_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GpioAdapter_led1Off_CallInstance = CMock_Guts_MemChain(Mock.GpioAdapter_led1Off_CallInstance, cmock_guts_index);
  Mock.GpioAdapter_led1Off_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void GpioAdapter_led1Off_AddCallback(CMOCK_GpioAdapter_led1Off_CALLBACK Callback)
{
  Mock.GpioAdapter_led1Off_IgnoreBool = (char)0;
  Mock.GpioAdapter_led1Off_CallbackBool = (char)1;
  Mock.GpioAdapter_led1Off_CallbackFunctionPointer = Callback;
}

void GpioAdapter_led1Off_Stub(CMOCK_GpioAdapter_led1Off_CALLBACK Callback)
{
  Mock.GpioAdapter_led1Off_IgnoreBool = (char)0;
  Mock.GpioAdapter_led1Off_CallbackBool = (char)0;
  Mock.GpioAdapter_led1Off_CallbackFunctionPointer = Callback;
}

