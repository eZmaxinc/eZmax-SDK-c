/*
 * ezsigntemplatedocument_request.h
 *
 * A Ezsigntemplatedocument Object
 */

#ifndef _ezsigntemplatedocument_request_H_
#define _ezsigntemplatedocument_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_request_t ezsigntemplatedocument_request_t;


// Enum EEZSIGNTEMPLATEDOCUMENTSOURCE for ezsigntemplatedocument_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_NULL = 0, ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_Base64, ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_Url, ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_Ezsigndocument } ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_e;

char* ezsigntemplatedocument_request_e_ezsigntemplatedocument_source_ToString(ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_source);

ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_e ezsigntemplatedocument_request_e_ezsigntemplatedocument_source_FromString(char* e_ezsigntemplatedocument_source);

// Enum EEZSIGNTEMPLATEDOCUMENTFORMAT for ezsigntemplatedocument_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_NULL = 0, ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_Pdf } ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_e;

char* ezsigntemplatedocument_request_e_ezsigntemplatedocument_format_ToString(ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_format);

ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_e ezsigntemplatedocument_request_e_ezsigntemplatedocument_format_FromString(char* e_ezsigntemplatedocument_format);

// Enum EEZSIGNTEMPLATEDOCUMENTFORM for ezsigntemplatedocument_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_NULL = 0, ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_Keep, ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_Convert } ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_e;

char* ezsigntemplatedocument_request_e_ezsigntemplatedocument_form_ToString(ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_form);

ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_e ezsigntemplatedocument_request_e_ezsigntemplatedocument_form_FromString(char* e_ezsigntemplatedocument_form);



typedef struct ezsigntemplatedocument_request_t {
    int pki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    char *s_ezsigntemplatedocument_name; // string
    ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_source; //enum
    ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_format; //enum
    char *s_ezsigntemplatedocument_base64; //ByteArray
    char *s_ezsigntemplatedocument_url; // string
    int b_ezsigntemplatedocument_forcerepair; //boolean
    ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_form; //enum
    char *s_ezsigntemplatedocument_password; // string

} ezsigntemplatedocument_request_t;

ezsigntemplatedocument_request_t *ezsigntemplatedocument_request_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigndocument_id,
    int fki_ezsigntemplatesigner_id,
    char *s_ezsigntemplatedocument_name,
    ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_source,
    ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_format,
    char *s_ezsigntemplatedocument_base64,
    char *s_ezsigntemplatedocument_url,
    int b_ezsigntemplatedocument_forcerepair,
    ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_form,
    char *s_ezsigntemplatedocument_password
);

void ezsigntemplatedocument_request_free(ezsigntemplatedocument_request_t *ezsigntemplatedocument_request);

ezsigntemplatedocument_request_t *ezsigntemplatedocument_request_parseFromJSON(cJSON *ezsigntemplatedocument_requestJSON);

cJSON *ezsigntemplatedocument_request_convertToJSON(ezsigntemplatedocument_request_t *ezsigntemplatedocument_request);

#endif /* _ezsigntemplatedocument_request_H_ */
