/*================================================================================*
** File:  ut_osloader_test.c
** Owner: Tam Ngo
** Date:  May 2013
**================================================================================*/

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_osloader_test.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Local function prototypes
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Local function definitions
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Main
**--------------------------------------------------------------------------------*/

void UtTest_Setup(void)
{
    if (OS_API_Init() != OS_SUCCESS)
    {
        UtAssert_Abort("OS_API_Init() failed");
    }

    UtTest_Add(UT_os_module_load_test, NULL, NULL, "OS_ModuleLoad");
    UtTest_Add(UT_os_module_unload_test, NULL, NULL, "OS_ModuleUnload");
    UtTest_Add(UT_os_module_info_test, NULL, NULL, "OS_ModuleInfo");

    UtTest_Add(UT_os_symbol_lookup_test, NULL, NULL, "OS_SymbolLookup");
    UtTest_Add(UT_os_symbol_table_dump_test, NULL, NULL, "OS_SymbolTableDump");
}

/*================================================================================*
** End of File: ut_osloader_test.c
**================================================================================*/
