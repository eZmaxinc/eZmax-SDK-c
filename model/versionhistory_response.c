#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "versionhistory_response.h"


char* e_versionhistory_usertypeversionhistory_response_ToString(ezmax_api_definition__full_versionhistory_response__e e_versionhistory_usertype) {
    char* e_versionhistory_usertypeArray[] =  { "NULL", "", "AgentBroker", "EzsignUser", "Normal" };
	return e_versionhistory_usertypeArray[e_versionhistory_usertype];
}

ezmax_api_definition__full_versionhistory_response__e e_versionhistory_usertypeversionhistory_response_FromString(char* e_versionhistory_usertype){
    int stringToReturn = 0;
    char *e_versionhistory_usertypeArray[] =  { "NULL", "", "AgentBroker", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(e_versionhistory_usertypeArray) / sizeof(e_versionhistory_usertypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_versionhistory_usertype, e_versionhistory_usertypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_versionhistory_typeversionhistory_response_ToString(ezmax_api_definition__full_versionhistory_response__e e_versionhistory_type) {
    char* e_versionhistory_typeArray[] =  { "NULL", "AgentBroker", "NewFeature", "Correction", "Modification", "ImportantMessage" };
	return e_versionhistory_typeArray[e_versionhistory_type];
}

ezmax_api_definition__full_versionhistory_response__e e_versionhistory_typeversionhistory_response_FromString(char* e_versionhistory_type){
    int stringToReturn = 0;
    char *e_versionhistory_typeArray[] =  { "NULL", "AgentBroker", "NewFeature", "Correction", "Modification", "ImportantMessage" };
    size_t sizeofArray = sizeof(e_versionhistory_typeArray) / sizeof(e_versionhistory_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_versionhistory_type, e_versionhistory_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

versionhistory_response_t *versionhistory_response_create(
    int pki_versionhistory_id,
    int fki_module_id,
    int fki_modulesection_id,
    char *s_module_name_x,
    char *s_modulesection_name_x,
    field_e_versionhistory_usertype_t *e_versionhistory_usertype,
    multilingual_versionhistory_detail_t *obj_versionhistory_detail,
    char *dt_versionhistory_date,
    char *dt_versionhistory_dateend,
    field_e_versionhistory_type_t *e_versionhistory_type,
    int b_versionhistory_draft
    ) {
    versionhistory_response_t *versionhistory_response_local_var = malloc(sizeof(versionhistory_response_t));
    if (!versionhistory_response_local_var) {
        return NULL;
    }
    versionhistory_response_local_var->pki_versionhistory_id = pki_versionhistory_id;
    versionhistory_response_local_var->fki_module_id = fki_module_id;
    versionhistory_response_local_var->fki_modulesection_id = fki_modulesection_id;
    versionhistory_response_local_var->s_module_name_x = s_module_name_x;
    versionhistory_response_local_var->s_modulesection_name_x = s_modulesection_name_x;
    versionhistory_response_local_var->e_versionhistory_usertype = e_versionhistory_usertype;
    versionhistory_response_local_var->obj_versionhistory_detail = obj_versionhistory_detail;
    versionhistory_response_local_var->dt_versionhistory_date = dt_versionhistory_date;
    versionhistory_response_local_var->dt_versionhistory_dateend = dt_versionhistory_dateend;
    versionhistory_response_local_var->e_versionhistory_type = e_versionhistory_type;
    versionhistory_response_local_var->b_versionhistory_draft = b_versionhistory_draft;

    return versionhistory_response_local_var;
}


void versionhistory_response_free(versionhistory_response_t *versionhistory_response) {
    if(NULL == versionhistory_response){
        return ;
    }
    listEntry_t *listEntry;
    if (versionhistory_response->s_module_name_x) {
        free(versionhistory_response->s_module_name_x);
        versionhistory_response->s_module_name_x = NULL;
    }
    if (versionhistory_response->s_modulesection_name_x) {
        free(versionhistory_response->s_modulesection_name_x);
        versionhistory_response->s_modulesection_name_x = NULL;
    }
    if (versionhistory_response->e_versionhistory_usertype) {
        field_e_versionhistory_usertype_free(versionhistory_response->e_versionhistory_usertype);
        versionhistory_response->e_versionhistory_usertype = NULL;
    }
    if (versionhistory_response->obj_versionhistory_detail) {
        multilingual_versionhistory_detail_free(versionhistory_response->obj_versionhistory_detail);
        versionhistory_response->obj_versionhistory_detail = NULL;
    }
    if (versionhistory_response->dt_versionhistory_date) {
        free(versionhistory_response->dt_versionhistory_date);
        versionhistory_response->dt_versionhistory_date = NULL;
    }
    if (versionhistory_response->dt_versionhistory_dateend) {
        free(versionhistory_response->dt_versionhistory_dateend);
        versionhistory_response->dt_versionhistory_dateend = NULL;
    }
    if (versionhistory_response->e_versionhistory_type) {
        field_e_versionhistory_type_free(versionhistory_response->e_versionhistory_type);
        versionhistory_response->e_versionhistory_type = NULL;
    }
    free(versionhistory_response);
}

cJSON *versionhistory_response_convertToJSON(versionhistory_response_t *versionhistory_response) {
    cJSON *item = cJSON_CreateObject();

    // versionhistory_response->pki_versionhistory_id
    if (!versionhistory_response->pki_versionhistory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiVersionhistoryID", versionhistory_response->pki_versionhistory_id) == NULL) {
    goto fail; //Numeric
    }


    // versionhistory_response->fki_module_id
    if(versionhistory_response->fki_module_id) {
    if(cJSON_AddNumberToObject(item, "fkiModuleID", versionhistory_response->fki_module_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // versionhistory_response->fki_modulesection_id
    if(versionhistory_response->fki_modulesection_id) {
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", versionhistory_response->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // versionhistory_response->s_module_name_x
    if(versionhistory_response->s_module_name_x) {
    if(cJSON_AddStringToObject(item, "sModuleNameX", versionhistory_response->s_module_name_x) == NULL) {
    goto fail; //String
    }
    }


    // versionhistory_response->s_modulesection_name_x
    if(versionhistory_response->s_modulesection_name_x) {
    if(cJSON_AddStringToObject(item, "sModulesectionNameX", versionhistory_response->s_modulesection_name_x) == NULL) {
    goto fail; //String
    }
    }


    // versionhistory_response->e_versionhistory_usertype
    if(versionhistory_response->e_versionhistory_usertype != ezmax_api_definition__full_versionhistory_response__NULL) {
    cJSON *e_versionhistory_usertype_local_JSON = field_e_versionhistory_usertype_convertToJSON(versionhistory_response->e_versionhistory_usertype);
    if(e_versionhistory_usertype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eVersionhistoryUsertype", e_versionhistory_usertype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // versionhistory_response->obj_versionhistory_detail
    if (!versionhistory_response->obj_versionhistory_detail) {
        goto fail;
    }
    cJSON *obj_versionhistory_detail_local_JSON = multilingual_versionhistory_detail_convertToJSON(versionhistory_response->obj_versionhistory_detail);
    if(obj_versionhistory_detail_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objVersionhistoryDetail", obj_versionhistory_detail_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // versionhistory_response->dt_versionhistory_date
    if (!versionhistory_response->dt_versionhistory_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtVersionhistoryDate", versionhistory_response->dt_versionhistory_date) == NULL) {
    goto fail; //String
    }


    // versionhistory_response->dt_versionhistory_dateend
    if(versionhistory_response->dt_versionhistory_dateend) {
    if(cJSON_AddStringToObject(item, "dtVersionhistoryDateend", versionhistory_response->dt_versionhistory_dateend) == NULL) {
    goto fail; //String
    }
    }


    // versionhistory_response->e_versionhistory_type
    if (ezmax_api_definition__full_versionhistory_response__NULL == versionhistory_response->e_versionhistory_type) {
        goto fail;
    }
    cJSON *e_versionhistory_type_local_JSON = field_e_versionhistory_type_convertToJSON(versionhistory_response->e_versionhistory_type);
    if(e_versionhistory_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eVersionhistoryType", e_versionhistory_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // versionhistory_response->b_versionhistory_draft
    if (!versionhistory_response->b_versionhistory_draft) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bVersionhistoryDraft", versionhistory_response->b_versionhistory_draft) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

versionhistory_response_t *versionhistory_response_parseFromJSON(cJSON *versionhistory_responseJSON){

    versionhistory_response_t *versionhistory_response_local_var = NULL;

    // define the local variable for versionhistory_response->e_versionhistory_usertype
    field_e_versionhistory_usertype_t *e_versionhistory_usertype_local_nonprim = NULL;

    // define the local variable for versionhistory_response->obj_versionhistory_detail
    multilingual_versionhistory_detail_t *obj_versionhistory_detail_local_nonprim = NULL;

    // define the local variable for versionhistory_response->e_versionhistory_type
    field_e_versionhistory_type_t *e_versionhistory_type_local_nonprim = NULL;

    // versionhistory_response->pki_versionhistory_id
    cJSON *pki_versionhistory_id = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "pkiVersionhistoryID");
    if (!pki_versionhistory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_versionhistory_id))
    {
    goto end; //Numeric
    }

    // versionhistory_response->fki_module_id
    cJSON *fki_module_id = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "fkiModuleID");
    if (fki_module_id) { 
    if(!cJSON_IsNumber(fki_module_id))
    {
    goto end; //Numeric
    }
    }

    // versionhistory_response->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "fkiModulesectionID");
    if (fki_modulesection_id) { 
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }
    }

    // versionhistory_response->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "sModuleNameX");
    if (s_module_name_x) { 
    if(!cJSON_IsString(s_module_name_x))
    {
    goto end; //String
    }
    }

    // versionhistory_response->s_modulesection_name_x
    cJSON *s_modulesection_name_x = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "sModulesectionNameX");
    if (s_modulesection_name_x) { 
    if(!cJSON_IsString(s_modulesection_name_x))
    {
    goto end; //String
    }
    }

    // versionhistory_response->e_versionhistory_usertype
    cJSON *e_versionhistory_usertype = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "eVersionhistoryUsertype");
    if (e_versionhistory_usertype) { 
    e_versionhistory_usertype_local_nonprim = field_e_versionhistory_usertype_parseFromJSON(e_versionhistory_usertype); //custom
    }

    // versionhistory_response->obj_versionhistory_detail
    cJSON *obj_versionhistory_detail = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "objVersionhistoryDetail");
    if (!obj_versionhistory_detail) {
        goto end;
    }

    
    obj_versionhistory_detail_local_nonprim = multilingual_versionhistory_detail_parseFromJSON(obj_versionhistory_detail); //nonprimitive

    // versionhistory_response->dt_versionhistory_date
    cJSON *dt_versionhistory_date = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "dtVersionhistoryDate");
    if (!dt_versionhistory_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_versionhistory_date))
    {
    goto end; //String
    }

    // versionhistory_response->dt_versionhistory_dateend
    cJSON *dt_versionhistory_dateend = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "dtVersionhistoryDateend");
    if (dt_versionhistory_dateend) { 
    if(!cJSON_IsString(dt_versionhistory_dateend))
    {
    goto end; //String
    }
    }

    // versionhistory_response->e_versionhistory_type
    cJSON *e_versionhistory_type = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "eVersionhistoryType");
    if (!e_versionhistory_type) {
        goto end;
    }

    
    e_versionhistory_type_local_nonprim = field_e_versionhistory_type_parseFromJSON(e_versionhistory_type); //custom

    // versionhistory_response->b_versionhistory_draft
    cJSON *b_versionhistory_draft = cJSON_GetObjectItemCaseSensitive(versionhistory_responseJSON, "bVersionhistoryDraft");
    if (!b_versionhistory_draft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_versionhistory_draft))
    {
    goto end; //Bool
    }


    versionhistory_response_local_var = versionhistory_response_create (
        pki_versionhistory_id->valuedouble,
        fki_module_id ? fki_module_id->valuedouble : 0,
        fki_modulesection_id ? fki_modulesection_id->valuedouble : 0,
        s_module_name_x ? strdup(s_module_name_x->valuestring) : NULL,
        s_modulesection_name_x ? strdup(s_modulesection_name_x->valuestring) : NULL,
        e_versionhistory_usertype ? e_versionhistory_usertype_local_nonprim : NULL,
        obj_versionhistory_detail_local_nonprim,
        strdup(dt_versionhistory_date->valuestring),
        dt_versionhistory_dateend ? strdup(dt_versionhistory_dateend->valuestring) : NULL,
        e_versionhistory_type_local_nonprim,
        b_versionhistory_draft->valueint
        );

    return versionhistory_response_local_var;
end:
    if (e_versionhistory_usertype_local_nonprim) {
        field_e_versionhistory_usertype_free(e_versionhistory_usertype_local_nonprim);
        e_versionhistory_usertype_local_nonprim = NULL;
    }
    if (obj_versionhistory_detail_local_nonprim) {
        multilingual_versionhistory_detail_free(obj_versionhistory_detail_local_nonprim);
        obj_versionhistory_detail_local_nonprim = NULL;
    }
    if (e_versionhistory_type_local_nonprim) {
        field_e_versionhistory_type_free(e_versionhistory_type_local_nonprim);
        e_versionhistory_type_local_nonprim = NULL;
    }
    return NULL;

}
