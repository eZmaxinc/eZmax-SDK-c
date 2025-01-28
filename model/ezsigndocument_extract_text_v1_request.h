/*
 * ezsigndocument_extract_text_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/extractText
 */

#ifndef _ezsigndocument_extract_text_v1_request_H_
#define _ezsigndocument_extract_text_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_extract_text_v1_request_t ezsigndocument_extract_text_v1_request_t;


// Enum ESECTION for ezsigndocument_extract_text_v1_request

typedef enum  { ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_NULL = 0, ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_FirstLine, ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_LastLine, ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_Region } ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e;

char* ezsigndocument_extract_text_v1_request_e_section_ToString(ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section);

ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e ezsigndocument_extract_text_v1_request_e_section_FromString(char* e_section);



typedef struct ezsigndocument_extract_text_v1_request_t {
    int i_page; //numeric
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section; //enum
    int i_x; //numeric
    int i_y; //numeric
    int i_width; //numeric
    int i_height; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_extract_text_v1_request_t;

__attribute__((deprecated)) ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_create(
    int i_page,
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section,
    int i_x,
    int i_y,
    int i_width,
    int i_height
);

void ezsigndocument_extract_text_v1_request_free(ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request);

ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_parseFromJSON(cJSON *ezsigndocument_extract_text_v1_requestJSON);

cJSON *ezsigndocument_extract_text_v1_request_convertToJSON(ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request);

#endif /* _ezsigndocument_extract_text_v1_request_H_ */

