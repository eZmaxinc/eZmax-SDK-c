/*
 * ezsignfolder_batch_download_v1_request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/batchDownload
 */

#ifndef _ezsignfolder_batch_download_v1_request_H_
#define _ezsignfolder_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_batch_download_v1_request_t ezsignfolder_batch_download_v1_request_t;


// Enum AEDOCUMENTTYPE for ezsignfolder_batch_download_v1_request

typedef enum  { ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_NULL = 0, ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE__Signed, ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_Proof, ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_Proofdocument } ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_e;

char* ezsignfolder_batch_download_v1_request_a_e_document_type_ToString(ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_e a_e_document_type);

ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_e ezsignfolder_batch_download_v1_request_a_e_document_type_FromString(char* a_e_document_type);



typedef struct ezsignfolder_batch_download_v1_request_t {
    list_t *a_pki_ezsigndocument_id; //primitive container
    list_t *a_e_document_type; //primitive container

} ezsignfolder_batch_download_v1_request_t;

ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request_create(
    list_t *a_pki_ezsigndocument_id,
    list_t *a_e_document_type
);

void ezsignfolder_batch_download_v1_request_free(ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request);

ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request_parseFromJSON(cJSON *ezsignfolder_batch_download_v1_requestJSON);

cJSON *ezsignfolder_batch_download_v1_request_convertToJSON(ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request);

#endif /* _ezsignfolder_batch_download_v1_request_H_ */

