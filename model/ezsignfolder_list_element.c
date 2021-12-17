#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_list_element.h"


char* e_ezsignfoldertype_privacylevelezsignfolder_list_element_ToString(ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
	return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfoldertype_privacylevelezsignfolder_list_element_FromString(char* e_ezsignfoldertype_privacylevel){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_privacylevelArray) / sizeof(e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_privacylevel, e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignfolder_stepezsignfolder_list_element_ToString(ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived" };
	return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfolder_stepezsignfolder_list_element_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived" };
    size_t sizeofArray = sizeof(e_ezsignfolder_stepArray) / sizeof(e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_step, e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_created_date,
    char *dt_ezsignfolder_sentdate,
    char *dt_due_date,
    int i_ezsigndocument,
    int i_ezsigndocument_edm,
    int i_ezsignsignature,
    int i_ezsignsignature_signed
    ) {
    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = malloc(sizeof(ezsignfolder_list_element_t));
    if (!ezsignfolder_list_element_local_var) {
        return NULL;
    }
    ezsignfolder_list_element_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_list_element_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfolder_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfolder_list_element_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_list_element_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_list_element_local_var->dt_created_date = dt_created_date;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_list_element_local_var->dt_due_date = dt_due_date;
    ezsignfolder_list_element_local_var->i_ezsigndocument = i_ezsigndocument;
    ezsignfolder_list_element_local_var->i_ezsigndocument_edm = i_ezsigndocument_edm;
    ezsignfolder_list_element_local_var->i_ezsignsignature = i_ezsignsignature;
    ezsignfolder_list_element_local_var->i_ezsignsignature_signed = i_ezsignsignature_signed;

    return ezsignfolder_list_element_local_var;
}


void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    if(NULL == ezsignfolder_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_list_element->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsignfolder_list_element->e_ezsignfoldertype_privacylevel);
        ezsignfolder_list_element->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_list_element->s_ezsignfoldertype_name_x);
        ezsignfolder_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignfolder_description) {
        free(ezsignfolder_list_element->s_ezsignfolder_description);
        ezsignfolder_list_element->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_list_element->e_ezsignfolder_step) {
        field_e_ezsignfolder_step_free(ezsignfolder_list_element->e_ezsignfolder_step);
        ezsignfolder_list_element->e_ezsignfolder_step = NULL;
    }
    if (ezsignfolder_list_element->dt_created_date) {
        free(ezsignfolder_list_element->dt_created_date);
        ezsignfolder_list_element->dt_created_date = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_sentdate);
        ezsignfolder_list_element->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_list_element->dt_due_date) {
        free(ezsignfolder_list_element->dt_due_date);
        ezsignfolder_list_element->dt_due_date = NULL;
    }
    free(ezsignfolder_list_element);
}

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_list_element->pki_ezsignfolder_id
    if (!ezsignfolder_list_element->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_list_element->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    if (!ezsignfolder_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfolder_list_element->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    if (!ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfolder_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->s_ezsignfolder_description
    if (!ezsignfolder_list_element->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_list_element->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->e_ezsignfolder_step
    
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(ezsignfolder_list_element->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_list_element->dt_created_date
    if (!ezsignfolder_list_element->dt_created_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtCreatedDate", ezsignfolder_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    if (!ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_list_element->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->dt_due_date
    if (!ezsignfolder_list_element->dt_due_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtDueDate", ezsignfolder_list_element->dt_due_date) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->i_ezsigndocument
    if (!ezsignfolder_list_element->i_ezsigndocument) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", ezsignfolder_list_element->i_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsigndocument_edm
    if (!ezsignfolder_list_element->i_ezsigndocument_edm) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentEdm", ezsignfolder_list_element->i_ezsigndocument_edm) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignsignature
    if (!ezsignfolder_list_element->i_ezsignsignature) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignature", ezsignfolder_list_element->i_ezsignsignature) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignsignature_signed
    if (!ezsignfolder_list_element->i_ezsignsignature_signed) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureSigned", ezsignfolder_list_element->i_ezsignsignature_signed) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON){

    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // define the local variable for ezsignfolder_list_element->e_ezsignfolder_step
    field_e_ezsignfolder_step_t *e_ezsignfolder_step_local_nonprim = NULL;

    // ezsignfolder_list_element->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfolderStep");
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // ezsignfolder_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtCreatedDate");
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderSentdate");
    if (!dt_ezsignfolder_sentdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->dt_due_date
    cJSON *dt_due_date = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtDueDate");
    if (!dt_due_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_due_date))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->i_ezsigndocument
    cJSON *i_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsigndocument");
    if (!i_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsigndocument_edm
    cJSON *i_ezsigndocument_edm = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsigndocumentEdm");
    if (!i_ezsigndocument_edm) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_edm))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignsignature
    cJSON *i_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignsignature");
    if (!i_ezsignsignature) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignsignature_signed
    cJSON *i_ezsignsignature_signed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignsignatureSigned");
    if (!i_ezsignsignature_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_signed))
    {
    goto end; //Numeric
    }


    ezsignfolder_list_element_local_var = ezsignfolder_list_element_create (
        pki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        strdup(s_ezsignfolder_description->valuestring),
        e_ezsignfolder_step_local_nonprim,
        strdup(dt_created_date->valuestring),
        strdup(dt_ezsignfolder_sentdate->valuestring),
        strdup(dt_due_date->valuestring),
        i_ezsigndocument->valuedouble,
        i_ezsigndocument_edm->valuedouble,
        i_ezsignsignature->valuedouble,
        i_ezsignsignature_signed->valuedouble
        );

    return ezsignfolder_list_element_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        field_e_ezsignfoldertype_privacylevel_free(e_ezsignfoldertype_privacylevel_local_nonprim);
        e_ezsignfoldertype_privacylevel_local_nonprim = NULL;
    }
    if (e_ezsignfolder_step_local_nonprim) {
        field_e_ezsignfolder_step_free(e_ezsignfolder_step_local_nonprim);
        e_ezsignfolder_step_local_nonprim = NULL;
    }
    return NULL;

}
