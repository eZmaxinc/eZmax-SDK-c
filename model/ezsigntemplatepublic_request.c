#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_request.h"



static ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_create_internal(
    int *pki_ezsigntemplatepublic_id,
    int *fki_ezsignfoldertype_id,
    int *fki_userlogintype_id,
    int *fki_ezsigntemplate_id,
    int *fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int *b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int *i_ezsigntemplatepublic_limit
    ) {
    ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_local_var = malloc(sizeof(ezsigntemplatepublic_request_t));
    if (!ezsigntemplatepublic_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepublic_request_local_var, 0, sizeof(ezsigntemplatepublic_request_t));
    ezsigntemplatepublic_request_local_var->_library_owned = 1;
    ezsigntemplatepublic_request_local_var->pki_ezsigntemplatepublic_id = pki_ezsigntemplatepublic_id;
    ezsigntemplatepublic_request_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepublic_request_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsigntemplatepublic_request_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepublic_request_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepublic_request_local_var->s_ezsigntemplatepublic_description = s_ezsigntemplatepublic_description;
    ezsigntemplatepublic_request_local_var->b_ezsigntemplatepublic_isactive = b_ezsigntemplatepublic_isactive;
    ezsigntemplatepublic_request_local_var->t_ezsigntemplatepublic_note = t_ezsigntemplatepublic_note;
    ezsigntemplatepublic_request_local_var->e_ezsigntemplatepublic_limittype = e_ezsigntemplatepublic_limittype;
    ezsigntemplatepublic_request_local_var->i_ezsigntemplatepublic_limit = i_ezsigntemplatepublic_limit;
    return ezsigntemplatepublic_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_create(
    int *pki_ezsigntemplatepublic_id,
    int *fki_ezsignfoldertype_id,
    int *fki_userlogintype_id,
    int *fki_ezsigntemplate_id,
    int *fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int *b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int *i_ezsigntemplatepublic_limit
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
    ezsigntemplatepublic_request_t *result = ezsigntemplatepublic_request_create_internal (
        pki_ezsigntemplatepublic_id_copy,
        fki_ezsignfoldertype_id_copy,
        fki_userlogintype_id_copy,
        fki_ezsigntemplate_id_copy,
        fki_ezsigntemplatepackage_id_copy,
        s_ezsigntemplatepublic_description,
        b_ezsigntemplatepublic_isactive_copy,
        t_ezsigntemplatepublic_note,
        e_ezsigntemplatepublic_limittype,
        i_ezsigntemplatepublic_limit_copy
        );
    if (!result) {
        free(pki_ezsigntemplatepublic_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_userlogintype_id_copy);
        free(fki_ezsigntemplate_id_copy);
        free(fki_ezsigntemplatepackage_id_copy);
        free(b_ezsigntemplatepublic_isactive_copy);
        free(i_ezsigntemplatepublic_limit_copy);
    }
    return result;
}

void ezsigntemplatepublic_request_free(ezsigntemplatepublic_request_t *ezsigntemplatepublic_request) {
    if(NULL == ezsigntemplatepublic_request){
        return ;
    }
    if(ezsigntemplatepublic_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id) {
        free(ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id);
        ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id = NULL;
    }
    if (ezsigntemplatepublic_request->fki_ezsignfoldertype_id) {
        free(ezsigntemplatepublic_request->fki_ezsignfoldertype_id);
        ezsigntemplatepublic_request->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsigntemplatepublic_request->fki_userlogintype_id) {
        free(ezsigntemplatepublic_request->fki_userlogintype_id);
        ezsigntemplatepublic_request->fki_userlogintype_id = NULL;
    }
    if (ezsigntemplatepublic_request->fki_ezsigntemplate_id) {
        free(ezsigntemplatepublic_request->fki_ezsigntemplate_id);
        ezsigntemplatepublic_request->fki_ezsigntemplate_id = NULL;
    }
    if (ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id) {
        free(ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id);
        ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsigntemplatepublic_request->s_ezsigntemplatepublic_description) {
        free(ezsigntemplatepublic_request->s_ezsigntemplatepublic_description);
        ezsigntemplatepublic_request->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive) {
        free(ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive);
        ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive = NULL;
    }
    if (ezsigntemplatepublic_request->t_ezsigntemplatepublic_note) {
        free(ezsigntemplatepublic_request->t_ezsigntemplatepublic_note);
        ezsigntemplatepublic_request->t_ezsigntemplatepublic_note = NULL;
    }
    if (ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit) {
        free(ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit);
        ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit = NULL;
    }
    free(ezsigntemplatepublic_request);
}

cJSON *ezsigntemplatepublic_request_convertToJSON(ezsigntemplatepublic_request_t *ezsigntemplatepublic_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id
    if(ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepublicID", *ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request->fki_ezsignfoldertype_id
    if (!ezsigntemplatepublic_request->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsigntemplatepublic_request->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_request->fki_userlogintype_id
    if (!ezsigntemplatepublic_request->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", *ezsigntemplatepublic_request->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_request->fki_ezsigntemplate_id
    if(ezsigntemplatepublic_request->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsigntemplatepublic_request->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id
    if(ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", *ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request->s_ezsigntemplatepublic_description
    if (!ezsigntemplatepublic_request->s_ezsigntemplatepublic_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicDescription", ezsigntemplatepublic_request->s_ezsigntemplatepublic_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive
    if (!ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepublicIsactive", *ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepublic_request->t_ezsigntemplatepublic_note
    if (!ezsigntemplatepublic_request->t_ezsigntemplatepublic_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatepublicNote", ezsigntemplatepublic_request->t_ezsigntemplatepublic_note) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype
    if (ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__NULL == ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype) {
        goto fail;
    }
    cJSON *e_ezsigntemplatepublic_limittype_local_JSON = field_e_ezsigntemplatepublic_limittype_convertToJSON(ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype);
    if(e_ezsigntemplatepublic_limittype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatepublicLimittype", e_ezsigntemplatepublic_limittype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit
    if (!ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimit", *ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_parseFromJSON(cJSON *ezsigntemplatepublic_requestJSON){

    ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id
    int *pki_ezsigntemplatepublic_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_request->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_request->fki_userlogintype_id
    int *fki_userlogintype_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_request->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id
    int *fki_ezsigntemplatepackage_id_local_var = NULL;

    char *s_ezsigntemplatepublic_description_local_str = NULL;

    // define the local variable for ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive
    int *b_ezsigntemplatepublic_isactive_local_var = NULL;

    char *t_ezsigntemplatepublic_note_local_str = NULL;

    // define the local variable for ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype_local_nonprim = 0;

    // define the local variable for ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit
    int *i_ezsigntemplatepublic_limit_local_var = NULL;

    // ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id
    cJSON *pki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "pkiEzsigntemplatepublicID");
    if (cJSON_IsNull(pki_ezsigntemplatepublic_id)) {
        pki_ezsigntemplatepublic_id = NULL;
    }
    if (pki_ezsigntemplatepublic_id) { 
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
    }

    // ezsigntemplatepublic_request->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiEzsignfoldertypeID");
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

    // ezsigntemplatepublic_request->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiUserlogintypeID");
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

    // ezsigntemplatepublic_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiEzsigntemplateID");
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

    // ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiEzsigntemplatepackageID");
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

    // ezsigntemplatepublic_request->s_ezsigntemplatepublic_description
    cJSON *s_ezsigntemplatepublic_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "sEzsigntemplatepublicDescription");
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

    // ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive
    cJSON *b_ezsigntemplatepublic_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "bEzsigntemplatepublicIsactive");
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

    // ezsigntemplatepublic_request->t_ezsigntemplatepublic_note
    cJSON *t_ezsigntemplatepublic_note = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "tEzsigntemplatepublicNote");
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

    // ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype
    cJSON *e_ezsigntemplatepublic_limittype = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "eEzsigntemplatepublicLimittype");
    if (cJSON_IsNull(e_ezsigntemplatepublic_limittype)) {
        e_ezsigntemplatepublic_limittype = NULL;
    }
    if (!e_ezsigntemplatepublic_limittype) {
        goto end;
    }

    
    e_ezsigntemplatepublic_limittype_local_nonprim = field_e_ezsigntemplatepublic_limittype_parseFromJSON(e_ezsigntemplatepublic_limittype); //custom

    // ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit
    cJSON *i_ezsigntemplatepublic_limit = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "iEzsigntemplatepublicLimit");
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


    if (s_ezsigntemplatepublic_description && !cJSON_IsNull(s_ezsigntemplatepublic_description)) s_ezsigntemplatepublic_description_local_str = strdup(s_ezsigntemplatepublic_description->valuestring);
    if (t_ezsigntemplatepublic_note && !cJSON_IsNull(t_ezsigntemplatepublic_note)) t_ezsigntemplatepublic_note_local_str = strdup(t_ezsigntemplatepublic_note->valuestring);

    ezsigntemplatepublic_request_local_var = ezsigntemplatepublic_request_create_internal (
        pki_ezsigntemplatepublic_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        fki_userlogintype_id_local_var,
        fki_ezsigntemplate_id_local_var,
        fki_ezsigntemplatepackage_id_local_var,
        s_ezsigntemplatepublic_description_local_str,
        b_ezsigntemplatepublic_isactive_local_var,
        t_ezsigntemplatepublic_note_local_str,
        e_ezsigntemplatepublic_limittype_local_nonprim,
        i_ezsigntemplatepublic_limit_local_var
        );

    if (!ezsigntemplatepublic_request_local_var) {
        goto end;
    }

    return ezsigntemplatepublic_request_local_var;
end:
    if (pki_ezsigntemplatepublic_id_local_var) {
        free(pki_ezsigntemplatepublic_id_local_var);
        pki_ezsigntemplatepublic_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
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
    return NULL;

}
