/*
 * ezsigndocument_request.h
 *
 * An Ezsigndocument Object
 */

#ifndef _ezsigndocument_request_H_
#define _ezsigndocument_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_request_t ezsigndocument_request_t;


// Enum EEZSIGNDOCUMENTSOURCE for ezsigndocument_request

typedef enum  { ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_NULL = 0, ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_Base64, ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_Ezsigntemplate, ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_Url } ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e;

char* ezsigndocument_request_e_ezsigndocument_source_ToString(ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source);

ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e ezsigndocument_request_e_ezsigndocument_source_FromString(char* e_ezsigndocument_source);

// Enum EEZSIGNDOCUMENTFORMAT for ezsigndocument_request

typedef enum  { ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_NULL = 0, ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_Pdf } ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e;

char* ezsigndocument_request_e_ezsigndocument_format_ToString(ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format);

ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e ezsigndocument_request_e_ezsigndocument_format_FromString(char* e_ezsigndocument_format);

// Enum EEZSIGNDOCUMENTFORM for ezsigndocument_request

typedef enum  { ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_NULL = 0, ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_Keep, ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_Convert } ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e;

char* ezsigndocument_request_e_ezsigndocument_form_ToString(ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_form);

ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e ezsigndocument_request_e_ezsigndocument_form_FromString(char* e_ezsigndocument_form);



typedef struct ezsigndocument_request_t {
    int pki_ezsigndocument_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int fki_language_id; //numeric
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source; //enum
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format; //enum
    char *s_ezsigndocument_base64; //ByteArray
    char *s_ezsigndocument_url; // string
    int b_ezsigndocument_forcerepair; //boolean
    char *s_ezsigndocument_password; // string
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_form; //enum
    char *dt_ezsigndocument_duedate; // string
    char *s_ezsigndocument_name; // string

} ezsigndocument_request_t;

ezsigndocument_request_t *ezsigndocument_request_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    int fki_ezsigntemplate_id,
    int fki_ezsignfoldersignerassociation_id,
    int fki_language_id,
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source,
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format,
    char *s_ezsigndocument_base64,
    char *s_ezsigndocument_url,
    int b_ezsigndocument_forcerepair,
    char *s_ezsigndocument_password,
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_form,
    char *dt_ezsigndocument_duedate,
    char *s_ezsigndocument_name
);

void ezsigndocument_request_free(ezsigndocument_request_t *ezsigndocument_request);

ezsigndocument_request_t *ezsigndocument_request_parseFromJSON(cJSON *ezsigndocument_requestJSON);

cJSON *ezsigndocument_request_convertToJSON(ezsigndocument_request_t *ezsigndocument_request);

#endif /* _ezsigndocument_request_H_ */

