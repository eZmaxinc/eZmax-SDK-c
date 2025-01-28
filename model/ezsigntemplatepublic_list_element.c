#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_list_element.h"



static ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_create_internal(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit,
    int i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    int i_ezsignfolder,
    int i_ezsigndocument,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription
    ) {
    ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_local_var = malloc(sizeof(ezsigntemplatepublic_list_element_t));
    if (!ezsigntemplatepublic_list_element_local_var) {
        return NULL;
    }
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

    ezsigntemplatepublic_list_element_local_var->_library_owned = 1;
    return ezsigntemplatepublic_list_element_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit,
    int i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    int i_ezsignfolder,
    int i_ezsigndocument,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription
    ) {
    return ezsigntemplatepublic_list_element_create_internal (
        pki_ezsigntemplatepublic_id,
        fki_ezsignfoldertype_id,
        s_ezsignfoldertype_name_x,
        fki_userlogintype_id,
        fki_ezsigntemplate_id,
        fki_ezsigntemplatepackage_id,
        s_ezsigntemplatepublic_description,
        b_ezsigntemplatepublic_isactive,
        t_ezsigntemplatepublic_note,
        e_ezsigntemplatepublic_limittype,
        i_ezsigntemplatepublic_limit,
        i_ezsigntemplatepublic_limitexceeded,
        dt_ezsigntemplatepublic_limitexceededsince,
        i_ezsignfolder,
        i_ezsigndocument,
        s_ezsigntemplatepublic_ezsigntemplatedescription
        );
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
    if (ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x);
        ezsigntemplatepublic_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description) {
        free(ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description);
        ezsigntemplatepublic_list_element->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note) {
        free(ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note);
        ezsigntemplatepublic_list_element->t_ezsigntemplatepublic_note = NULL;
    }
    if (ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince) {
        free(ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince);
        ezsigntemplatepublic_list_element->dt_ezsigntemplatepublic_limitexceededsince = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepublicID", ezsigntemplatepublic_list_element->pki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id
    if (!ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepublic_list_element->fki_ezsignfoldertype_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsigntemplatepublic_list_element->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->fki_ezsigntemplate_id
    if(ezsigntemplatepublic_list_element->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepublic_list_element->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id
    if(ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepublic_list_element->fki_ezsigntemplatepackage_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepublicIsactive", ezsigntemplatepublic_list_element->b_ezsigntemplatepublic_isactive) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimit", ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limit) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded
    if (!ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimitexceeded", ezsigntemplatepublic_list_element->i_ezsigntemplatepublic_limitexceeded) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iEzsignfolder", ezsigntemplatepublic_list_element->i_ezsignfolder) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_list_element->i_ezsigndocument
    if (!ezsigntemplatepublic_list_element->i_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", ezsigntemplatepublic_list_element->i_ezsigndocument) == NULL) {
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

    // define the local variable for ezsigntemplatepublic_list_element->e_ezsigntemplatepublic_limittype
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype_local_nonprim = 0;

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


    ezsigntemplatepublic_list_element_local_var = ezsigntemplatepublic_list_element_create_internal (
        pki_ezsigntemplatepublic_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        fki_userlogintype_id->valuedouble,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        strdup(s_ezsigntemplatepublic_description->valuestring),
        b_ezsigntemplatepublic_isactive->valueint,
        strdup(t_ezsigntemplatepublic_note->valuestring),
        e_ezsigntemplatepublic_limittype_local_nonprim,
        i_ezsigntemplatepublic_limit->valuedouble,
        i_ezsigntemplatepublic_limitexceeded->valuedouble,
        strdup(dt_ezsigntemplatepublic_limitexceededsince->valuestring),
        i_ezsignfolder->valuedouble,
        i_ezsigndocument->valuedouble,
        strdup(s_ezsigntemplatepublic_ezsigntemplatedescription->valuestring)
        );

    return ezsigntemplatepublic_list_element_local_var;
end:
    if (e_ezsigntemplatepublic_limittype_local_nonprim) {
        e_ezsigntemplatepublic_limittype_local_nonprim = 0;
    }
    return NULL;

}
