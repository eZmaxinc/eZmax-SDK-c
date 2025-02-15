/*
 * custom_ezsignsignaturestatus_response.h
 *
 * A Ezsignsignaturestatus Object and children to create a complete structure
 */

#ifndef _custom_ezsignsignaturestatus_response_H_
#define _custom_ezsignsignaturestatus_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignsignaturestatus_response_t custom_ezsignsignaturestatus_response_t;


// Enum EEZSIGNSIGNATURESTATUSSTEPTYPE for custom_ezsignsignaturestatus_response

typedef enum  { ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_NULL = 0, ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_Form, ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_Signature } ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e;

char* custom_ezsignsignaturestatus_response_e_ezsignsignaturestatus_steptype_ToString(ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e e_ezsignsignaturestatus_steptype);

ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e custom_ezsignsignaturestatus_response_e_ezsignsignaturestatus_steptype_FromString(char* e_ezsignsignaturestatus_steptype);



typedef struct custom_ezsignsignaturestatus_response_t {
    ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e e_ezsignsignaturestatus_steptype; //enum
    int i_ezsignsignaturestatus_step; //numeric
    int i_ezsignsignaturestatus_total; //numeric
    int i_ezsignsignaturestatus_signed; //numeric
    int i_ezsignsignaturestatus_conditional; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignsignaturestatus_response_t;

__attribute__((deprecated)) custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response_create(
    ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e e_ezsignsignaturestatus_steptype,
    int i_ezsignsignaturestatus_step,
    int i_ezsignsignaturestatus_total,
    int i_ezsignsignaturestatus_signed,
    int i_ezsignsignaturestatus_conditional
);

void custom_ezsignsignaturestatus_response_free(custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response);

custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response_parseFromJSON(cJSON *custom_ezsignsignaturestatus_responseJSON);

cJSON *custom_ezsignsignaturestatus_response_convertToJSON(custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response);

#endif /* _custom_ezsignsignaturestatus_response_H_ */

