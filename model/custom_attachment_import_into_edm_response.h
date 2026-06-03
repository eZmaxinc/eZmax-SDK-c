/*
 * custom_attachment_import_into_edm_response.h
 *
 * A AttachmentImportIntoEDM object
 */

#ifndef _custom_attachment_import_into_edm_response_H_
#define _custom_attachment_import_into_edm_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attachment_import_into_edm_response_t custom_attachment_import_into_edm_response_t;


// Enum EATTACHMENTSTATUS for custom_attachment_import_into_edm_response

typedef enum  { ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_NULL = 0, ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_Accepted, ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_FileExists, ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_Forbidden, ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_Overwrite } ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e;

char* custom_attachment_import_into_edm_response_e_attachment_status_ToString(ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_status);

ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e custom_attachment_import_into_edm_response_e_attachment_status_FromString(char* e_attachment_status);



typedef struct custom_attachment_import_into_edm_response_t {
    int *pki_attachment_id_source; //numeric
    int *pki_attachment_id_new; //numeric
    ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_status; //enum
    int *b_allow_overwrite; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_attachment_import_into_edm_response_t;

__attribute__((deprecated)) custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_create(
    int *pki_attachment_id_source,
    int *pki_attachment_id_new,
    ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_status,
    int *b_allow_overwrite
);

void custom_attachment_import_into_edm_response_free(custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response);

custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_parseFromJSON(cJSON *custom_attachment_import_into_edm_responseJSON);

cJSON *custom_attachment_import_into_edm_response_convertToJSON(custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response);

#endif /* _custom_attachment_import_into_edm_response_H_ */

