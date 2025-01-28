#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_list_element.h"



static ezsignfolder_list_element_t *ezsignfolder_list_element_create_internal(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
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

    ezsignfolder_list_element_local_var->_library_owned = 1;
    return ezsignfolder_list_element_local_var;
}

__attribute__((deprecated)) ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
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
    return ezsignfolder_list_element_create_internal (
        pki_ezsignfolder_id,
        fki_ezsignfoldertype_id,
        e_ezsignfoldertype_privacylevel,
        s_ezsignfoldertype_name_x,
        s_ezsignfolder_description,
        e_ezsignfolder_step,
        dt_created_date,
        dt_ezsignfolder_delayedsenddate,
        dt_ezsignfolder_sentdate,
        dt_ezsignfolder_duedate,
        i_ezsigndocument,
        i_ezsigndocument_edm,
        i_ezsignsignature,
        i_ezsignsignature_signed,
        i_ezsignformfieldgroup,
        i_ezsignformfieldgroup_completed,
        b_ezsignform_hasdependencies,
        d_ezsignfolder_completedpercentage,
        d_ezsignfolder_formcompletedpercentage,
        d_ezsignfolder_signaturecompletedpercentage,
        b_ezsignfolder_signer
        );
}

void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    if(NULL == ezsignfolder_list_element){
        return ;
    }
    if(ezsignfolder_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_list_element->s_ezsignfoldertype_name_x);
        ezsignfolder_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignfolder_description) {
        free(ezsignfolder_list_element->s_ezsignfolder_description);
        ezsignfolder_list_element->s_ezsignfolder_description = NULL;
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
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignfolder_list_element->e_ezsignfoldertype_privacylevel) {
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
    if (ezmax_api_definition__full_field_e_ezsignfolder_step__NULL == ezsignfolder_list_element->e_ezsignfolder_step) {
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
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    // define the local variable for ezsignfolder_list_element->e_ezsignfolder_step
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step_local_nonprim = 0;

    // ezsignfolder_list_element->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsignfoldertypeID");
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

    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfoldertypeNameX");
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

    // ezsignfolder_list_element->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfolderStep");
    if (cJSON_IsNull(e_ezsignfolder_step)) {
        e_ezsignfolder_step = NULL;
    }
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // ezsignfolder_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate
    cJSON *dt_ezsignfolder_delayedsenddate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDelayedsenddate");
    if (cJSON_IsNull(dt_ezsignfolder_delayedsenddate)) {
        dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (dt_ezsignfolder_delayedsenddate) { 
    if(!cJSON_IsString(dt_ezsignfolder_delayedsenddate) && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderSentdate");
    if (cJSON_IsNull(dt_ezsignfolder_sentdate)) {
        dt_ezsignfolder_sentdate = NULL;
    }
    if (dt_ezsignfolder_sentdate) { 
    if(!cJSON_IsString(dt_ezsignfolder_sentdate) && !cJSON_IsNull(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_duedate
    cJSON *dt_ezsignfolder_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDuedate");
    if (cJSON_IsNull(dt_ezsignfolder_duedate)) {
        dt_ezsignfolder_duedate = NULL;
    }
    if (dt_ezsignfolder_duedate) { 
    if(!cJSON_IsString(dt_ezsignfolder_duedate) && !cJSON_IsNull(dt_ezsignfolder_duedate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->i_ezsigndocument
    cJSON *i_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsigndocument");
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

    // ezsignfolder_list_element->i_ezsigndocument_edm
    cJSON *i_ezsigndocument_edm = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsigndocumentEdm");
    if (cJSON_IsNull(i_ezsigndocument_edm)) {
        i_ezsigndocument_edm = NULL;
    }
    if (!i_ezsigndocument_edm) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_edm))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignsignature
    cJSON *i_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignsignature");
    if (cJSON_IsNull(i_ezsignsignature)) {
        i_ezsignsignature = NULL;
    }
    if (!i_ezsignsignature) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignsignature_signed
    cJSON *i_ezsignsignature_signed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignsignatureSigned");
    if (cJSON_IsNull(i_ezsignsignature_signed)) {
        i_ezsignsignature_signed = NULL;
    }
    if (!i_ezsignsignature_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_signed))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignformfieldgroup
    cJSON *i_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignformfieldgroup");
    if (cJSON_IsNull(i_ezsignformfieldgroup)) {
        i_ezsignformfieldgroup = NULL;
    }
    if (!i_ezsignformfieldgroup) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_ezsignformfieldgroup_completed
    cJSON *i_ezsignformfieldgroup_completed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignformfieldgroupCompleted");
    if (cJSON_IsNull(i_ezsignformfieldgroup_completed)) {
        i_ezsignformfieldgroup_completed = NULL;
    }
    if (!i_ezsignformfieldgroup_completed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_completed))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->b_ezsignform_hasdependencies
    cJSON *b_ezsignform_hasdependencies = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignformHasdependencies");
    if (cJSON_IsNull(b_ezsignform_hasdependencies)) {
        b_ezsignform_hasdependencies = NULL;
    }
    if (b_ezsignform_hasdependencies) { 
    if(!cJSON_IsBool(b_ezsignform_hasdependencies))
    {
    goto end; //Bool
    }
    }

    // ezsignfolder_list_element->d_ezsignfolder_completedpercentage
    cJSON *d_ezsignfolder_completedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderCompletedpercentage");
    if (cJSON_IsNull(d_ezsignfolder_completedpercentage)) {
        d_ezsignfolder_completedpercentage = NULL;
    }
    if (!d_ezsignfolder_completedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_completedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage
    cJSON *d_ezsignfolder_formcompletedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderFormcompletedpercentage");
    if (cJSON_IsNull(d_ezsignfolder_formcompletedpercentage)) {
        d_ezsignfolder_formcompletedpercentage = NULL;
    }
    if (!d_ezsignfolder_formcompletedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_formcompletedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage
    cJSON *d_ezsignfolder_signaturecompletedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderSignaturecompletedpercentage");
    if (cJSON_IsNull(d_ezsignfolder_signaturecompletedpercentage)) {
        d_ezsignfolder_signaturecompletedpercentage = NULL;
    }
    if (!d_ezsignfolder_signaturecompletedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_signaturecompletedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->b_ezsignfolder_signer
    cJSON *b_ezsignfolder_signer = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignfolderSigner");
    if (cJSON_IsNull(b_ezsignfolder_signer)) {
        b_ezsignfolder_signer = NULL;
    }
    if (b_ezsignfolder_signer) { 
    if(!cJSON_IsBool(b_ezsignfolder_signer))
    {
    goto end; //Bool
    }
    }


    ezsignfolder_list_element_local_var = ezsignfolder_list_element_create_internal (
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
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (e_ezsignfolder_step_local_nonprim) {
        e_ezsignfolder_step_local_nonprim = 0;
    }
    return NULL;

}
