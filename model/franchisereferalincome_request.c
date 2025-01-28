#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_request.h"



static franchisereferalincome_request_t *franchisereferalincome_request_create_internal(
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
    char *s_franchisereferalincome_remoteid
    ) {
    franchisereferalincome_request_t *franchisereferalincome_request_local_var = malloc(sizeof(franchisereferalincome_request_t));
    if (!franchisereferalincome_request_local_var) {
        return NULL;
    }
    franchisereferalincome_request_local_var->pki_franchisereferalincome_id = pki_franchisereferalincome_id;
    franchisereferalincome_request_local_var->fki_franchisebroker_id = fki_franchisebroker_id;
    franchisereferalincome_request_local_var->fki_franchisereferalincomeprogram_id = fki_franchisereferalincomeprogram_id;
    franchisereferalincome_request_local_var->fki_period_id = fki_period_id;
    franchisereferalincome_request_local_var->d_franchisereferalincome_loan = d_franchisereferalincome_loan;
    franchisereferalincome_request_local_var->d_franchisereferalincome_franchiseamount = d_franchisereferalincome_franchiseamount;
    franchisereferalincome_request_local_var->d_franchisereferalincome_franchisoramount = d_franchisereferalincome_franchisoramount;
    franchisereferalincome_request_local_var->d_franchisereferalincome_agentamount = d_franchisereferalincome_agentamount;
    franchisereferalincome_request_local_var->dt_franchisereferalincome_disbursed = dt_franchisereferalincome_disbursed;
    franchisereferalincome_request_local_var->t_franchisereferalincome_comment = t_franchisereferalincome_comment;
    franchisereferalincome_request_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    franchisereferalincome_request_local_var->s_franchisereferalincome_remoteid = s_franchisereferalincome_remoteid;

    franchisereferalincome_request_local_var->_library_owned = 1;
    return franchisereferalincome_request_local_var;
}

__attribute__((deprecated)) franchisereferalincome_request_t *franchisereferalincome_request_create(
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
    char *s_franchisereferalincome_remoteid
    ) {
    return franchisereferalincome_request_create_internal (
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
        s_franchisereferalincome_remoteid
        );
}

void franchisereferalincome_request_free(franchisereferalincome_request_t *franchisereferalincome_request) {
    if(NULL == franchisereferalincome_request){
        return ;
    }
    if(franchisereferalincome_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "franchisereferalincome_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_request->d_franchisereferalincome_loan) {
        free(franchisereferalincome_request->d_franchisereferalincome_loan);
        franchisereferalincome_request->d_franchisereferalincome_loan = NULL;
    }
    if (franchisereferalincome_request->d_franchisereferalincome_franchiseamount) {
        free(franchisereferalincome_request->d_franchisereferalincome_franchiseamount);
        franchisereferalincome_request->d_franchisereferalincome_franchiseamount = NULL;
    }
    if (franchisereferalincome_request->d_franchisereferalincome_franchisoramount) {
        free(franchisereferalincome_request->d_franchisereferalincome_franchisoramount);
        franchisereferalincome_request->d_franchisereferalincome_franchisoramount = NULL;
    }
    if (franchisereferalincome_request->d_franchisereferalincome_agentamount) {
        free(franchisereferalincome_request->d_franchisereferalincome_agentamount);
        franchisereferalincome_request->d_franchisereferalincome_agentamount = NULL;
    }
    if (franchisereferalincome_request->dt_franchisereferalincome_disbursed) {
        free(franchisereferalincome_request->dt_franchisereferalincome_disbursed);
        franchisereferalincome_request->dt_franchisereferalincome_disbursed = NULL;
    }
    if (franchisereferalincome_request->t_franchisereferalincome_comment) {
        free(franchisereferalincome_request->t_franchisereferalincome_comment);
        franchisereferalincome_request->t_franchisereferalincome_comment = NULL;
    }
    if (franchisereferalincome_request->s_franchisereferalincome_remoteid) {
        free(franchisereferalincome_request->s_franchisereferalincome_remoteid);
        franchisereferalincome_request->s_franchisereferalincome_remoteid = NULL;
    }
    free(franchisereferalincome_request);
}

