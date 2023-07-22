#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportcolumn.h"



common_reportcolumn_t *common_reportcolumn_create(
    common_reportcellstyle_t *obj_reportcellstyle_default,
    int i_reportcolumn_width
    ) {
    common_reportcolumn_t *common_reportcolumn_local_var = malloc(sizeof(common_reportcolumn_t));
    if (!common_reportcolumn_local_var) {
        return NULL;
    }
    common_reportcolumn_local_var->obj_reportcellstyle_default = obj_reportcellstyle_default;
    common_reportcolumn_local_var->i_reportcolumn_width = i_reportcolumn_width;

    return common_reportcolumn_local_var;
}


void common_reportcolumn_free(common_reportcolumn_t *common_reportcolumn) {
    if(NULL == common_reportcolumn){
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportcolumn->obj_reportcellstyle_default) {
        common_reportcellstyle_free(common_reportcolumn->obj_reportcellstyle_default);
        common_reportcolumn->obj_reportcellstyle_default = NULL;
    }
    free(common_reportcolumn);
}

cJSON *common_reportcolumn_convertToJSON(common_reportcolumn_t *common_reportcolumn) {
    cJSON *item = cJSON_CreateObject();

    // common_reportcolumn->obj_reportcellstyle_default
    if (!common_reportcolumn->obj_reportcellstyle_default) {
        goto fail;
    }
    cJSON *obj_reportcellstyle_default_local_JSON = common_reportcellstyle_convertToJSON(common_reportcolumn->obj_reportcellstyle_default);
    if(obj_reportcellstyle_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportcellstyleDefault", obj_reportcellstyle_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_reportcolumn->i_reportcolumn_width
    if (!common_reportcolumn->i_reportcolumn_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportcolumnWidth", common_reportcolumn->i_reportcolumn_width) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_reportcolumn_t *common_reportcolumn_parseFromJSON(cJSON *common_reportcolumnJSON){

    common_reportcolumn_t *common_reportcolumn_local_var = NULL;

    // define the local variable for common_reportcolumn->obj_reportcellstyle_default
    common_reportcellstyle_t *obj_reportcellstyle_default_local_nonprim = NULL;

    // common_reportcolumn->obj_reportcellstyle_default
    cJSON *obj_reportcellstyle_default = cJSON_GetObjectItemCaseSensitive(common_reportcolumnJSON, "objReportcellstyleDefault");
    if (!obj_reportcellstyle_default) {
        goto end;
    }

    
    obj_reportcellstyle_default_local_nonprim = common_reportcellstyle_parseFromJSON(obj_reportcellstyle_default); //nonprimitive

    // common_reportcolumn->i_reportcolumn_width
    cJSON *i_reportcolumn_width = cJSON_GetObjectItemCaseSensitive(common_reportcolumnJSON, "iReportcolumnWidth");
    if (!i_reportcolumn_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportcolumn_width))
    {
    goto end; //Numeric
    }


    common_reportcolumn_local_var = common_reportcolumn_create (
        obj_reportcellstyle_default_local_nonprim,
        i_reportcolumn_width->valuedouble
        );

    return common_reportcolumn_local_var;
end:
    if (obj_reportcellstyle_default_local_nonprim) {
        common_reportcellstyle_free(obj_reportcellstyle_default_local_nonprim);
        obj_reportcellstyle_default_local_nonprim = NULL;
    }
    return NULL;

}
