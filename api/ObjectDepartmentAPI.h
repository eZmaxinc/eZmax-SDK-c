#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/department_get_autocomplete_v2_response.h"
#include "../model/department_get_members_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectDepartmentAPI_departmentGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_departmentGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_departmentGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_departmentGetAutocompleteV2_SSELECTOR_AllButDepartmentZero, ezmax_api_definition__full_departmentGetAutocompleteV2_SSELECTOR_Company, ezmax_api_definition__full_departmentGetAutocompleteV2_SSELECTOR_CompanyButDepartmentZero } ezmax_api_definition__full_departmentGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectDepartmentAPI_departmentGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_departmentGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_departmentGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_departmentGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_departmentGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_departmentGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectDepartmentAPI_departmentGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_departmentGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_departmentGetAutocompleteV2__*, ezmax_api_definition__full_departmentGetAutocompleteV2__en, ezmax_api_definition__full_departmentGetAutocompleteV2__fr } ezmax_api_definition__full_departmentGetAutocompleteV2_Accept-Language_e;


// Retrieve Departments and IDs
//
// Get the list of Department to be used in a dropdown or autocomplete control.
//
department_get_autocomplete_v2_response_t*
ObjectDepartmentAPI_departmentGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_departmentGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_departmentGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve an existing Department's members
//
// 
//
department_get_members_v1_response_t*
ObjectDepartmentAPI_departmentGetMembersV1(apiClient_t *apiClient, int pkiDepartmentID );