cJSON *franchisereferalincome_request_convertToJSON(franchisereferalincome_request_t *franchisereferalincome_request) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_request->pki_franchisereferalincome_id
    if(franchisereferalincome_request->pki_franchisereferalincome_id) {
    if(cJSON_AddNumberToObject(item, "pkiFranchisereferalincomeID", franchisereferalincome_request->pki_franchisereferalincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // franchisereferalincome_request->fki_franchisebroker_id
    if (!franchisereferalincome_request->fki_franchisebroker_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchisebrokerID", franchisereferalincome_request->fki_franchisebroker_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request->fki_franchisereferalincomeprogram_id
    if (!franchisereferalincome_request->fki_franchisereferalincomeprogram_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchisereferalincomeprogramID", franchisereferalincome_request->fki_franchisereferalincomeprogram_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request->fki_period_id
    if (!franchisereferalincome_request->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", franchisereferalincome_request->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request->d_franchisereferalincome_loan
    if (!franchisereferalincome_request->d_franchisereferalincome_loan) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeLoan", franchisereferalincome_request->d_franchisereferalincome_loan) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request->d_franchisereferalincome_franchiseamount
    if (!franchisereferalincome_request->d_franchisereferalincome_franchiseamount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeFranchiseamount", franchisereferalincome_request->d_franchisereferalincome_franchiseamount) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request->d_franchisereferalincome_franchisoramount
    if (!franchisereferalincome_request->d_franchisereferalincome_franchisoramount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeFranchisoramount", franchisereferalincome_request->d_franchisereferalincome_franchisoramount) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request->d_franchisereferalincome_agentamount
    if (!franchisereferalincome_request->d_franchisereferalincome_agentamount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dFranchisereferalincomeAgentamount", franchisereferalincome_request->d_franchisereferalincome_agentamount) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request->dt_franchisereferalincome_disbursed
    if (!franchisereferalincome_request->dt_franchisereferalincome_disbursed) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtFranchisereferalincomeDisbursed", franchisereferalincome_request->dt_franchisereferalincome_disbursed) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request->t_franchisereferalincome_comment
    if (!franchisereferalincome_request->t_franchisereferalincome_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tFranchisereferalincomeComment", franchisereferalincome_request->t_franchisereferalincome_comment) == NULL) {
    goto fail; //String
    }


    // franchisereferalincome_request->fki_franchiseoffice_id
    if (!franchisereferalincome_request->fki_franchiseoffice_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", franchisereferalincome_request->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisereferalincome_request->s_franchisereferalincome_remoteid
    if (!franchisereferalincome_request->s_franchisereferalincome_remoteid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFranchisereferalincomeRemoteid", franchisereferalincome_request->s_franchisereferalincome_remoteid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchisereferalincome_request_t *franchisereferalincome_request_parseFromJSON(cJSON *franchisereferalincome_requestJSON){

    franchisereferalincome_request_t *franchisereferalincome_request_local_var = NULL;

    // franchisereferalincome_request->pki_franchisereferalincome_id
    cJSON *pki_franchisereferalincome_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "pkiFranchisereferalincomeID");
    if (cJSON_IsNull(pki_franchisereferalincome_id)) {
        pki_franchisereferalincome_id = NULL;
    }
    if (pki_franchisereferalincome_id) { 
    if(!cJSON_IsNumber(pki_franchisereferalincome_id))
    {
    goto end; //Numeric
    }
    }

    // franchisereferalincome_request->fki_franchisebroker_id
    cJSON *fki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "fkiFranchisebrokerID");
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

    // franchisereferalincome_request->fki_franchisereferalincomeprogram_id
    cJSON *fki_franchisereferalincomeprogram_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "fkiFranchisereferalincomeprogramID");
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

    // franchisereferalincome_request->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "fkiPeriodID");
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

    // franchisereferalincome_request->d_franchisereferalincome_loan
    cJSON *d_franchisereferalincome_loan = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "dFranchisereferalincomeLoan");
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

    // franchisereferalincome_request->d_franchisereferalincome_franchiseamount
    cJSON *d_franchisereferalincome_franchiseamount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "dFranchisereferalincomeFranchiseamount");
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

    // franchisereferalincome_request->d_franchisereferalincome_franchisoramount
    cJSON *d_franchisereferalincome_franchisoramount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "dFranchisereferalincomeFranchisoramount");
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

    // franchisereferalincome_request->d_franchisereferalincome_agentamount
    cJSON *d_franchisereferalincome_agentamount = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "dFranchisereferalincomeAgentamount");
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

    // franchisereferalincome_request->dt_franchisereferalincome_disbursed
    cJSON *dt_franchisereferalincome_disbursed = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "dtFranchisereferalincomeDisbursed");
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

    // franchisereferalincome_request->t_franchisereferalincome_comment
    cJSON *t_franchisereferalincome_comment = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "tFranchisereferalincomeComment");
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

    // franchisereferalincome_request->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "fkiFranchiseofficeID");
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

    // franchisereferalincome_request->s_franchisereferalincome_remoteid
    cJSON *s_franchisereferalincome_remoteid = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_requestJSON, "sFranchisereferalincomeRemoteid");
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


    franchisereferalincome_request_local_var = franchisereferalincome_request_create_internal (
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
        strdup(s_franchisereferalincome_remoteid->valuestring)
        );

    return franchisereferalincome_request_local_var;
end:
    return NULL;

}
