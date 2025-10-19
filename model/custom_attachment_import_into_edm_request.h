/*
 * custom_attachment_import_into_edm_request.h
 *
 * A AttachmentImportIntoEDM object
 */

#ifndef _custom_attachment_import_into_edm_request_H_
#define _custom_attachment_import_into_edm_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attachment_import_into_edm_request_t custom_attachment_import_into_edm_request_t;

#include "field_e_attachment_privacy.h"

// Enum EATTACHMENTSOURCE for custom_attachment_import_into_edm_request

typedef enum  { ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_NULL = 0, ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_Attachment, ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_Base64, ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_Url } ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e;

char* custom_attachment_import_into_edm_request_e_attachment_source_ToString(ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_source);

ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e custom_attachment_import_into_edm_request_e_attachment_source_FromString(char* e_attachment_source);



typedef struct custom_attachment_import_into_edm_request_t {
    ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_source; //enum
    int fki_attachment_id; //numeric
    int fki_inscriptionchecklist_id; //numeric
    char *s_attachment_url; // string
    char *s_attachment_base64; //ByteArray
    char *s_attachment_name; // string
    char *s_attachment_category; // string
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy; //referenced enum
    int fki_user_id_specific; //numeric
    char *s_attachment_md5; // string
    int b_attachment_forceoverwrite; //boolean
    int b_attachment_forcerestore; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_attachment_import_into_edm_request_t;

__attribute__((deprecated)) custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_create(
    ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_source,
    int fki_attachment_id,
    int fki_inscriptionchecklist_id,
    char *s_attachment_url,
    char *s_attachment_base64,
    char *s_attachment_name,
    char *s_attachment_category,
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int fki_user_id_specific,
    char *s_attachment_md5,
    int b_attachment_forceoverwrite,
    int b_attachment_forcerestore
);

void custom_attachment_import_into_edm_request_free(custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request);

custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_parseFromJSON(cJSON *custom_attachment_import_into_edm_requestJSON);

cJSON *custom_attachment_import_into_edm_request_convertToJSON(custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request);

#endif /* _custom_attachment_import_into_edm_request_H_ */

