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

// Enum  for ezsignfolder_list_element

typedef enum  { ezmax_api_definition__full_ezsignfolder_list_element__NULL = 0, ezmax_api_definition__full_ezsignfolder_list_element__User, ezmax_api_definition__full_ezsignfolder_list_element__Usergroup } ezmax_api_definition__full_ezsignfolder_list_element__e;

char* ezsignfolder_list_element_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfolder_list_element__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignfolder_list_element__e ezsignfolder_list_element_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);

// Enum  for ezsignfolder_list_element

typedef enum  { ezmax_api_definition__full_ezsignfolder_list_element__NULL = 0, ezmax_api_definition__full_ezsignfolder_list_element__Unsent, ezmax_api_definition__full_ezsignfolder_list_element__PendingSend, ezmax_api_definition__full_ezsignfolder_list_element__Sent, ezmax_api_definition__full_ezsignfolder_list_element__PartiallySigned, ezmax_api_definition__full_ezsignfolder_list_element__Expired, ezmax_api_definition__full_ezsignfolder_list_element__Completed, ezmax_api_definition__full_ezsignfolder_list_element__Archived, ezmax_api_definition__full_ezsignfolder_list_element__Disposed } ezmax_api_definition__full_ezsignfolder_list_element__e;

char* ezsignfolder_list_element_e_ezsignfolder_step_ToString(ezmax_api_definition__full_ezsignfolder_list_element__e e_ezsignfolder_step);

ezmax_api_definition__full_ezsignfolder_list_element__e ezsignfolder_list_element_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct ezsignfolder_list_element_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezsignfolder_description; // string
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
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

} ezsignfolder_list_element_t;

ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
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

