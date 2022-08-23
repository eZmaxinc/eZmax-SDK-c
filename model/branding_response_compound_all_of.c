#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_response_compound_all_of.h"



branding_response_compound_all_of_t *branding_response_compound_all_of_create(
    char *s_branding_logourl
    ) {
    branding_response_compound_all_of_t *branding_response_compound_all_of_local_var = malloc(sizeof(branding_response_compound_all_of_t));
    if (!branding_response_compound_all_of_local_var) {
        return NULL;
    }
    branding_response_compound_all_of_local_var->s_branding_logourl = s_branding_logourl;

    return branding_response_compound_all_of_local_var;
}


void branding_response_compound_all_of_free(branding_response_compound_all_of_t *branding_response_compound_all_of) {
    if(NULL == branding_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_response_compound_all_of->s_branding_logourl) {
        free(branding_response_compound_all_of->s_branding_logourl);
        branding_response_compound_all_of->s_branding_logourl = NULL;
    }
    free(branding_response_compound_all_of);
}

cJSON *branding_response_compound_all_of_convertToJSON(branding_response_compound_all_of_t *branding_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // branding_response_compound_all_of->s_branding_logourl
    if(branding_response_compound_all_of->s_branding_logourl) {
    if(cJSON_AddStringToObject(item, "sBrandingLogourl", branding_response_compound_all_of->s_branding_logourl) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_response_compound_all_of_t *branding_response_compound_all_of_parseFromJSON(cJSON *branding_response_compound_all_ofJSON){

    branding_response_compound_all_of_t *branding_response_compound_all_of_local_var = NULL;

    // branding_response_compound_all_of->s_branding_logourl
    cJSON *s_branding_logourl = cJSON_GetObjectItemCaseSensitive(branding_response_compound_all_ofJSON, "sBrandingLogourl");
    if (s_branding_logourl) { 
    if(!cJSON_IsString(s_branding_logourl))
    {
    goto end; //String
    }
    }


    branding_response_compound_all_of_local_var = branding_response_compound_all_of_create (
        s_branding_logourl ? strdup(s_branding_logourl->valuestring) : NULL
        );

    return branding_response_compound_all_of_local_var;
end:
    return NULL;

}
