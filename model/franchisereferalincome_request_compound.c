#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_request_compound.h"



franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_create(
    address_request_t *obj_address,
    list_t *a_obj_contact,
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
    char *s_franchisereferalincome_remoteid
    ) {
    franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_local_var = malloc(sizeof(franchisereferalincome_request_compound_t));
    if (!franchisereferalincome_request_compound_local_var) {
        return NULL;
    }
    franchisereferalincome_request_compound_local_var->obj_address = obj_address;
    franchisereferalincome_request_compound_local_var->a_obj_contact = a_obj_contact;
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

    return franchisereferalincome_request_compound_local_var;
}


void franchisereferalincome_request_compound_free(franchisereferalincome_request_compound_t *franchisereferalincome_request_compound) {
    if(NULL == franchisereferalincome_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_request_compound->obj_address) {
        address_request_free(franchisereferalincome_request_compound->obj_address);
        franchisereferalincome_request_compound->obj_address = NULL;
    }
    if (franchisereferalincome_request_compound->a_obj_contact) {
        list_ForEach(listEntry, franchisereferalincome_request_compound->a_obj_contact) {
            contact_request_compound_free(listEntry->data);
        }
        list_free(franchisereferalincome_request_compound->a_obj_contact);
        franchisereferalincome_request_compound->a_obj_contact = NULL;
    }
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
    free(franchisereferalincome_request_compound);
}

cJSON *franchisereferalincome_request_compound_convertToJSON(franchisereferalincome_request_compound_t *franchisereferalincome_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_request_compound->obj_address
    if (!franchisereferalincome_request_compound->obj_address) {
        goto fail;
    }
    
    cJSON *obj_address_local_JSON = address_request_convertToJSON(franchisereferalincome_request_compound->obj_address);
    if(obj_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddress", obj_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
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

    // franchisereferalincome_request_compound->obj_address
    cJSON *obj_address = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "objAddress");
    if (!obj_address) {
        goto end;
    }

    
    obj_address_local_nonprim = address_request_parseFromJSON(obj_address); //nonprimitive

    // franchisereferalincome_request_compound->a_obj_contact
    cJSON *a_obj_contact = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "a_objContact");
    if (!a_obj_contact) {
        goto end;
    }

    list_t *a_obj_contactList;
    
    cJSON *a_obj_contact_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_contact)){
        goto end; //nonprimitive container
    }

    a_obj_contactList = list_create();

    cJSON_ArrayForEach(a_obj_contact_local_nonprimitive,a_obj_contact )
    {
        if(!cJSON_IsObject(a_obj_contact_local_nonprimitive)){
            goto end;
        }
        contact_request_compound_t *a_obj_contactItem = contact_request_compound_parseFromJSON(a_obj_contact_local_nonprimitive);

        list_addElement(a_obj_contactList, a_obj_contactItem);
    }

    // franchisereferalincome_request_compound->fki_franchisebroker_id
    cJSON *fki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiFranchisebrokerID");
    if (!fki_franchisebroker_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchisebroker_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->fki_franchisereferalincomeprogram_id
    cJSON *fki_franchisereferalincomeprogram_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiFranchisereferalincomeprogramID");
    if (!fki_franchisereferalincomeprogram_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchisereferalincomeprogram_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiPeriodID");
    if (!fki_period_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_period_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_loan
    cJSON *d_franchisereferalincome_loan = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeLoan");
    if (!d_franchisereferalincome_loan) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_loan))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_franchiseamount
    cJSON *d_franchisereferalincome_franchiseamount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeFranchiseamount");
    if (!d_franchisereferalincome_franchiseamount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_franchiseamount))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_franchisoramount
    cJSON *d_franchisereferalincome_franchisoramount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeFranchisoramount");
    if (!d_franchisereferalincome_franchisoramount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_franchisoramount))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->d_franchisereferalincome_agentamount
    cJSON *d_franchisereferalincome_agentamount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dFranchisereferalincomeAgentamount");
    if (!d_franchisereferalincome_agentamount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_franchisereferalincome_agentamount))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->dt_franchisereferalincome_disbursed
    cJSON *dt_franchisereferalincome_disbursed = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "dtFranchisereferalincomeDisbursed");
    if (!dt_franchisereferalincome_disbursed) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_franchisereferalincome_disbursed))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->t_franchisereferalincome_comment
    cJSON *t_franchisereferalincome_comment = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "tFranchisereferalincomeComment");
    if (!t_franchisereferalincome_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_franchisereferalincome_comment))
    {
    goto end; //String
    }

    // franchisereferalincome_request_compound->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "fkiFranchiseofficeID");
    if (!fki_franchiseoffice_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }

    // franchisereferalincome_request_compound->s_franchisereferalincome_remoteid
    cJSON *s_franchisereferalincome_remoteid = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compoundJSON, "sFranchisereferalincomeRemoteid");
    if (!s_franchisereferalincome_remoteid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_franchisereferalincome_remoteid))
    {
    goto end; //String
    }


    franchisereferalincome_request_compound_local_var = franchisereferalincome_request_compound_create (
        obj_address_local_nonprim,
        a_obj_contactList,
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
        strdup(s_franchisereferalincome_remoteid->valuestring)
        );

    return franchisereferalincome_request_compound_local_var;
end:
    if (obj_address_local_nonprim) {
        address_request_free(obj_address_local_nonprim);
        obj_address_local_nonprim = NULL;
    }
    return NULL;

}
