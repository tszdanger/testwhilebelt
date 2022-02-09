/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_max_square_54c.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-54c.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for short
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#include <math.h>

#ifndef OMITBAD

/* bad function declaration */
void CWE190_Integer_Overflow__short_max_square_54d_badSink(short data);

void CWE190_Integer_Overflow__short_max_square_54c_badSink(short data)
{
    CWE190_Integer_Overflow__short_max_square_54d_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE190_Integer_Overflow__short_max_square_54d_goodG2BSink(short data);

void CWE190_Integer_Overflow__short_max_square_54c_goodG2BSink(short data)
{
    CWE190_Integer_Overflow__short_max_square_54d_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE190_Integer_Overflow__short_max_square_54d_goodB2GSink(short data);

void CWE190_Integer_Overflow__short_max_square_54c_goodB2GSink(short data)
{
    CWE190_Integer_Overflow__short_max_square_54d_goodB2GSink(data);
}

#endif /* OMITGOOD */
