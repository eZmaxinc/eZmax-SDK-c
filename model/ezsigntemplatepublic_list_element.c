#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_list_element.h"



static ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_create_internal(
    int *pki_ezsigntemplatepublic_id,
    int *fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int *fki_userlogintype_id,
    int *fki_ezsigntemplate_id,
    int *fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int *b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int *i_ezsigntemplatepublic_limit,
    int *i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    int *i_ezsignfolder,
    int *i_ezsigndocument,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription
    ) {
    ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_local_var = malloc(sizeof(ezsigntemplatepublic_list_element_t));
    if (!ezsigntemplatepublic_list_element_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepublic_list_element_local_var, 0, sizeof(ezsigntemplatepublic_list_element_t));
    ezsigntemplatepublic_list_element_local_var->_library_owned = 1;
    ezsigntemplatepublic_list_element_local_var->pki_ezsigntemplatepublic_id = pki_ezsigntemplatepublic_id;
    ezsigntemplatepublic_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepublic_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepublic_list_element_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsigntemplatepublic_list_element_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepublic_list_element_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepublic_list_element_local_var->s_ezsigntemplatepublic_description = s_ezsigntemplatepublic_description;
    ezsigntemplatepublic_list_element_local_var->b_ezsigntemplatepublic_isactive = b_ezsigntemplatepublic_isactive;
    ezsigntemplatepublic_list_element_local_var->t_ezsigntemplatepublic_note = t_ezsigntemplatepublic_note;
    ezsigntemplatepublic_list_element_local_var->e_ezsigntemplatepublic_limittype = e_ezsigntemplatepublic_limittype;
    ezsigntemplatepublic_list_element_local_var->i_ezsigntemplatepublic_limit = i_ezsigntemplatepublic_limit;
    ezsigntemplatepublic_list_element_local_var->i_ezsigntemplatepublic_limitexceeded = i_ezsigntemplatepublic_limitexceeded;
    ezsigntemplatepublic_list_element_local_var->dt_ezsigntemplatepublic_limitexceededsince = dt_ezsigntemplatepublic_limitexceededsince;
    ezsigntemplatepublic_list_element_local_var->i_ezsignfolder = i_ezsignfolder;
    ezsigntemplatepublic_list_element_local_var->i_ezsigndocument = i_ezsigndocument;
    ezsigntemplatepublic_list_element_local_var->s_ezsigntemplatepublic_ezsigntemplatedescription = s_ezsigntemplatepublic_ezsigntemplatedescription;
    return ezsigntemplatepublic_list_element_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_create(
    int *pki_ezsigntemplatepublic_id,
    int *fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int *fki_userlogintype_id,
    int *fki_ezsigntemplate_id,
    int *fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int *b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int *i_ezsigntemplatepublic_limit,
    int *i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    int *i_ezsignfolder,
    int *i_ezsigndocument,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription
    ) {
    int *pki_ezsigntemplatepublic_id_copy = NULL;
    if (pki_ezsigntemplatepublic_id) {
        pki_ezsigntemplatepublic_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatepublic_id_copy) *pki_ezsigntemplatepublic_id_copy = *pki_ezsigntemplatepublic_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *fki_userlogintype_id_copy = NULL;
    if (fki_userlogintype_id) {
        fki_userlogintype_id_copy = malloc(sizeof(int));
        if (fki_userlogintype_id_copy) *fki_userlogintype_id_copy = *fki_userlogintype_id;
    }
    int *fki_ezsigntemplate_id_copy = NULL;
    if (fki_ezsigntemplate_id) {
        fki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplate_id_copy) *fki_ezsigntemplate_id_copy = *fki_ezsigntemplate_id;
    }
    int *fki_ezsigntemplatepackage_id_copy = NULL;
    if (fki_ezsigntemplatepackage_id) {
        fki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatepackage_id_copy) *fki_ezsigntemplatepackage_id_copy = *fki_ezsigntemplatepackage_id;
    }
    int *b_ezsigntemplatepublic_isactive_copy = NULL;
    if (b_ezsigntemplatepublic_isactive) {
        b_ezsigntemplatepublic_isactive_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepublic_isactive_copy) *b_ezsigntemplatepublic_isactive_copy = *b_ezsigntemplatepublic_isactive;
    }
    int *i_ezsigntemplatepublic_limit_copy = NULL;
    if (i_ezsigntemplatepublic_limit) {
        i_ezsigntemplatepublic_limit_copy = malloc(sizeof(int));
        if (i_ezsigntemplatepublic_limit_copy) *i_ezsigntemplatepublic_limit_copy = *i_ezsigntemplatepublic_limit;
    }
    int *i_ezsigntemplatepublic_limitexceeded_copy = NULL;
    if (i_ezsigntemplatepublic_limitexceeded) {
        i_ezsigntemplatepublic_limitexceeded_copy = malloc(sizeof(int));
        if (i_ezsigntemplatepublic_limitexceeded_copy) *i_ezsigntemplatepublic_limitexceeded_copy = *i_ezsigntemplatepublic_limitexceeded;
    }
    int *i_ezsignfolder_copy = NULL;
    if (i_ezsignfolder) {
        i_ezsignfolder_copy = malloc(sizeof(int));
        if (i_ezsignfolder_copy) *i_ezsignfolder_copy = *i_ezsignfolder;
    }
    int *i_ezsigndocument_copy = NULL;
    if (i_ezsigndocument) {
        i_ezsigndocument_copy = malloc(sizeof(int));
        if (i_ezsigndocument_copy) *i_ezsigndocument_copy = *i_ezsigndocument;
    }
    ezsigntemplatepublic_list_element_t *result = ezsigntemplatepublic_list_element_create_internal (
        pki_ezsigntemplatepublic_id_copy,
        fki_ezsignfoldertype_id_copy,
        s_ezsignfoldertype_name_x,
        fki_userlogintype_id_copy,
        fki_ezsigntemplate_id_copy,
        fki_ezsigntemplatepackage_id_copy,
        s_ezsigntemplatepublic_description,
        b_ezsigntemplatepublic_isactive_copy,
        t_ezsigntemplatepublic_note,
        e_ezsigntemplatepublic_limittype,
        i_ezsigntemplatepublic_limit_copy,
        i_ezsigntemplatepublic_limitexceeded_copy,
        dt_ezsigntemplatepublic_limitexceededsince,
        i_ezsignfolder_copy,
        i_ezsigndocument_copy,
        s_ezsigntemplatepublic_ezsigntemplatedescription
        );
    if (!result) {
        free(pki_ezsigntemplatepublic_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_userlogintype_id_copy);
        free(fki_ezsigntemplate_id_copy);
        free(fki_ezsigntemplatepackage_id_copy);
        free(b_ezsigntemplatepublic_isactive_copy);
        free(i_ezsigntemplatepublic_limit_copy);
        free(i_ezsigntemplatepublic_limitexceeded_copy);
        free(i_ezsignfolder_copy);
        free(i_ezsigndocument_copy);
    }
    return result;
}

