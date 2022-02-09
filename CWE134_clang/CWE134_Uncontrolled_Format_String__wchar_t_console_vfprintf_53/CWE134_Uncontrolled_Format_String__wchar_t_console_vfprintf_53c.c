/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53c.c
Label Definition File: CWE134_Uncontrolled_Format_String.vasinks.label.xml
Template File: sources-vasinks-53c.tmpl.c
*/
/*
 * @description
 * CWE: 134 Uncontrolled Format String
 * BadSource: console Read input from the console
 * GoodSource: Copy a fixed string into data
 * Sinks: vfprintf
 *    GoodSink: vfwprintf with a format string
 *    BadSink : vfwprintf without a format string
 * Flow Variant: 53 Data flow: data passed as an argument from one function through two others to a fourth; all four functions are in different source files
 *
 * */

#include <stdarg.h>
#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITBAD

/* bad function declaration */
void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53d_badSink(wchar_t * data);

void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53c_badSink(wchar_t * data)
{
    CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53d_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53d_goodG2BSink(wchar_t * data);

void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53c_goodG2BSink(wchar_t * data)
{
    CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53d_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53d_goodB2GSink(wchar_t * data);

void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53c_goodB2GSink(wchar_t * data)
{
    CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_53d_goodB2GSink(data);
}

#endif /* OMITGOOD */
