/*
 * custom_form_data_ezsignformfieldgroup_response.h
 *
 * An FormDataSigner-&gt;Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef _custom_form_data_ezsignformfieldgroup_response_H_
#define _custom_form_data_ezsignformfieldgroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_form_data_ezsignformfieldgroup_response_t custom_form_data_ezsignformfieldgroup_response_t;

#include "custom_form_data_ezsignformfield_response.h"



typedef struct custom_form_data_ezsignformfieldgroup_response_t {
    char *s_ezsignformfieldgroup_label; // string
    list_t *a_obj_ezsignformfield; //nonprimitive container

} custom_form_data_ezsignformfieldgroup_response_t;

custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_create(
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
);

void custom_form_data_ezsignformfieldgroup_response_free(custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response);

custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_parseFromJSON(cJSON *custom_form_data_ezsignformfieldgroup_responseJSON);

cJSON *custom_form_data_ezsignformfieldgroup_response_convertToJSON(custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response);

#endif /* _custom_form_data_ezsignformfieldgroup_response_H_ */

