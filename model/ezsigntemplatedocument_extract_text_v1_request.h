/*
 * ezsigntemplatedocument_extract_text_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/extractText
 */

#ifndef _ezsigntemplatedocument_extract_text_v1_request_H_
#define _ezsigntemplatedocument_extract_text_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_extract_text_v1_request_t ezsigntemplatedocument_extract_text_v1_request_t;


// Enum ESECTION for ezsigntemplatedocument_extract_text_v1_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_NULL = 0, ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_FirstLine, ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_LastLine, ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_Region } ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e;

char* ezsigntemplatedocument_extract_text_v1_request_e_section_ToString(ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e e_section);

ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e ezsigntemplatedocument_extract_text_v1_request_e_section_FromString(char* e_section);



typedef struct ezsigntemplatedocument_extract_text_v1_request_t {
    int i_page; //numeric
    ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e e_section; //enum
    int i_x; //numeric
    int i_y; //numeric
    int i_width; //numeric
    int i_height; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_extract_text_v1_request_t;

__attribute__((deprecated)) ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request_create(
    int i_page,
    ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e e_section,
    int i_x,
    int i_y,
    int i_width,
    int i_height
);

void ezsigntemplatedocument_extract_text_v1_request_free(ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request);

ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_extract_text_v1_requestJSON);

cJSON *ezsigntemplatedocument_extract_text_v1_request_convertToJSON(ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request);

#endif /* _ezsigntemplatedocument_extract_text_v1_request_H_ */

