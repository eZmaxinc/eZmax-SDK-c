#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingcommission_response_compound.h"



static ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_create_internal(
    int pki_ezmaxinvoicingcommission_id,
    int fki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxpartner_id,
    int fki_ezmaxrepresentative_id,
    char *dt_ezmaxinvoicingcommission_start,
    char *dt_ezmaxinvoicingcommission_end,
    int i_ezmaxinvoicingcommission_days,
    char *d_ezmaxinvoicingcommission_amount,
    custom_contact_name_response_t *obj_contact_name
    ) {
    ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_local_var = malloc(sizeof(ezmaxinvoicingcommission_response_compound_t));
    if (!ezmaxinvoicingcommission_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingcommission_response_compound_local_var->pki_ezmaxinvoicingcommission_id = pki_ezmaxinvoicingcommission_id;
    ezmaxinvoicingcommission_response_compound_local_var->fki_ezmaxinvoicingsummaryglobal_id = fki_ezmaxinvoicingsummaryglobal_id;
    ezmaxinvoicingcommission_response_compound_local_var->fki_ezmaxpartner_id = fki_ezmaxpartner_id;
    ezmaxinvoicingcommission_response_compound_local_var->fki_ezmaxrepresentative_id = fki_ezmaxrepresentative_id;
    ezmaxinvoicingcommission_response_compound_local_var->dt_ezmaxinvoicingcommission_start = dt_ezmaxinvoicingcommission_start;
    ezmaxinvoicingcommission_response_compound_local_var->dt_ezmaxinvoicingcommission_end = dt_ezmaxinvoicingcommission_end;
    ezmaxinvoicingcommission_response_compound_local_var->i_ezmaxinvoicingcommission_days = i_ezmaxinvoicingcommission_days;
    ezmaxinvoicingcommission_response_compound_local_var->d_ezmaxinvoicingcommission_amount = d_ezmaxinvoicingcommission_amount;
    ezmaxinvoicingcommission_response_compound_local_var->obj_contact_name = obj_contact_name;

    ezmaxinvoicingcommission_response_compound_local_var->_library_owned = 1;
    return ezmaxinvoicingcommission_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_create(
    int pki_ezmaxinvoicingcommission_id,
    int fki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxpartner_id,
    int fki_ezmaxrepresentative_id,
    char *dt_ezmaxinvoicingcommission_start,
    char *dt_ezmaxinvoicingcommission_end,
    int i_ezmaxinvoicingcommission_days,
    char *d_ezmaxinvoicingcommission_amount,
    custom_contact_name_response_t *obj_contact_name
    ) {
    return ezmaxinvoicingcommission_response_compound_create_internal (
        pki_ezmaxinvoicingcommission_id,
        fki_ezmaxinvoicingsummaryglobal_id,
        fki_ezmaxpartner_id,
        fki_ezmaxrepresentative_id,
        dt_ezmaxinvoicingcommission_start,
        dt_ezmaxinvoicingcommission_end,
        i_ezmaxinvoicingcommission_days,
        d_ezmaxinvoicingcommission_amount,
        obj_contact_name
        );
}

void ezmaxinvoicingcommission_response_compound_free(ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound) {
    if(NULL == ezmaxinvoicingcommission_response_compound){
        return ;
    }
    if(ezmaxinvoicingcommission_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingcommission_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start) {
        free(ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start);
        ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start = NULL;
    }
    if (ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end) {
        free(ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end);
        ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end = NULL;
    }
    if (ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount) {
        free(ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount);
        ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount = NULL;
    }
    if (ezmaxinvoicingcommission_response_compound->obj_contact_name) {
        custom_contact_name_response_free(ezmaxinvoicingcommission_response_compound->obj_contact_name);
        ezmaxinvoicingcommission_response_compound->obj_contact_name = NULL;
    }
    free(ezmaxinvoicingcommission_response_compound);
}

cJSON *ezmaxinvoicingcommission_response_compound_convertToJSON(ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingcommission_response_compound->pki_ezmaxinvoicingcommission_id
    if(ezmaxinvoicingcommission_response_compound->pki_ezmaxinvoicingcommission_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingcommissionID", ezmaxinvoicingcommission_response_compound->pki_ezmaxinvoicingcommission_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response_compound->fki_ezmaxinvoicingsummaryglobal_id
    if(ezmaxinvoicingcommission_response_compound->fki_ezmaxinvoicingsummaryglobal_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingsummaryglobalID", ezmaxinvoicingcommission_response_compound->fki_ezmaxinvoicingsummaryglobal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response_compound->fki_ezmaxpartner_id
    if(ezmaxinvoicingcommission_response_compound->fki_ezmaxpartner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpartnerID", ezmaxinvoicingcommission_response_compound->fki_ezmaxpartner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response_compound->fki_ezmaxrepresentative_id
    if(ezmaxinvoicingcommission_response_compound->fki_ezmaxrepresentative_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxrepresentativeID", ezmaxinvoicingcommission_response_compound->fki_ezmaxrepresentative_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start
    if (!ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingcommissionStart", ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end
    if (!ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingcommissionEnd", ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcommission_response_compound->i_ezmaxinvoicingcommission_days
    if (!ezmaxinvoicingcommission_response_compound->i_ezmaxinvoicingcommission_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingcommissionDays", ezmaxinvoicingcommission_response_compound->i_ezmaxinvoicingcommission_days) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount
    if (!ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingcommissionAmount", ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcommission_response_compound->obj_contact_name
    if(ezmaxinvoicingcommission_response_compound->obj_contact_name) {
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(ezmaxinvoicingcommission_response_compound->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_parseFromJSON(cJSON *ezmaxinvoicingcommission_response_compoundJSON){

    ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_local_var = NULL;

    // define the local variable for ezmaxinvoicingcommission_response_compound->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // ezmaxinvoicingcommission_response_compound->pki_ezmaxinvoicingcommission_id
    cJSON *pki_ezmaxinvoicingcommission_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "pkiEzmaxinvoicingcommissionID");
    if (cJSON_IsNull(pki_ezmaxinvoicingcommission_id)) {
        pki_ezmaxinvoicingcommission_id = NULL;
    }
    if (pki_ezmaxinvoicingcommission_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingcommission_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response_compound->fki_ezmaxinvoicingsummaryglobal_id
    cJSON *fki_ezmaxinvoicingsummaryglobal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "fkiEzmaxinvoicingsummaryglobalID");
    if (cJSON_IsNull(fki_ezmaxinvoicingsummaryglobal_id)) {
        fki_ezmaxinvoicingsummaryglobal_id = NULL;
    }
    if (fki_ezmaxinvoicingsummaryglobal_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicingsummaryglobal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response_compound->fki_ezmaxpartner_id
    cJSON *fki_ezmaxpartner_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "fkiEzmaxpartnerID");
    if (cJSON_IsNull(fki_ezmaxpartner_id)) {
        fki_ezmaxpartner_id = NULL;
    }
    if (fki_ezmaxpartner_id) { 
    if(!cJSON_IsNumber(fki_ezmaxpartner_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response_compound->fki_ezmaxrepresentative_id
    cJSON *fki_ezmaxrepresentative_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "fkiEzmaxrepresentativeID");
    if (cJSON_IsNull(fki_ezmaxrepresentative_id)) {
        fki_ezmaxrepresentative_id = NULL;
    }
    if (fki_ezmaxrepresentative_id) { 
    if(!cJSON_IsNumber(fki_ezmaxrepresentative_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_start
    cJSON *dt_ezmaxinvoicingcommission_start = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "dtEzmaxinvoicingcommissionStart");
    if (cJSON_IsNull(dt_ezmaxinvoicingcommission_start)) {
        dt_ezmaxinvoicingcommission_start = NULL;
    }
    if (!dt_ezmaxinvoicingcommission_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingcommission_start))
    {
    goto end; //String
    }

    // ezmaxinvoicingcommission_response_compound->dt_ezmaxinvoicingcommission_end
    cJSON *dt_ezmaxinvoicingcommission_end = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "dtEzmaxinvoicingcommissionEnd");
    if (cJSON_IsNull(dt_ezmaxinvoicingcommission_end)) {
        dt_ezmaxinvoicingcommission_end = NULL;
    }
    if (!dt_ezmaxinvoicingcommission_end) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingcommission_end))
    {
    goto end; //String
    }

    // ezmaxinvoicingcommission_response_compound->i_ezmaxinvoicingcommission_days
    cJSON *i_ezmaxinvoicingcommission_days = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "iEzmaxinvoicingcommissionDays");
    if (cJSON_IsNull(i_ezmaxinvoicingcommission_days)) {
        i_ezmaxinvoicingcommission_days = NULL;
    }
    if (!i_ezmaxinvoicingcommission_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingcommission_days))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingcommission_response_compound->d_ezmaxinvoicingcommission_amount
    cJSON *d_ezmaxinvoicingcommission_amount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "dEzmaxinvoicingcommissionAmount");
    if (cJSON_IsNull(d_ezmaxinvoicingcommission_amount)) {
        d_ezmaxinvoicingcommission_amount = NULL;
    }
    if (!d_ezmaxinvoicingcommission_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingcommission_amount))
    {
    goto end; //String
    }

    // ezmaxinvoicingcommission_response_compound->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compoundJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (obj_contact_name) { 
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive
    }


    ezmaxinvoicingcommission_response_compound_local_var = ezmaxinvoicingcommission_response_compound_create_internal (
        pki_ezmaxinvoicingcommission_id ? pki_ezmaxinvoicingcommission_id->valuedouble : 0,
        fki_ezmaxinvoicingsummaryglobal_id ? fki_ezmaxinvoicingsummaryglobal_id->valuedouble : 0,
        fki_ezmaxpartner_id ? fki_ezmaxpartner_id->valuedouble : 0,
        fki_ezmaxrepresentative_id ? fki_ezmaxrepresentative_id->valuedouble : 0,
        strdup(dt_ezmaxinvoicingcommission_start->valuestring),
        strdup(dt_ezmaxinvoicingcommission_end->valuestring),
        i_ezmaxinvoicingcommission_days->valuedouble,
        strdup(d_ezmaxinvoicingcommission_amount->valuestring),
        obj_contact_name ? obj_contact_name_local_nonprim : NULL
        );

    return ezmaxinvoicingcommission_response_compound_local_var;
end:
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    return NULL;

}
