#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_request_compound.h"



static franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_create_internal(
    int pki_franchisereferalincome_id,
    int fki_franchisebroker_id,
    int fki_franchisereferalincomeprogram_id,
    int fki_period_id,
    char *d_franchisereferalincome_loan,
    char *d_franchisereferalincome_franchiseamount,
    char *d_franchisereferalincome_franchisoramount,
    char *d_franchisereferalincome_agentamount,
    char *dt_franchisereferalincome_disbursed,
    char *t_franchisereferalincome_comment,
    int fki_franchiseoffice_id,
    char *s_franchisereferalincome_remoteid,
    address_request_t *obj_address,
    list_t *a_obj_contact
    ) {
    franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_local_var = malloc(sizeof(franchisereferalincome_request_compound_t));
    if (!franchisereferalincome_request_compound_local_var) {
        return NULL;
    }
    franchisereferalincome_request_compound_local_var->pki_franchisereferalincome_id = pki_franchisereferalincome_id;
    franchisereferalincome_request_compound_local_var->fki_franchisebroker_id = fki_franchisebroker_id;
    franchisereferalincome_request_compound_local_var->fki_franchisereferalincomeprogram_id = fki_franchisereferalincomeprogram_id;
    franchisereferalincome_request_compound_local_var->fki_period_id = fki_period_id;
    franchisereferalincome_request_compound_local_var->d_franchisereferalincome_loan = d_franchisereferalincome_loan;
    franchisereferalincome_request_compound_local_var->d_franchisereferalincome_franchiseamount = d_franchisereferalincome_franchiseamount;
    franchisereferalincome_request_compound_local_var->d_franchisereferalincome_franchisoramount = d_franchisereferalincome_franchisoramount;
    franchisereferalincome_request_compound_local_var->d_franchisereferalincome_agentamount = d_franchisereferalincome_agentamount;
    franchisereferalincome_request_compound_local_var->dt_franchisereferalincome_disbursed = dt_franchisereferalincome_disbursed;
    franchisereferalincome_request_compound_local_var->t_franchisereferalincome_comment = t_franchisereferalincome_comment;
    franchisereferalincome_request_compound_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    franchisereferalincome_request_compound_local_var->s_franchisereferalincome_remoteid = s_franchisereferalincome_remoteid;
    franchisereferalincome_request_compound_local_var->obj_address = obj_address;
    franchisereferalincome_request_compound_local_var->a_obj_contact = a_obj_contact;

    franchisereferalincome_request_compound_local_var->_library_owned = 1;
    return franchisereferalincome_request_compound_local_var;
}

__attribute__((deprecated)) franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_create(
    int pki_franchisereferalincome_id,
    int fki_franchisebroker_id,
    int fki_franchisereferalincomeprogram_id,
    int fki_period_id,
    char *d_franchisereferalincome_loan,
    char *d_franchisereferalincome_franchiseamount,
    char *d_franchisereferalincome_franchisoramount,
    char *d_franchisereferalincome_agentamount,
    char *dt_franchisereferalincome_disbursed,
    char *t_franchisereferalincome_comment,
    int fki_franchiseoffice_id,
    char *s_franchisereferalincome_remoteid,
    address_request_t *obj_address,
    list_t *a_obj_contact
    ) {
    return franchisereferalincome_request_compound_create_internal (
        pki_franchisereferalincome_id,
        fki_franchisebroker_id,
        fki_franchisereferalincomeprogram_id,
        fki_period_id,
        d_franchisereferalincome_loan,
        d_franchisereferalincome_franchiseamount,
        d_franchisereferalincome_franchisoramount,
        d_franchisereferalincome_agentamount,
        dt_franchisereferalincome_disbursed,
        t_franchisereferalincome_comment,
        fki_franchiseoffice_id,
        s_franchisereferalincome_remoteid,
        obj_address,
        a_obj_contact
        );
}

