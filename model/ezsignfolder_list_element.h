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

#include "field_e_ezsignfolder_completion.h"
#include "field_e_ezsignfolder_source.h"
#include "field_e_ezsignfolder_step.h"
#include "field_e_ezsignfoldertype_privacylevel.h"



typedef struct ezsignfolder_list_element_t {
    int *pki_ezsignfolder_id; //numeric
    int *fki_ezsignfoldertype_id; //numeric
    int *fki_ezsignbulksend_id; //numeric
    char *s_ezsignbulksend_description; // string
    int *fki_ezsignbulksendtransmission_id; //numeric
    char *s_ezsignbulksendtransmission_description; // string
    int *fki_ezsigntemplatepublic_id; //numeric
    char *s_ezsigntemplatepublic_description; // string
    ezmax_api_definition__full_field_e_ezsignfolder_source__e e_ezsignfolder_source; //referenced enum
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezsignfolder_description; // string
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step; //referenced enum
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion; //referenced enum
    char *dt_created_date; // string
    char *dt_ezsignfolder_delayedsenddate; // string
    char *dt_ezsignfolder_sentdate; // string
    char *dt_ezsignfolder_duedate; // string
    int *i_ezsigndocument; //numeric
    int *i_ezsigndocument_edm; //numeric
    int *i_ezsignsignature; //numeric
    int *i_ezsignsignature_signed; //numeric
    int *i_ezsignformfieldgroup; //numeric
    int *i_ezsignformfieldgroup_completed; //numeric
    int *b_ezsignform_hasdependencies; //boolean
    char *d_ezsignfolder_completedpercentage; // string
    char *d_ezsignfolder_formcompletedpercentage; // string
    char *d_ezsignfolder_signaturecompletedpercentage; // string
    char *dt_ezsignfolder_close; // string
    char *dt_ezsignfolder_archive; // string
    char *dt_ezsignfolder_dispose; // string
    int *b_ezsignfolder_signer; //boolean
    int *b_ezsignfolder_ismyown; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_list_element_t;

__attribute__((deprecated)) ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int *pki_ezsignfolder_id,
    int *fki_ezsignfoldertype_id,
    int *fki_ezsignbulksend_id,
    char *s_ezsignbulksend_description,
    int *fki_ezsignbulksendtransmission_id,
    char *s_ezsignbulksendtransmission_description,
    int *fki_ezsigntemplatepublic_id,
    char *s_ezsigntemplatepublic_description,
    ezmax_api_definition__full_field_e_ezsignfolder_source__e e_ezsignfolder_source,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion,
    char *dt_created_date,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_duedate,
    int *i_ezsigndocument,
    int *i_ezsigndocument_edm,
    int *i_ezsignsignature,
    int *i_ezsignsignature_signed,
    int *i_ezsignformfieldgroup,
    int *i_ezsignformfieldgroup_completed,
    int *b_ezsignform_hasdependencies,
    char *d_ezsignfolder_completedpercentage,
    char *d_ezsignfolder_formcompletedpercentage,
    char *d_ezsignfolder_signaturecompletedpercentage,
    char *dt_ezsignfolder_close,
    char *dt_ezsignfolder_archive,
    char *dt_ezsignfolder_dispose,
    int *b_ezsignfolder_signer,
    int *b_ezsignfolder_ismyown
);

void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element);

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON);

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element);

#endif /* _ezsignfolder_list_element_H_ */

