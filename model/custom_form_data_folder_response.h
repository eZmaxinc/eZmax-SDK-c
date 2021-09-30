/*
 * custom_form_data_folder_response.h
 *
 * A form Data Folder Object
 */

#ifndef _custom_form_data_folder_response_H_
#define _custom_form_data_folder_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_form_data_folder_response_t custom_form_data_folder_response_t;

#include "custom_form_data_document_response.h"



typedef struct custom_form_data_folder_response_t {
    int pki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string
    list_t *a_obj_form_data_document; //nonprimitive container

} custom_form_data_folder_response_t;

custom_form_data_folder_response_t *custom_form_data_folder_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_form_data_document
);

void custom_form_data_folder_response_free(custom_form_data_folder_response_t *custom_form_data_folder_response);

custom_form_data_folder_response_t *custom_form_data_folder_response_parseFromJSON(cJSON *custom_form_data_folder_responseJSON);

cJSON *custom_form_data_folder_response_convertToJSON(custom_form_data_folder_response_t *custom_form_data_folder_response);

#endif /* _custom_form_data_folder_response_H_ */

