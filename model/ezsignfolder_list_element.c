#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_list_element.h"


char* ezsignfolder_list_element_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfolder_list_element__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsignfolder_list_element__e ezsignfolder_list_element_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel){
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
char* ezsignfolder_list_element_e_ezsignfolder_step_ToString(ezmax_api_definition__full_ezsignfolder_list_element__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition__full_ezsignfolder_list_element__e ezsignfolder_list_element_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
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
    ezsignfolder_list_element_local_var->dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    ezsignfolder_list_element_local_var->i_ezsigndocument = i_ezsigndocument;
    ezsignfolder_list_element_local_var->i_ezsigndocument_edm = i_ezsigndocument_edm;
    ezsignfolder_list_element_local_var->i_ezsignsignature = i_ezsignsignature;
    ezsignfolder_list_element_local_var->i_ezsignsignature_signed = i_ezsignsignature_signed;
    ezsignfolder_list_element_local_var->i_ezsignformfieldgroup = i_ezsignformfieldgroup;
    ezsignfolder_list_element_local_var->i_ezsignformfieldgroup_completed = i_ezsignformfieldgroup_completed;
    ezsignfolder_list_element_local_var->b_ezsignform_hasdependencies = b_ezsignform_hasdependencies;
    ezsignfolder_list_element_local_var->d_ezsignfolder_completedpercentage = d_ezsignfolder_completedpercentage;
    ezsignfolder_list_element_local_var->d_ezsignfolder_formcompletedpercentage = d_ezsignfolder_formcompletedpercentage;
    ezsignfolder_list_element_local_var->d_ezsignfolder_signaturecompletedpercentage = d_ezsignfolder_signaturecompletedpercentage;
    ezsignfolder_list_element_local_var->b_ezsignfolder_signer = b_ezsignfolder_signer;

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
    if (ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate);
        ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_sentdate);
        ezsignfolder_list_element->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_duedate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_duedate);
        ezsignfolder_list_element->dt_ezsignfolder_duedate = NULL;
    }
    if (ezsignfolder_list_element->d_ezsignfolder_completedpercentage) {
        free(ezsignfolder_list_element->d_ezsignfolder_completedpercentage);
        ezsignfolder_list_element->d_ezsignfolder_completedpercentage = NULL;
    }
    if (ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage) {
        free(ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage);
        ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage = NULL;
    }
    if (ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage) {
        free(ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage);
        ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage = NULL;
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
    if (ezmax_api_definition__full_ezsignfolder_list_element__NULL == ezsignfolder_list_element->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
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
    if (ezmax_api_definition__full_ezsignfolder_list_element__NULL == ezsignfolder_list_element->e_ezsignfolder_step) {
        goto fail;
    }
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


    // ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate
    if(ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDelayedsenddate", ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    if(ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_list_element->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->dt_ezsignfolder_duedate
    if(ezsignfolder_list_element->dt_ezsignfolder_duedate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDuedate", ezsignfolder_list_element->dt_ezsignfolder_duedate) == NULL) {
    goto fail; //String
    }
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


    // ezsignfolder_list_element->i_ezsignformfieldgroup
    if (!ezsignfolder_list_element->i_ezsignformfieldgroup) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroup", ezsignfolder_list_element->i_ezsignformfieldgroup) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignformfieldgroup_completed
    if (!ezsignfolder_list_element->i_ezsignformfieldgroup_completed) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupCompleted", ezsignfolder_list_element->i_ezsignformfieldgroup_completed) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->b_ezsignform_hasdependencies
    if(ezsignfolder_list_element->b_ezsignform_hasdependencies) {
    if(cJSON_AddBoolToObject(item, "bEzsignformHasdependencies", ezsignfolder_list_element->b_ezsignform_hasdependencies) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfolder_list_element->d_ezsignfolder_completedpercentage
    if (!ezsignfolder_list_element->d_ezsignfolder_completedpercentage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignfolderCompletedpercentage", ezsignfolder_list_element->d_ezsignfolder_completedpercentage) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage
    if (!ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignfolderFormcompletedpercentage", ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage
    if (!ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignfolderSignaturecompletedpercentage", ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->b_ezsignfolder_signer
    if(ezsignfolder_list_element->b_ezsignfolder_signer) {
    if(cJSON_AddBoolToObject(item, "bEzsignfolderSigner", ezsignfolder_list_element->b_ezsignfolder_signer) == NULL) {
    goto fail; //Bool
    }
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

    // ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate
    cJSON *dt_ezsignfolder_delayedsenddate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDelayedsenddate");
    if (dt_ezsignfolder_delayedsenddate) { 
    if(!cJSON_IsString(dt_ezsignfolder_delayedsenddate) && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderSentdate");
    if (dt_ezsignfolder_sentdate) { 
    if(!cJSON_IsString(dt_ezsignfolder_sentdate) && !cJSON_IsNull(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_duedate
    cJSON *dt_ezsignfolder_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDuedate");
    if (dt_ezsignfolder_duedate) { 
    if(!cJSON_IsString(dt_ezsignfolder_duedate) && !cJSON_IsNull(dt_ezsignfolder_duedate))
    {
    goto end; //String
    }
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

    // ezsignfolder_list_element->i_ezsignformfieldgroup
    cJSON *i_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignformfieldgroup");
    if (!i_ezsignformfieldgroup) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignformfieldgroup_completed
    cJSON *i_ezsignformfieldgroup_completed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignformfieldgroupCompleted");
    if (!i_ezsignformfieldgroup_completed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_completed))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->b_ezsignform_hasdependencies
    cJSON *b_ezsignform_hasdependencies = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignformHasdependencies");
    if (b_ezsignform_hasdependencies) { 
    if(!cJSON_IsBool(b_ezsignform_hasdependencies))
    {
    goto end; //Bool
    }
    }

    // ezsignfolder_list_element->d_ezsignfolder_completedpercentage
    cJSON *d_ezsignfolder_completedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderCompletedpercentage");
    if (!d_ezsignfolder_completedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_completedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage
    cJSON *d_ezsignfolder_formcompletedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderFormcompletedpercentage");
    if (!d_ezsignfolder_formcompletedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_formcompletedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage
    cJSON *d_ezsignfolder_signaturecompletedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderSignaturecompletedpercentage");
    if (!d_ezsignfolder_signaturecompletedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_signaturecompletedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->b_ezsignfolder_signer
    cJSON *b_ezsignfolder_signer = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignfolderSigner");
    if (b_ezsignfolder_signer) { 
    if(!cJSON_IsBool(b_ezsignfolder_signer))
    {
    goto end; //Bool
    }
    }


    ezsignfolder_list_element_local_var = ezsignfolder_list_element_create (
        pki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        strdup(s_ezsignfolder_description->valuestring),
        e_ezsignfolder_step_local_nonprim,
        strdup(dt_created_date->valuestring),
        dt_ezsignfolder_delayedsenddate && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate) ? strdup(dt_ezsignfolder_delayedsenddate->valuestring) : NULL,
        dt_ezsignfolder_sentdate && !cJSON_IsNull(dt_ezsignfolder_sentdate) ? strdup(dt_ezsignfolder_sentdate->valuestring) : NULL,
        dt_ezsignfolder_duedate && !cJSON_IsNull(dt_ezsignfolder_duedate) ? strdup(dt_ezsignfolder_duedate->valuestring) : NULL,
        i_ezsigndocument->valuedouble,
        i_ezsigndocument_edm->valuedouble,
        i_ezsignsignature->valuedouble,
        i_ezsignsignature_signed->valuedouble,
        i_ezsignformfieldgroup->valuedouble,
        i_ezsignformfieldgroup_completed->valuedouble,
        b_ezsignform_hasdependencies ? b_ezsignform_hasdependencies->valueint : 0,
        strdup(d_ezsignfolder_completedpercentage->valuestring),
        strdup(d_ezsignfolder_formcompletedpercentage->valuestring),
        strdup(d_ezsignfolder_signaturecompletedpercentage->valuestring),
        b_ezsignfolder_signer ? b_ezsignfolder_signer->valueint : 0
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
