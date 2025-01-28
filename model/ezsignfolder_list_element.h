/*
 * ezsignfolder_list_element.h
 *
 * An Ezsignfolder List Element
 */

#ifndef _ezsignfolder_list_element_H_
#define _ezsignfolder_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_list_element_t ezsignfolder_list_element_t;

#include "field_e_ezsignfolder_step.h"
#include "field_e_ezsignfoldertype_privacylevel.h"



typedef struct ezsignfolder_list_element_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezsignfolder_description; // string
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step; //referenced enum
    char *dt_created_date; // string
    char *dt_ezsignfolder_delayedsenddate; // string
    char *dt_ezsignfolder_sentdate; // string
    char *dt_ezsignfolder_duedate; // string
    int i_ezsigndocument; //numeric
    int i_ezsigndocument_edm; //numeric
    int i_ezsignsignature; //numeric
    int i_ezsignsignature_signed; //numeric
    int i_ezsignformfieldgroup; //numeric
    int i_ezsignformfieldgroup_completed; //numeric
    int b_ezsignform_hasdependencies; //boolean
    char *d_ezsignfolder_completedpercentage; // string
    char *d_ezsignfolder_formcompletedpercentage; // string
    char *d_ezsignfolder_signaturecompletedpercentage; // string
    int b_ezsignfolder_signer; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_list_element_t;

__attribute__((deprecated)) ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    char *dt_created_date,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_duedate,
    int i_ezsigndocument,
    int i_ezsigndocument_edm,
    int i_ezsignsignature,
    int i_ezsignsignature_signed,
    int i_ezsignformfieldgroup,
    int i_ezsignformfieldgroup_completed,
    int b_ezsignform_hasdependencies,
    char *d_ezsignfolder_completedpercentage,
    char *d_ezsignfolder_formcompletedpercentage,
    char *d_ezsignfolder_signaturecompletedpercentage,
    int b_ezsignfolder_signer
);

void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element);

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON);

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element);

#endif /* _ezsignfolder_list_element_H_ */

