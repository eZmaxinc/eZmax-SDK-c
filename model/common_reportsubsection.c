#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportsubsection.h"



common_reportsubsection_t *common_reportsubsection_create(
    common_reportsubsectionpart_t *obj_reportsubsectionpart_header,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_body,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_footer
    ) {
    common_reportsubsection_t *common_reportsubsection_local_var = malloc(sizeof(common_reportsubsection_t));
    if (!common_reportsubsection_local_var) {
        return NULL;
    }
    common_reportsubsection_local_var->obj_reportsubsectionpart_header = obj_reportsubsectionpart_header;
    common_reportsubsection_local_var->obj_reportsubsectionpart_body = obj_reportsubsectionpart_body;
    common_reportsubsection_local_var->obj_reportsubsectionpart_footer = obj_reportsubsectionpart_footer;

    return common_reportsubsection_local_var;
}


void common_reportsubsection_free(common_reportsubsection_t *common_reportsubsection) {
    if(NULL == common_reportsubsection){
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportsubsection->obj_reportsubsectionpart_header) {
        common_reportsubsectionpart_free(common_reportsubsection->obj_reportsubsectionpart_header);
        common_reportsubsection->obj_reportsubsectionpart_header = NULL;
    }
    if (common_reportsubsection->obj_reportsubsectionpart_body) {
        common_reportsubsectionpart_free(common_reportsubsection->obj_reportsubsectionpart_body);
        common_reportsubsection->obj_reportsubsectionpart_body = NULL;
    }
    if (common_reportsubsection->obj_reportsubsectionpart_footer) {
        common_reportsubsectionpart_free(common_reportsubsection->obj_reportsubsectionpart_footer);
        common_reportsubsection->obj_reportsubsectionpart_footer = NULL;
    }
    free(common_reportsubsection);
}

cJSON *common_reportsubsection_convertToJSON(common_reportsubsection_t *common_reportsubsection) {
    cJSON *item = cJSON_CreateObject();

    // common_reportsubsection->obj_reportsubsectionpart_header
    if (!common_reportsubsection->obj_reportsubsectionpart_header) {
        goto fail;
    }
    cJSON *obj_reportsubsectionpart_header_local_JSON = common_reportsubsectionpart_convertToJSON(common_reportsubsection->obj_reportsubsectionpart_header);
    if(obj_reportsubsectionpart_header_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportsubsectionpartHeader", obj_reportsubsectionpart_header_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_reportsubsection->obj_reportsubsectionpart_body
    if (!common_reportsubsection->obj_reportsubsectionpart_body) {
        goto fail;
    }
    cJSON *obj_reportsubsectionpart_body_local_JSON = common_reportsubsectionpart_convertToJSON(common_reportsubsection->obj_reportsubsectionpart_body);
    if(obj_reportsubsectionpart_body_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportsubsectionpartBody", obj_reportsubsectionpart_body_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_reportsubsection->obj_reportsubsectionpart_footer
    if (!common_reportsubsection->obj_reportsubsectionpart_footer) {
        goto fail;
    }
    cJSON *obj_reportsubsectionpart_footer_local_JSON = common_reportsubsectionpart_convertToJSON(common_reportsubsection->obj_reportsubsectionpart_footer);
    if(obj_reportsubsectionpart_footer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportsubsectionpartFooter", obj_reportsubsectionpart_footer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_reportsubsection_t *common_reportsubsection_parseFromJSON(cJSON *common_reportsubsectionJSON){

    common_reportsubsection_t *common_reportsubsection_local_var = NULL;

    // define the local variable for common_reportsubsection->obj_reportsubsectionpart_header
    common_reportsubsectionpart_t *obj_reportsubsectionpart_header_local_nonprim = NULL;

    // define the local variable for common_reportsubsection->obj_reportsubsectionpart_body
    common_reportsubsectionpart_t *obj_reportsubsectionpart_body_local_nonprim = NULL;

    // define the local variable for common_reportsubsection->obj_reportsubsectionpart_footer
    common_reportsubsectionpart_t *obj_reportsubsectionpart_footer_local_nonprim = NULL;

    // common_reportsubsection->obj_reportsubsectionpart_header
    cJSON *obj_reportsubsectionpart_header = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "objReportsubsectionpartHeader");
    if (!obj_reportsubsectionpart_header) {
        goto end;
    }

    
    obj_reportsubsectionpart_header_local_nonprim = common_reportsubsectionpart_parseFromJSON(obj_reportsubsectionpart_header); //nonprimitive

    // common_reportsubsection->obj_reportsubsectionpart_body
    cJSON *obj_reportsubsectionpart_body = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "objReportsubsectionpartBody");
    if (!obj_reportsubsectionpart_body) {
        goto end;
    }

    
    obj_reportsubsectionpart_body_local_nonprim = common_reportsubsectionpart_parseFromJSON(obj_reportsubsectionpart_body); //nonprimitive

    // common_reportsubsection->obj_reportsubsectionpart_footer
    cJSON *obj_reportsubsectionpart_footer = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "objReportsubsectionpartFooter");
    if (!obj_reportsubsectionpart_footer) {
        goto end;
    }

    
    obj_reportsubsectionpart_footer_local_nonprim = common_reportsubsectionpart_parseFromJSON(obj_reportsubsectionpart_footer); //nonprimitive


    common_reportsubsection_local_var = common_reportsubsection_create (
        obj_reportsubsectionpart_header_local_nonprim,
        obj_reportsubsectionpart_body_local_nonprim,
        obj_reportsubsectionpart_footer_local_nonprim
        );

    return common_reportsubsection_local_var;
end:
    if (obj_reportsubsectionpart_header_local_nonprim) {
        common_reportsubsectionpart_free(obj_reportsubsectionpart_header_local_nonprim);
        obj_reportsubsectionpart_header_local_nonprim = NULL;
    }
    if (obj_reportsubsectionpart_body_local_nonprim) {
        common_reportsubsectionpart_free(obj_reportsubsectionpart_body_local_nonprim);
        obj_reportsubsectionpart_body_local_nonprim = NULL;
    }
    if (obj_reportsubsectionpart_footer_local_nonprim) {
        common_reportsubsectionpart_free(obj_reportsubsectionpart_footer_local_nonprim);
        obj_reportsubsectionpart_footer_local_nonprim = NULL;
    }
    return NULL;

}