void ezsigntemplatepublic_list_element_free(ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element) {
    if(NULL == ezsigntemplatepublic_list_element){
        return ;
    }
    if(ezsigntemplatepublic_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id) {
        free(ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id);
        ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id = NULL;
    }
    if (ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id) {
        free(ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id);
        ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x);
        ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplatepublic_list_element->fki_userlogintype_id) {
        free(ezsigntemplatepublic_list_element->fki_userlogintype_id);
        ezsigntemplatepublic_list_element->fki_userlogintype_id = NULL;
    }
    if (ezsigntemplatepublic_list_element->fki_ezsigntemplate_id) {
        free(ezsigntemplatepublic_list_element->fki_ezsigntemplate_id);
        ezsigntemplatepublic_list_element->fki_ezsigntemplate_id = NULL;
    }
    if (ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id) {
        free(ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id);
        ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description) {
        free(ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description);
        ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive) {
        free(ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive);
        ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive = NULL;
    }
    if (ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note) {
        free(ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note);
        ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note = NULL;
    }
    if (ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit) {
        free(ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit);
        ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit = NULL;
    }
    if (ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded) {
        free(ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded);
        ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded = NULL;
    }
    if (ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince) {
        free(ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince);
        ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince = NULL;
    }
    if (ezsigntemplatepublic_list_element->i_ezsignfolder) {
        free(ezsigntemplatepublic_list_element->i_ezsignfolder);
        ezsigntemplatepublic_list_element->i_ezsignfolder = NULL;
    }
    if (ezsigntemplatepublic_list_element->i_ezsigndocument) {
        free(ezsigntemplatepublic_list_element->i_ezsigndocument);
        ezsigntemplatepublic_list_element->i_ezsigndocument = NULL;
    }
    if (ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription) {
        free(ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription);
        ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription = NULL;
    }
    free(ezsigntemplatepublic_list_element);
}

