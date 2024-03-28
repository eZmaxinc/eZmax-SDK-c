#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_request_v2.h"


char* ezsigntemplate_request_v2_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_request_v2__e e_ezsigntemplate_type) {
    char* e_ezsigntemplate_typeArray[] =  { "NULL", "User", "Usergroup", "Company" };
    return e_ezsigntemplate_typeArray[e_ezsigntemplate_type];
}

ezmax_api_definition__full_ezsigntemplate_request_v2__e ezsigntemplate_request_v2_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type){
    int stringToReturn = 0;
    char *e_ezsigntemplate_typeArray[] =  { "NULL", "User", "Usergroup", "Company" };
    size_t sizeofArray = sizeof(e_ezsigntemplate_typeArray) / sizeof(e_ezsigntemplate_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplate_type, e_ezsigntemplate_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplate_request_v2_t *ezsigntemplate_request_v2_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly,
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type
    ) {
    ezsigntemplate_request_v2_t *ezsigntemplate_request_v2_local_var = malloc(sizeof(ezsigntemplate_request_v2_t));
    if (!ezsigntemplate_request_v2_local_var) {
        return NULL;
    }
    ezsigntemplate_request_v2_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_request_v2_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_request_v2_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_request_v2_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_request_v2_local_var->s_ezsigntemplate_filenamepattern = s_ezsigntemplate_filenamepattern;
    ezsigntemplate_request_v2_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_request_v2_local_var->e_ezsigntemplate_type = e_ezsigntemplate_type;

    return ezsigntemplate_request_v2_local_var;
}


void ezsigntemplate_request_v2_free(ezsigntemplate_request_v2_t *ezsigntemplate_request_v2) {
    if(NULL == ezsigntemplate_request_v2){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_request_v2->s_ezsigntemplate_description) {
        free(ezsigntemplate_request_v2->s_ezsigntemplate_description);
        ezsigntemplate_request_v2->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern) {
        free(ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern);
        ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern = NULL;
    }
    if (ezsigntemplate_request_v2->e_ezsigntemplate_type) {
        field_e_ezsigntemplate_type_free(ezsigntemplate_request_v2->e_ezsigntemplate_type);
        ezsigntemplate_request_v2->e_ezsigntemplate_type = NULL;
    }
    free(ezsigntemplate_request_v2);
}

cJSON *ezsigntemplate_request_v2_convertToJSON(ezsigntemplate_request_v2_t *ezsigntemplate_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_request_v2->pki_ezsigntemplate_id
    if(ezsigntemplate_request_v2->pki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_request_v2->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_request_v2->fki_ezsignfoldertype_id
    if(ezsigntemplate_request_v2->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_request_v2->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_request_v2->fki_language_id
    if (!ezsigntemplate_request_v2->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_request_v2->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_request_v2->s_ezsigntemplate_description
    if (!ezsigntemplate_request_v2->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_request_v2->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern
    if(ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateFilenamepattern", ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_request_v2->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_request_v2->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_request_v2->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_request_v2->e_ezsigntemplate_type
    if (ezmax_api_definition__full_ezsigntemplate_request_v2__NULL == ezsigntemplate_request_v2->e_ezsigntemplate_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplate_type_local_JSON = field_e_ezsigntemplate_type_convertToJSON(ezsigntemplate_request_v2->e_ezsigntemplate_type);
    if(e_ezsigntemplate_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateType", e_ezsigntemplate_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_request_v2_t *ezsigntemplate_request_v2_parseFromJSON(cJSON *ezsigntemplate_request_v2JSON){

    ezsigntemplate_request_v2_t *ezsigntemplate_request_v2_local_var = NULL;

    // define the local variable for ezsigntemplate_request_v2->e_ezsigntemplate_type
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type_local_nonprim = NULL;

    // ezsigntemplate_request_v2->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "pkiEzsigntemplateID");
    if (pki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_request_v2->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_request_v2->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_request_v2->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_request_v2->s_ezsigntemplate_filenamepattern
    cJSON *s_ezsigntemplate_filenamepattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "sEzsigntemplateFilenamepattern");
    if (s_ezsigntemplate_filenamepattern) { 
    if(!cJSON_IsString(s_ezsigntemplate_filenamepattern) && !cJSON_IsNull(s_ezsigntemplate_filenamepattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_request_v2->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "bEzsigntemplateAdminonly");
    if (!b_ezsigntemplate_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplate_request_v2->e_ezsigntemplate_type
    cJSON *e_ezsigntemplate_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v2JSON, "eEzsigntemplateType");
    if (!e_ezsigntemplate_type) {
        goto end;
    }

    
    e_ezsigntemplate_type_local_nonprim = field_e_ezsigntemplate_type_parseFromJSON(e_ezsigntemplate_type); //custom


    ezsigntemplate_request_v2_local_var = ezsigntemplate_request_v2_create (
        pki_ezsigntemplate_id ? pki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplate_description->valuestring),
        s_ezsigntemplate_filenamepattern && !cJSON_IsNull(s_ezsigntemplate_filenamepattern) ? strdup(s_ezsigntemplate_filenamepattern->valuestring) : NULL,
        b_ezsigntemplate_adminonly->valueint,
        e_ezsigntemplate_type_local_nonprim
        );

    return ezsigntemplate_request_v2_local_var;
end:
    if (e_ezsigntemplate_type_local_nonprim) {
        field_e_ezsigntemplate_type_free(e_ezsigntemplate_type_local_nonprim);
        e_ezsigntemplate_type_local_nonprim = NULL;
    }
    return NULL;

}
