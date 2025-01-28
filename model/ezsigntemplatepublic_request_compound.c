#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_request_compound.h"



static ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound_create_internal(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit
    ) {
    ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound_local_var = malloc(sizeof(ezsigntemplatepublic_request_compound_t));
    if (!ezsigntemplatepublic_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_request_compound_local_var->pki_ezsigntemplatepublic_id = pki_ezsigntemplatepublic_id;
    ezsigntemplatepublic_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepublic_request_compound_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsigntemplatepublic_request_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepublic_request_compound_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepublic_request_compound_local_var->s_ezsigntemplatepublic_description = s_ezsigntemplatepublic_description;
    ezsigntemplatepublic_request_compound_local_var->b_ezsigntemplatepublic_isactive = b_ezsigntemplatepublic_isactive;
    ezsigntemplatepublic_request_compound_local_var->t_ezsigntemplatepublic_note = t_ezsigntemplatepublic_note;
    ezsigntemplatepublic_request_compound_local_var->e_ezsigntemplatepublic_limittype = e_ezsigntemplatepublic_limittype;
    ezsigntemplatepublic_request_compound_local_var->i_ezsigntemplatepublic_limit = i_ezsigntemplatepublic_limit;

    ezsigntemplatepublic_request_compound_local_var->_library_owned = 1;
    return ezsigntemplatepublic_request_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit
    ) {
    return ezsigntemplatepublic_request_compound_create_internal (
        pki_ezsigntemplatepublic_id,
        fki_ezsignfoldertype_id,
        fki_userlogintype_id,
        fki_ezsigntemplate_id,
        fki_ezsigntemplatepackage_id,
        s_ezsigntemplatepublic_description,
        b_ezsigntemplatepublic_isactive,
        t_ezsigntemplatepublic_note,
        e_ezsigntemplatepublic_limittype,
        i_ezsigntemplatepublic_limit
        );
}

void ezsigntemplatepublic_request_compound_free(ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound) {
    if(NULL == ezsigntemplatepublic_request_compound){
        return ;
    }
    if(ezsigntemplatepublic_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description) {
        free(ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description);
        ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note) {
        free(ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note);
        ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note = NULL;
    }
    free(ezsigntemplatepublic_request_compound);
}

cJSON *ezsigntemplatepublic_request_compound_convertToJSON(ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_request_compound->pki_ezsigntemplatepublic_id
    if(ezsigntemplatepublic_request_compound->pki_ezsigntemplatepublic_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepublicID", ezsigntemplatepublic_request_compound->pki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request_compound->fki_ezsignfoldertype_id
    if (!ezsigntemplatepublic_request_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepublic_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_request_compound->fki_userlogintype_id
    if (!ezsigntemplatepublic_request_compound->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsigntemplatepublic_request_compound->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_request_compound->fki_ezsigntemplate_id
    if(ezsigntemplatepublic_request_compound->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepublic_request_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request_compound->fki_ezsigntemplatepackage_id
    if(ezsigntemplatepublic_request_compound->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepublic_request_compound->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description
    if (!ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicDescription", ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_request_compound->b_ezsigntemplatepublic_isactive
    if (!ezsigntemplatepublic_request_compound->b_ezsigntemplatepublic_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepublicIsactive", ezsigntemplatepublic_request_compound->b_ezsigntemplatepublic_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note
    if (!ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatepublicNote", ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_request_compound->e_ezsigntemplatepublic_limittype
    if (ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__NULL == ezsigntemplatepublic_request_compound->e_ezsigntemplatepublic_limittype) {
        goto fail;
    }
    cJSON *e_ezsigntemplatepublic_limittype_local_JSON = field_e_ezsigntemplatepublic_limittype_convertToJSON(ezsigntemplatepublic_request_compound->e_ezsigntemplatepublic_limittype);
    if(e_ezsigntemplatepublic_limittype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatepublicLimittype", e_ezsigntemplatepublic_limittype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatepublic_request_compound->i_ezsigntemplatepublic_limit
    if (!ezsigntemplatepublic_request_compound->i_ezsigntemplatepublic_limit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimit", ezsigntemplatepublic_request_compound->i_ezsigntemplatepublic_limit) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound_parseFromJSON(cJSON *ezsigntemplatepublic_request_compoundJSON){

    ezsigntemplatepublic_request_compound_t *ezsigntemplatepublic_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_request_compound->e_ezsigntemplatepublic_limittype
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype_local_nonprim = 0;

    // ezsigntemplatepublic_request_compound->pki_ezsigntemplatepublic_id
    cJSON *pki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "pkiEzsigntemplatepublicID");
    if (cJSON_IsNull(pki_ezsigntemplatepublic_id)) {
        pki_ezsigntemplatepublic_id = NULL;
    }
    if (pki_ezsigntemplatepublic_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepublic_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "fkiEzsignfoldertypeID");
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

    // ezsigntemplatepublic_request_compound->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "fkiUserlogintypeID");
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

    // ezsigntemplatepublic_request_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "fkiEzsigntemplateID");
    if (cJSON_IsNull(fki_ezsigntemplate_id)) {
        fki_ezsigntemplate_id = NULL;
    }
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_request_compound->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_request_compound->s_ezsigntemplatepublic_description
    cJSON *s_ezsigntemplatepublic_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "sEzsigntemplatepublicDescription");
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

    // ezsigntemplatepublic_request_compound->b_ezsigntemplatepublic_isactive
    cJSON *b_ezsigntemplatepublic_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "bEzsigntemplatepublicIsactive");
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

    // ezsigntemplatepublic_request_compound->t_ezsigntemplatepublic_note
    cJSON *t_ezsigntemplatepublic_note = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "tEzsigntemplatepublicNote");
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

    // ezsigntemplatepublic_request_compound->e_ezsigntemplatepublic_limittype
    cJSON *e_ezsigntemplatepublic_limittype = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "eEzsigntemplatepublicLimittype");
    if (cJSON_IsNull(e_ezsigntemplatepublic_limittype)) {
        e_ezsigntemplatepublic_limittype = NULL;
    }
    if (!e_ezsigntemplatepublic_limittype) {
        goto end;
    }

    
    e_ezsigntemplatepublic_limittype_local_nonprim = field_e_ezsigntemplatepublic_limittype_parseFromJSON(e_ezsigntemplatepublic_limittype); //custom

    // ezsigntemplatepublic_request_compound->i_ezsigntemplatepublic_limit
    cJSON *i_ezsigntemplatepublic_limit = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_request_compoundJSON, "iEzsigntemplatepublicLimit");
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


    ezsigntemplatepublic_request_compound_local_var = ezsigntemplatepublic_request_compound_create_internal (
        pki_ezsigntemplatepublic_id ? pki_ezsigntemplatepublic_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_userlogintype_id->valuedouble,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        strdup(s_ezsigntemplatepublic_description->valuestring),
        b_ezsigntemplatepublic_isactive->valueint,
        strdup(t_ezsigntemplatepublic_note->valuestring),
        e_ezsigntemplatepublic_limittype_local_nonprim,
        i_ezsigntemplatepublic_limit->valuedouble
        );

    return ezsigntemplatepublic_request_compound_local_var;
end:
    if (e_ezsigntemplatepublic_limittype_local_nonprim) {
        e_ezsigntemplatepublic_limittype_local_nonprim = 0;
    }
    return NULL;

}