cJSON *ezsigntemplatepublic_list_element_convertToJSON(ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id
    if (!ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepublicID", *ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id
    if (!ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x
    if (!ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_list_element->fki_userlogintype_id
    if (!ezsigntemplatepublic_list_element->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", *ezsigntemplatepublic_list_element->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->fki_ezsigntemplate_id
    if(ezsigntemplatepublic_list_element->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsigntemplatepublic_list_element->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id
    if(ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", *ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description
    if (!ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicDescription", ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive
    if (!ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepublicIsactive", *ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note
    if (!ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatepublicNote", ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_list_element->e_ezsigntemplatepublic_limittype
    if (ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__NULL == ezsigntemplatepublic_list_element->e_ezsigntemplatepublic_limittype) {
        goto fail;
    }
    cJSON *e_ezsigntemplatepublic_limittype_local_JSON = field_e_ezsigntemplatepublic_limittype_convertToJSON(ezsigntemplatepublic_list_element->e_ezsigntemplatepublic_limittype);
    if(e_ezsigntemplatepublic_limittype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatepublicLimittype", e_ezsigntemplatepublic_limittype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit
    if (!ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimit", *ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded
    if (!ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimitexceeded", *ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince
    if (!ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigntemplatepublicLimitexceededsince", ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_list_element->i_ezsignfolder
    if (!ezsigntemplatepublic_list_element->i_ezsignfolder) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolder", *ezsigntemplatepublic_list_element->i_ezsignfolder) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->i_ezsigndocument
    if (!ezsigntemplatepublic_list_element->i_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", *ezsigntemplatepublic_list_element->i_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription
    if (!ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicEzsigntemplatedescription", ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_parseFromJSON(cJSON *ezsigntemplatepublic_list_elementJSON){

    ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id
    int *pki_ezsigntemplatepublic_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->fki_userlogintype_id
    int *fki_userlogintype_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id
    int *fki_ezsigntemplatepackage_id_local_var = NULL;

    char *s_ezsigntemplatepublic_description_local_str = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive
    int *b_ezsigntemplatepublic_isactive_local_var = NULL;

    char *t_ezsigntemplatepublic_note_local_str = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->e_ezsigntemplatepublic_limittype
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype_local_nonprim = 0;

    // define the local variable for ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit
    int *i_ezsigntemplatepublic_limit_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded
    int *i_ezsigntemplatepublic_limitexceeded_local_var = NULL;

    char *dt_ezsigntemplatepublic_limitexceededsince_local_str = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->i_ezsignfolder
    int *i_ezsignfolder_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_list_element->i_ezsigndocument
    int *i_ezsigndocument_local_var = NULL;

    char *s_ezsigntemplatepublic_ezsigntemplatedescription_local_str = NULL;

    // ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id
    cJSON *pki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "pkiEzsigntemplatepublicID");
    if (cJSON_IsNull(pki_ezsigntemplatepublic_id)) {
        pki_ezsigntemplatepublic_id = NULL;
    }
    if (!pki_ezsigntemplatepublic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepublic_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatepublic_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatepublic_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatepublic_id_local_var = pki_ezsigntemplatepublic_id->valuedouble;

    // ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldertype_id_local_var = fki_ezsignfoldertype_id->valuedouble;

    // ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_list_element->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "fkiUserlogintypeID");
    if (cJSON_IsNull(fki_userlogintype_id)) {
        fki_userlogintype_id = NULL;
    }
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }
    fki_userlogintype_id_local_var = malloc(sizeof(int));
    if(!fki_userlogintype_id_local_var)
    {
        goto end;
    }
    *fki_userlogintype_id_local_var = fki_userlogintype_id->valuedouble;

    // ezsigntemplatepublic_list_element->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "fkiEzsigntemplateID");
    if (cJSON_IsNull(fki_ezsigntemplate_id)) {
        fki_ezsigntemplate_id = NULL;
    }
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplate_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplate_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplate_id_local_var = fki_ezsigntemplate_id->valuedouble;
    }

    // ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatepackage_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatepackage_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatepackage_id_local_var = fki_ezsigntemplatepackage_id->valuedouble;
    }

    // ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description
    cJSON *s_ezsigntemplatepublic_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "sEzsigntemplatepublicDescription");
    if (cJSON_IsNull(s_ezsigntemplatepublic_description)) {
        s_ezsigntemplatepublic_description = NULL;
    }
    if (!s_ezsigntemplatepublic_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_description))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive
    cJSON *b_ezsigntemplatepublic_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "bEzsigntemplatepublicIsactive");
    if (cJSON_IsNull(b_ezsigntemplatepublic_isactive)) {
        b_ezsigntemplatepublic_isactive = NULL;
    }
    if (!b_ezsigntemplatepublic_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepublic_isactive))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepublic_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepublic_isactive_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepublic_isactive_local_var = b_ezsigntemplatepublic_isactive->valueint;

    // ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note
    cJSON *t_ezsigntemplatepublic_note = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "tEzsigntemplatepublicNote");
    if (cJSON_IsNull(t_ezsigntemplatepublic_note)) {
        t_ezsigntemplatepublic_note = NULL;
    }
    if (!t_ezsigntemplatepublic_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsigntemplatepublic_note))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_list_element->e_ezsigntemplatepublic_limittype
    cJSON *e_ezsigntemplatepublic_limittype = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "eEzsigntemplatepublicLimittype");
    if (cJSON_IsNull(e_ezsigntemplatepublic_limittype)) {
        e_ezsigntemplatepublic_limittype = NULL;
    }
    if (!e_ezsigntemplatepublic_limittype) {
        goto end;
    }

    
    e_ezsigntemplatepublic_limittype_local_nonprim = field_e_ezsigntemplatepublic_limittype_parseFromJSON(e_ezsigntemplatepublic_limittype); //custom

    // ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit
    cJSON *i_ezsigntemplatepublic_limit = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "iEzsigntemplatepublicLimit");
    if (cJSON_IsNull(i_ezsigntemplatepublic_limit)) {
        i_ezsigntemplatepublic_limit = NULL;
    }
    if (!i_ezsigntemplatepublic_limit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepublic_limit))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatepublic_limit_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatepublic_limit_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatepublic_limit_local_var = i_ezsigntemplatepublic_limit->valuedouble;

    // ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded
    cJSON *i_ezsigntemplatepublic_limitexceeded = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "iEzsigntemplatepublicLimitexceeded");
    if (cJSON_IsNull(i_ezsigntemplatepublic_limitexceeded)) {
        i_ezsigntemplatepublic_limitexceeded = NULL;
    }
    if (!i_ezsigntemplatepublic_limitexceeded) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepublic_limitexceeded))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatepublic_limitexceeded_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatepublic_limitexceeded_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatepublic_limitexceeded_local_var = i_ezsigntemplatepublic_limitexceeded->valuedouble;

    // ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince
    cJSON *dt_ezsigntemplatepublic_limitexceededsince = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "dtEzsigntemplatepublicLimitexceededsince");
    if (cJSON_IsNull(dt_ezsigntemplatepublic_limitexceededsince)) {
        dt_ezsigntemplatepublic_limitexceededsince = NULL;
    }
    if (!dt_ezsigntemplatepublic_limitexceededsince) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigntemplatepublic_limitexceededsince))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_list_element->i_ezsignfolder
    cJSON *i_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "iEzsignfolder");
    if (cJSON_IsNull(i_ezsignfolder)) {
        i_ezsignfolder = NULL;
    }
    if (!i_ezsignfolder) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder))
    {
    goto end; //Numeric
    }
    i_ezsignfolder_local_var = malloc(sizeof(int));
    if(!i_ezsignfolder_local_var)
    {
        goto end;
    }
    *i_ezsignfolder_local_var = i_ezsignfolder->valuedouble;

    // ezsigntemplatepublic_list_element->i_ezsigndocument
    cJSON *i_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "iEzsigndocument");
    if (cJSON_IsNull(i_ezsigndocument)) {
        i_ezsigndocument = NULL;
    }
    if (!i_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_local_var = i_ezsigndocument->valuedouble;

    // ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_ezsigntemplatedescription
    cJSON *s_ezsigntemplatepublic_ezsigntemplatedescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_list_elementJSON, "sEzsigntemplatepublicEzsigntemplatedescription");
    if (cJSON_IsNull(s_ezsigntemplatepublic_ezsigntemplatedescription)) {
        s_ezsigntemplatepublic_ezsigntemplatedescription = NULL;
    }
    if (!s_ezsigntemplatepublic_ezsigntemplatedescription) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_ezsigntemplatedescription))
    {
    goto end; //String
    }


    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);
    if (s_ezsigntemplatepublic_description && !cJSON_IsNull(s_ezsigntemplatepublic_description)) s_ezsigntemplatepublic_description_local_str = strdup(s_ezsigntemplatepublic_description->valuestring);
    if (t_ezsigntemplatepublic_note && !cJSON_IsNull(t_ezsigntemplatepublic_note)) t_ezsigntemplatepublic_note_local_str = strdup(t_ezsigntemplatepublic_note->valuestring);
    if (dt_ezsigntemplatepublic_limitexceededsince && !cJSON_IsNull(dt_ezsigntemplatepublic_limitexceededsince)) dt_ezsigntemplatepublic_limitexceededsince_local_str = strdup(dt_ezsigntemplatepublic_limitexceededsince->valuestring);
    if (s_ezsigntemplatepublic_ezsigntemplatedescription && !cJSON_IsNull(s_ezsigntemplatepublic_ezsigntemplatedescription)) s_ezsigntemplatepublic_ezsigntemplatedescription_local_str = strdup(s_ezsigntemplatepublic_ezsigntemplatedescription->valuestring);

    ezsigntemplatepublic_list_element_local_var = ezsigntemplatepublic_list_element_create_internal (
        pki_ezsigntemplatepublic_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        s_ezsignfoldertype_name_x_local_str,
        fki_userlogintype_id_local_var,
        fki_ezsigntemplate_id_local_var,
        fki_ezsigntemplatepackage_id_local_var,
        s_ezsigntemplatepublic_description_local_str,
        b_ezsigntemplatepublic_isactive_local_var,
        t_ezsigntemplatepublic_note_local_str,
        e_ezsigntemplatepublic_limittype_local_nonprim,
        i_ezsigntemplatepublic_limit_local_var,
        i_ezsigntemplatepublic_limitexceeded_local_var,
        dt_ezsigntemplatepublic_limitexceededsince_local_str,
        i_ezsignfolder_local_var,
        i_ezsigndocument_local_var,
        s_ezsigntemplatepublic_ezsigntemplatedescription_local_str
        );

    if (!ezsigntemplatepublic_list_element_local_var) {
        goto end;
    }

    return ezsigntemplatepublic_list_element_local_var;
