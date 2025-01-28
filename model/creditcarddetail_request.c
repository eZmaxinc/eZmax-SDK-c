#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcarddetail_request.h"



static creditcarddetail_request_t *creditcarddetail_request_create_internal(
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_civic,
    char *s_creditcarddetail_street,
    char *s_creditcarddetail_zip
    ) {
    creditcarddetail_request_t *creditcarddetail_request_local_var = malloc(sizeof(creditcarddetail_request_t));
    if (!creditcarddetail_request_local_var) {
        return NULL;
    }
    creditcarddetail_request_local_var->i_creditcarddetail_expirationmonth = i_creditcarddetail_expirationmonth;
    creditcarddetail_request_local_var->i_creditcarddetail_expirationyear = i_creditcarddetail_expirationyear;
    creditcarddetail_request_local_var->s_creditcarddetail_civic = s_creditcarddetail_civic;
    creditcarddetail_request_local_var->s_creditcarddetail_street = s_creditcarddetail_street;
    creditcarddetail_request_local_var->s_creditcarddetail_zip = s_creditcarddetail_zip;

    creditcarddetail_request_local_var->_library_owned = 1;
    return creditcarddetail_request_local_var;
}

__attribute__((deprecated)) creditcarddetail_request_t *creditcarddetail_request_create(
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_civic,
    char *s_creditcarddetail_street,
    char *s_creditcarddetail_zip
    ) {
    return creditcarddetail_request_create_internal (
        i_creditcarddetail_expirationmonth,
        i_creditcarddetail_expirationyear,
        s_creditcarddetail_civic,
        s_creditcarddetail_street,
        s_creditcarddetail_zip
        );
}

void creditcarddetail_request_free(creditcarddetail_request_t *creditcarddetail_request) {
    if(NULL == creditcarddetail_request){
        return ;
    }
    if(creditcarddetail_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcarddetail_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcarddetail_request->s_creditcarddetail_civic) {
        free(creditcarddetail_request->s_creditcarddetail_civic);
        creditcarddetail_request->s_creditcarddetail_civic = NULL;
    }
    if (creditcarddetail_request->s_creditcarddetail_street) {
        free(creditcarddetail_request->s_creditcarddetail_street);
        creditcarddetail_request->s_creditcarddetail_street = NULL;
    }
    if (creditcarddetail_request->s_creditcarddetail_zip) {
        free(creditcarddetail_request->s_creditcarddetail_zip);
        creditcarddetail_request->s_creditcarddetail_zip = NULL;
    }
    free(creditcarddetail_request);
}

cJSON *creditcarddetail_request_convertToJSON(creditcarddetail_request_t *creditcarddetail_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcarddetail_request->i_creditcarddetail_expirationmonth
    if (!creditcarddetail_request->i_creditcarddetail_expirationmonth) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailExpirationmonth", creditcarddetail_request->i_creditcarddetail_expirationmonth) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_request->i_creditcarddetail_expirationyear
    if (!creditcarddetail_request->i_creditcarddetail_expirationyear) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailExpirationyear", creditcarddetail_request->i_creditcarddetail_expirationyear) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_request->s_creditcarddetail_civic
    if (!creditcarddetail_request->s_creditcarddetail_civic) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailCivic", creditcarddetail_request->s_creditcarddetail_civic) == NULL) {
    goto fail; //String
    }


    // creditcarddetail_request->s_creditcarddetail_street
    if (!creditcarddetail_request->s_creditcarddetail_street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailStreet", creditcarddetail_request->s_creditcarddetail_street) == NULL) {
    goto fail; //String
    }


    // creditcarddetail_request->s_creditcarddetail_zip
    if (!creditcarddetail_request->s_creditcarddetail_zip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailZip", creditcarddetail_request->s_creditcarddetail_zip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcarddetail_request_t *creditcarddetail_request_parseFromJSON(cJSON *creditcarddetail_requestJSON){

    creditcarddetail_request_t *creditcarddetail_request_local_var = NULL;

    // creditcarddetail_request->i_creditcarddetail_expirationmonth
    cJSON *i_creditcarddetail_expirationmonth = cJSON_GetObjectItemCaseSensitive(creditcarddetail_requestJSON, "iCreditcarddetailExpirationmonth");
    if (cJSON_IsNull(i_creditcarddetail_expirationmonth)) {
        i_creditcarddetail_expirationmonth = NULL;
    }
    if (!i_creditcarddetail_expirationmonth) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_expirationmonth))
    {
    goto end; //Numeric
    }

    // creditcarddetail_request->i_creditcarddetail_expirationyear
    cJSON *i_creditcarddetail_expirationyear = cJSON_GetObjectItemCaseSensitive(creditcarddetail_requestJSON, "iCreditcarddetailExpirationyear");
    if (cJSON_IsNull(i_creditcarddetail_expirationyear)) {
        i_creditcarddetail_expirationyear = NULL;
    }
    if (!i_creditcarddetail_expirationyear) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_expirationyear))
    {
    goto end; //Numeric
    }

    // creditcarddetail_request->s_creditcarddetail_civic
    cJSON *s_creditcarddetail_civic = cJSON_GetObjectItemCaseSensitive(creditcarddetail_requestJSON, "sCreditcarddetailCivic");
    if (cJSON_IsNull(s_creditcarddetail_civic)) {
        s_creditcarddetail_civic = NULL;
    }
    if (!s_creditcarddetail_civic) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_civic))
    {
    goto end; //String
    }

    // creditcarddetail_request->s_creditcarddetail_street
    cJSON *s_creditcarddetail_street = cJSON_GetObjectItemCaseSensitive(creditcarddetail_requestJSON, "sCreditcarddetailStreet");
    if (cJSON_IsNull(s_creditcarddetail_street)) {
        s_creditcarddetail_street = NULL;
    }
    if (!s_creditcarddetail_street) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_street))
    {
    goto end; //String
    }

    // creditcarddetail_request->s_creditcarddetail_zip
    cJSON *s_creditcarddetail_zip = cJSON_GetObjectItemCaseSensitive(creditcarddetail_requestJSON, "sCreditcarddetailZip");
    if (cJSON_IsNull(s_creditcarddetail_zip)) {
        s_creditcarddetail_zip = NULL;
    }
    if (!s_creditcarddetail_zip) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_zip))
    {
    goto end; //String
    }


    creditcarddetail_request_local_var = creditcarddetail_request_create_internal (
        i_creditcarddetail_expirationmonth->valuedouble,
        i_creditcarddetail_expirationyear->valuedouble,
        strdup(s_creditcarddetail_civic->valuestring),
        strdup(s_creditcarddetail_street->valuestring),
        strdup(s_creditcarddetail_zip->valuestring)
        );

    return creditcarddetail_request_local_var;
end:
    return NULL;

}