void franchisereferalincome_request_compound_free(franchisereferalincome_request_compound_t *franchisereferalincome_request_compound) {
    if(NULL == franchisereferalincome_request_compound){
        return ;
    }
    if(franchisereferalincome_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "franchisereferalincome_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_request_compound->d_franchisereferalincome_loan) {
        free(franchisereferalincome_request_compound->d_franchisereferalincome_loan);
        franchisereferalincome_request_compound->d_franchisereferalincome_loan = NULL;
    }
    if (franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount) {
        free(franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount);
        franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount = NULL;
    }
    if (franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount) {
        free(franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount);
        franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount = NULL;
    }
    if (franchisereferalincome_request_compound->d_franchisereferalincome_agentamount) {
        free(franchisereferalincome_request_compound->d_franchisereferalincome_agentamount);
        franchisereferalincome_request_compound->d_franchisereferalincome_agentamount = NULL;
    }
    if (franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed) {
        free(franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed);
        franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed = NULL;
    }
    if (franchisereferalincome_request_compound->t_franchisereferalincome_comment) {
        free(franchisereferalincome_request_compound->t_franchisereferalincome_comment);
        franchisereferalincome_request_compound->t_franchisereferalincome_comment = NULL;
    }
    if (franchisereferalincome_request_compound->s_franchisereferalincome_remoteid) {
        free(franchisereferalincome_request_compound->s_franchisereferalincome_remoteid);
        franchisereferalincome_request_compound->s_franchisereferalincome_remoteid = NULL;
    }
    if (franchisereferalincome_request_compound->obj_address) {
        address_request_free(franchisereferalincome_request_compound->obj_address);
        franchisereferalincome_request_compound->obj_address = NULL;
    }
    if (franchisereferalincome_request_compound->a_obj_contact) {
        list_ForEach(listEntry, franchisereferalincome_request_compound->a_obj_contact) {
            contact_request_compound_free(listEntry->data);
        }
        list_freeList(franchisereferalincome_request_compound->a_obj_contact);
        franchisereferalincome_request_compound->a_obj_contact = NULL;
    }
    free(franchisereferalincome_request_compound);
}