end:
    if (pki_ezsigntemplatepublic_id_local_var) {
        free(pki_ezsigntemplatepublic_id_local_var);
        pki_ezsigntemplatepublic_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (fki_userlogintype_id_local_var) {
        free(fki_userlogintype_id_local_var);
        fki_userlogintype_id_local_var = NULL;
    }
    if (fki_ezsigntemplate_id_local_var) {
        free(fki_ezsigntemplate_id_local_var);
        fki_ezsigntemplate_id_local_var = NULL;
    }
    if (fki_ezsigntemplatepackage_id_local_var) {
        free(fki_ezsigntemplatepackage_id_local_var);
        fki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (s_ezsigntemplatepublic_description_local_str) {
        free(s_ezsigntemplatepublic_description_local_str);
        s_ezsigntemplatepublic_description_local_str = NULL;
    }
    if (b_ezsigntemplatepublic_isactive_local_var) {
        free(b_ezsigntemplatepublic_isactive_local_var);
        b_ezsigntemplatepublic_isactive_local_var = NULL;
    }
    if (t_ezsigntemplatepublic_note_local_str) {
        free(t_ezsigntemplatepublic_note_local_str);
        t_ezsigntemplatepublic_note_local_str = NULL;
    }
    if (e_ezsigntemplatepublic_limittype_local_nonprim) {
        e_ezsigntemplatepublic_limittype_local_nonprim = 0;
    }
    if (i_ezsigntemplatepublic_limit_local_var) {
        free(i_ezsigntemplatepublic_limit_local_var);
        i_ezsigntemplatepublic_limit_local_var = NULL;
    }
    if (i_ezsigntemplatepublic_limitexceeded_local_var) {
        free(i_ezsigntemplatepublic_limitexceeded_local_var);
        i_ezsigntemplatepublic_limitexceeded_local_var = NULL;
    }
    if (dt_ezsigntemplatepublic_limitexceededsince_local_str) {
        free(dt_ezsigntemplatepublic_limitexceededsince_local_str);
        dt_ezsigntemplatepublic_limitexceededsince_local_str = NULL;
    }
    if (i_ezsignfolder_local_var) {
        free(i_ezsignfolder_local_var);
        i_ezsignfolder_local_var = NULL;
    }
    if (i_ezsigndocument_local_var) {
        free(i_ezsigndocument_local_var);
        i_ezsigndocument_local_var = NULL;
    }
    if (s_ezsigntemplatepublic_ezsigntemplatedescription_local_str) {
        free(s_ezsigntemplatepublic_ezsigntemplatedescription_local_str);
        s_ezsigntemplatepublic_ezsigntemplatedescription_local_str = NULL;
    }
    return NULL;

}
