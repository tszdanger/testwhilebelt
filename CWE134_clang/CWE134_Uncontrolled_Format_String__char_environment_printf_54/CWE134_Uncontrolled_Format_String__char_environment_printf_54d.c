/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE134_Uncontrolled_Format_String__char_environment_printf_54d.c
Label Definition File: CWE134_Uncontrolled_Format_String.label.xml
Template File: sources-sinks-54d.tmpl.c
*/
/*
 * @description
 * CWE: 134 Uncontrolled Format String
 * BadSource: environment Read input from an environment variable
 * GoodSource: Copy a fixed string into data
 * Sinks: printf
 *    GoodSink: printf with "%s" as the first argument and data as the second
 *    BadSink : printf with only data as an argument
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#define ENV_VARIABLE "ADD"

#ifdef _WIN32
#define GETENV getenv
#else
#define GETENV getenv
#endif

#ifndef OMITBAD

/* bad function declaration */
void CWE134_Uncontrolled_Format_String__char_environment_printf_54e_badSink(char * data);

void CWE134_Uncontrolled_Format_String__char_environment_printf_54d_badSink(char * data)
{
    CWE134_Uncontrolled_Format_String__char_environment_printf_54e_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE134_Uncontrolled_Format_String__char_environment_printf_54e_goodG2BSink(char * data);

void CWE134_Uncontrolled_Format_String__char_environment_printf_54d_goodG2BSink(char * data)
{
    CWE134_Uncontrolled_Format_String__char_environment_printf_54e_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE134_Uncontrolled_Format_String__char_environment_printf_54e_goodB2GSink(char * data);

void CWE134_Uncontrolled_Format_String__char_environment_printf_54d_goodB2GSink(char * data)
{
    CWE134_Uncontrolled_Format_String__char_environment_printf_54e_goodB2GSink(data);
}

#endif /* OMITGOOD */
