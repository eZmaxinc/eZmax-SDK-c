#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_request.h"


char* ezsigntemplatepublic_request_e_ezsigntemplatepublic_limittype_ToString(ezmax_api_definition__full_ezsigntemplatepublic_request__e e_ezsigntemplatepublic_limittype) {
    char* e_ezsigntemplatepublic_limittypeArray[] =  { "NULL", "Hour", "Day", "Month", "Total" };
    return e_ezsigntemplatepublic_limittypeArray[e_ezsigntemplatepublic_limittype];
}

ezmax_api_definition__full_ezsigntemplatepublic_request__e ezsigntemplatepublic_request_e_ezsigntemplatepublic_limittype_FromString(char* e_ezsigntemplatepublic_limittype){
    int stringToReturn = 0;
    char *e_ezsigntemplatepublic_limittypeArray[] =  { "NULL", "Hour", "Day", "Month", "Total" };
    size_t sizeofArray = sizeof(e_ezsigntemplatepublic_limittypeArray) / sizeof(e_ezsigntemplatepublic_limittypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatepublic_limittype, e_ezsigntemplatepublic_limittypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit
    ) {
    ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_local_var = malloc(sizeof(ezsigntemplatepublic_request_t));
    if (!ezsigntemplatepublic_request_local_var) {
        return NULL;
    }
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


void ezsigntemplatepublic_request_free(ezsigntemplatepublic_request_t *ezsigntemplatepublic_request) {
    if(NULL == ezsigntemplatepublic_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_request->s_ezsigntemplatepublic_description) {
        free(ezsigntemplatepublic_request->s_ezsigntemplatepublic_description);
        ezsigntemplatepublic_request->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsigntemplatepublic_request->t_ezsigntemplatepublic_note) {
        free(ezsigntemplatepublic_request->t_ezsigntemplatepublic_note);
        ezsigntemplatepublic_request->t_ezsigntemplatepublic_note = NULL;
    }
    if (ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype) {
        field_e_ezsigntemplatepublic_limittype_free(ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype);
        ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype = NULL;
    }
    free(ezsigntemplatepublic_request);
}

cJSON *ezsigntemplatepublic_request_convertToJSON(ezsigntemplatepublic_request_t *ezsigntemplatepublic_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id
    if(ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepublicID", ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request->fki_ezsignfoldertype_id
    if (!ezsigntemplatepublic_request->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepublic_request->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_request->fki_userlogintype_id
    if (!ezsigntemplatepublic_request->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsigntemplatepublic_request->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_request->fki_ezsigntemplate_id
    if(ezsigntemplatepublic_request->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepublic_request->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id
    if(ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepublicIsactive", ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive) == NULL) {
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
    if (ezmax_api_definition__full_ezsigntemplatepublic_request__NULL == ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype) {
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
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimit", ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit) == NULL) {
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

    // define the local variable for ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype_local_nonprim = NULL;

    // ezsigntemplatepublic_request->pki_ezsigntemplatepublic_id
    cJSON *pki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "pkiEzsigntemplatepublicID");
    if (pki_ezsigntemplatepublic_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepublic_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_request->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_request->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiUserlogintypeID");
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiEzsigntemplateID");
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "fkiEzsigntemplatepackageID");
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_request->s_ezsigntemplatepublic_description
    cJSON *s_ezsigntemplatepublic_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "sEzsigntemplatepublicDescription");
    if (!s_ezsigntemplatepublic_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_description))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_request->b_ezsigntemplatepublic_isactive
    cJSON *b_ezsigntemplatepublic_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "bEzsigntemplatepublicIsactive");
    if (!b_ezsigntemplatepublic_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepublic_isactive))
    {
    goto end; //Bool
    }

    // ezsigntemplatepublic_request->t_ezsigntemplatepublic_note
    cJSON *t_ezsigntemplatepublic_note = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "tEzsigntemplatepublicNote");
    if (!t_ezsigntemplatepublic_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsigntemplatepublic_note))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_request->e_ezsigntemplatepublic_limittype
    cJSON *e_ezsigntemplatepublic_limittype = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "eEzsigntemplatepublicLimittype");
    if (!e_ezsigntemplatepublic_limittype) {
        goto end;
    }

    
    e_ezsigntemplatepublic_limittype_local_nonprim = field_e_ezsigntemplatepublic_limittype_parseFromJSON(e_ezsigntemplatepublic_limittype); //custom

    // ezsigntemplatepublic_request->i_ezsigntemplatepublic_limit
    cJSON *i_ezsigntemplatepublic_limit = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_requestJSON, "iEzsigntemplatepublicLimit");
    if (!i_ezsigntemplatepublic_limit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepublic_limit))
    {
    goto end; //Numeric
    }


    ezsigntemplatepublic_request_local_var = ezsigntemplatepublic_request_create (
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

    return ezsigntemplatepublic_request_local_var;
end:
    if (e_ezsigntemplatepublic_limittype_local_nonprim) {
        field_e_ezsigntemplatepublic_limittype_free(e_ezsigntemplatepublic_limittype_local_nonprim);
        e_ezsigntemplatepublic_limittype_local_nonprim = NULL;
    }
    return NULL;

}