cJSON *franchisereferalincome_request_compound_convertToJSON(franchisereferalincome_request_compound_t *franchisereferalincome_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_request_compound->pki_franchisereferalincome_id
    if(franchisereferalincome_request_compound->pki_franchisereferalincome_id) {
    if(cJSON_AddNumberToObject(item, "pkiFranchisereferalincomeID", franchisereferalincome_request_compound->pki_franchisereferalincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // franchisereferalincome_request_compound->fki_franchisebroker_id
    if (!franchisereferalincome_request_compound->fki_franchisebroker_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchisebrokerID", franchisereferalincome_request_compound->fki_franchisebroker_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request_compound->fki_franchisereferalincomeprogram_id
    if (!franchisereferalincome_request_compound->fki_franchisereferalincomeprogram_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchisereferalincomeprogramID", franchisereferalincome_request_compound->fki_franchisereferalincomeprogram_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request_compound->fki_period_id
    if (!franchisereferalincome_request_compound->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", franchisereferalincome_request_compound->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request_compound->d_franchisereferalincome_loan
    if (!franchisereferalincome_request_compound->d_franchisereferalincome_loan) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeLoan", franchisereferalincome_request_compound->d_franchisereferalincome_loan) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount
    if (!franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeFranchiseamount", franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount
    if (!franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeFranchisoramount", franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->d_franchisereferalincome_agentamount
    if (!franchisereferalincome_request_compound->d_franchisereferalincome_agentamount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeAgentamount", franchisereferalincome_request_compound->d_franchisereferalincome_agentamount) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed
    if (!franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtFranchisereferalincomeDisbursed", franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->t_franchisereferalincome_comment
    if (!franchisereferalincome_request_compound->t_franchisereferalincome_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tFranchisereferalincomeComment", franchisereferalincome_request_compound->t_franchisereferalincome_comment) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->fki_franchiseoffice_id
    if (!franchisereferalincome_request_compound->fki_franchiseoffice_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", franchisereferalincome_request_compound->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request_compound->s_franchisereferalincome_remoteid
    if (!franchisereferalincome_request_compound->s_franchisereferalincome_remoteid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFranchisereferalincomeRemoteid", franchisereferalincome_request_compound->s_franchisereferalincome_remoteid) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request_compound->obj_address
    if(franchisereferalincome_request_compound->obj_address) {
    cJSON *obj_address_local_JSON = address_request_convertToJSON(franchisereferalincome_request_compound->obj_address);
    if(obj_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddress", obj_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // franchisereferalincome_request_compound->a_obj_contact
    if (!franchisereferalincome_request_compound->a_obj_contact) {
        goto fail;
    }
    cJSON *a_obj_contact = cJSON_AddArrayToObject(item, "a_objContact");
    if(a_obj_contact == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_contactListEntry;
    if (franchisereferalincome_request_compound->a_obj_contact) {
    list_ForEach(a_obj_contactListEntry, franchisereferalincome_request_compound->a_obj_contact) {
    cJSON *itemLocal = contact_request_compound_convertToJSON(a_obj_contactListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_contact, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_parseFromJSON(cJSON *franchisereferalincome_request_compoundJSON){

    franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_local_var = NULL;

    // define the local variable for franchisereferalincome_request_compound->obj_address
    address_request_t *obj_address_local_nonprim = NULL;

    // define the local list for franchisereferalincome_request_compound->a_obj_contact
    list_t *a_obj_contactList = NULL;

    // franchisereferalincome_request_compound->pki_franchisereferalincome_id
    cJSON *pki_franchisereferalincome_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "pkiFranchisereferalincomeID");
    if (cJSON_IsNull(pki_franchisereferalincome_id)) {
        pki_franchisereferalincome_id = NULL;
    }
    if (pki_franchisereferalincome_id) { 
    if(!cJSON_IsNumber(pki_franchisereferalincome_id))
    {
    goto end; //Numeric
    }
    }

    // franchisereferalincome_request_compound->fki_franchisebroker_id
    cJSON *fki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiFranchisebrokerID");
    if (cJSON_IsNull(fki_franchisebroker_id)) {
        fki_franchisebroker_id = NULL;
    }
    if (!fki_franchisebroker_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchisebroker_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->fki_franchisereferalincomeprogram_id
    cJSON *fki_franchisereferalincomeprogram_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiFranchisereferalincomeprogramID");
    if (cJSON_IsNull(fki_franchisereferalincomeprogram_id)) {
        fki_franchisereferalincomeprogram_id = NULL;
    }
    if (!fki_franchisereferalincomeprogram_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchisereferalincomeprogram_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiPeriodID");
    if (cJSON_IsNull(fki_period_id)) {
        fki_period_id = NULL;
    }
    if (!fki_period_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_period_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_loan
    cJSON *d_franchisereferalincome_loan = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeLoan");
    if (cJSON_IsNull(d_franchisereferalincome_loan)) {
        d_franchisereferalincome_loan = NULL;
    }
    if (!d_franchisereferalincome_loan) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_loan))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount
    cJSON *d_franchisereferalincome_franchiseamount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeFranchiseamount");
    if (cJSON_IsNull(d_franchisereferalincome_franchiseamount)) {
        d_franchisereferalincome_franchiseamount = NULL;
    }
    if (!d_franchisereferalincome_franchiseamount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_franchiseamount))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount
    cJSON *d_franchisereferalincome_franchisoramount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeFranchisoramount");
    if (cJSON_IsNull(d_franchisereferalincome_franchisoramount)) {
        d_franchisereferalincome_franchisoramount = NULL;
    }
    if (!d_franchisereferalincome_franchisoramount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_franchisoramount))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_agentamount
    cJSON *d_franchisereferalincome_agentamount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeAgentamount");
    if (cJSON_IsNull(d_franchisereferalincome_agentamount)) {
        d_franchisereferalincome_agentamount = NULL;
    }
    if (!d_franchisereferalincome_agentamount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_agentamount))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed
    cJSON *dt_franchisereferalincome_disbursed = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dtFranchisereferalincomeDisbursed");
    if (cJSON_IsNull(dt_franchisereferalincome_disbursed)) {
        dt_franchisereferalincome_disbursed = NULL;
    }
    if (!dt_franchisereferalincome_disbursed) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_franchisereferalincome_disbursed))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->t_franchisereferalincome_comment
    cJSON *t_franchisereferalincome_comment = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "tFranchisereferalincomeComment");
    if (cJSON_IsNull(t_franchisereferalincome_comment)) {
        t_franchisereferalincome_comment = NULL;
    }
    if (!t_franchisereferalincome_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_franchisereferalincome_comment))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiFranchiseofficeID");
    if (cJSON_IsNull(fki_franchiseoffice_id)) {
        fki_franchiseoffice_id = NULL;
    }
    if (!fki_franchiseoffice_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->s_franchisereferalincome_remoteid
    cJSON *s_franchisereferalincome_remoteid = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "sFranchisereferalincomeRemoteid");
    if (cJSON_IsNull(s_franchisereferalincome_remoteid)) {
        s_franchisereferalincome_remoteid = NULL;
    }
    if (!s_franchisereferalincome_remoteid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_franchisereferalincome_remoteid))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->obj_address
    cJSON *obj_address = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "objAddress");
    if (cJSON_IsNull(obj_address)) {
        obj_address = NULL;
    }
    if (obj_address) { 
    obj_address_local_nonprim = address_request_parseFromJSON(obj_address); //nonprimitive
    }

    // franchisereferalincome_request_compound->a_obj_contact
    cJSON *a_obj_contact = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "a_objContact");
    if (cJSON_IsNull(a_obj_contact)) {
        a_obj_contact = NULL;
    }
    if (!a_obj_contact) {
        goto end;
    }

    
    cJSON *a_obj_contact_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_contact)){
        goto end; //nonprimitive container
    }

    a_obj_contactList = list_createList();

    cJSON_ArrayForEach(a_obj_contact_local_nonprimitive,a_obj_contact )
    {
        if(!cJSON_IsObject(a_obj_contact_local_nonprimitive)){
            goto end;
        }
        contact_request_compound_t *a_obj_contactItem = contact_request_compound_parseFromJSON(a_obj_contact_local_nonprimitive);

        list_addElement(a_obj_contactList, a_obj_contactItem);
    }


    franchisereferalincome_request_compound_local_var = franchisereferalincome_request_compound_create_internal (
        pki_franchisereferalincome_id ? pki_franchisereferalincome_id->valuedouble : 0,
        fki_franchisebroker_id->valuedouble,
        fki_franchisereferalincomeprogram_id->valuedouble,
        fki_period_id->valuedouble,
        strdup(d_franchisereferalincome_loan->valuestring),
        strdup(d_franchisereferalincome_franchiseamount->valuestring),
        strdup(d_franchisereferalincome_franchisoramount->valuestring),
        strdup(d_franchisereferalincome_agentamount->valuestring),
        strdup(dt_franchisereferalincome_disbursed->valuestring),
        strdup(t_franchisereferalincome_comment->valuestring),
        fki_franchiseoffice_id->valuedouble,
        strdup(s_franchisereferalincome_remoteid->valuestring),
        obj_address ? obj_address_local_nonprim : NULL,
        a_obj_contactList
        );

    return franchisereferalincome_request_compound_local_var;
end:
    if (obj_address_local_nonprim) {
        address_request_free(obj_address_local_nonprim);
        obj_address_local_nonprim = NULL;
    }
    if (a_obj_contactList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_contactList) {
            contact_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_contactList);
        a_obj_contactList = NULL;
    }
    return NULL;

}
