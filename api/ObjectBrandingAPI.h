#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/branding_create_object_v1_request.h"
#include "../model/branding_create_object_v1_response.h"
#include "../model/branding_edit_object_v1_request.h"
#include "../model/branding_edit_object_v1_response.h"
#include "../model/branding_get_autocomplete_v2_response.h"
#include "../model/branding_get_list_v1_response.h"
#include "../model/branding_get_object_v2_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectBrandingAPI_brandingGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_brandingGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_brandingGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectBrandingAPI_brandingGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_brandingGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_brandingGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_brandingGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_brandingGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectBrandingAPI_brandingGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_brandingGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_brandingGetAutocompleteV2__*, ezmax_api_definition__full_brandingGetAutocompleteV2__en, ezmax_api_definition__full_brandingGetAutocompleteV2__fr } ezmax_api_definition__full_brandingGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectBrandingAPI_brandingGetListV1
typedef enum  { ezmax_api_definition__full_brandingGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_brandingGetListV1_EORDERBY_pkiBrandingID_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_pkiBrandingID_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_sBrandingDescriptionX_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_sBrandingDescriptionX_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColortext_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColortext_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColortextlinkbox_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColortextlinkbox_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColortextbutton_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColortextbutton_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColorbackground_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColorbackground_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColorbackgroundbutton_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColorbackgroundbutton_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColorbackgroundsmallbox_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_iBrandingColorbackgroundsmallbox_DESC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_bBrandingIsactive_ASC, ezmax_api_definition__full_brandingGetListV1_EORDERBY_bBrandingIsactive_DESC } ezmax_api_definition__full_brandingGetListV1_eOrderBy_e;

// Enum  for ObjectBrandingAPI_brandingGetListV1
typedef enum  { ezmax_api_definition__full_brandingGetListV1__NULL = 0, ezmax_api_definition__full_brandingGetListV1__*, ezmax_api_definition__full_brandingGetListV1__en, ezmax_api_definition__full_brandingGetListV1__fr } ezmax_api_definition__full_brandingGetListV1_Accept-Language_e;


// Create a new Branding
//
// The endpoint allows to create one or many elements at once.
//
branding_create_object_v1_response_t*
ObjectBrandingAPI_brandingCreateObjectV1(apiClient_t *apiClient, branding_create_object_v1_request_t * branding_create_object_v1_request );


// Edit an existing Branding
//
// 
//
branding_edit_object_v1_response_t*
ObjectBrandingAPI_brandingEditObjectV1(apiClient_t *apiClient, int pkiBrandingID , branding_edit_object_v1_request_t * branding_edit_object_v1_request );


// Retrieve Brandings and IDs
//
// Get the list of Branding to be used in a dropdown or autocomplete control.
//
branding_get_autocomplete_v2_response_t*
ObjectBrandingAPI_brandingGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Branding list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eBrandingLogo | Default<br>JPEG<br>PNG |
//
branding_get_list_v1_response_t*
ObjectBrandingAPI_brandingGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Branding
//
// 
//
branding_get_object_v2_response_t*
ObjectBrandingAPI_brandingGetObjectV2(apiClient_t *apiClient, int pkiBrandingID );


