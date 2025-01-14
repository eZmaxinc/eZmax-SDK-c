#ifndef field_e_ezdoctemplatedocument_privacylevel_TEST
#define field_e_ezdoctemplatedocument_privacylevel_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezdoctemplatedocument_privacylevel_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezdoctemplatedocument_privacylevel.h"
field_e_ezdoctemplatedocument_privacylevel_t* instantiate_field_e_ezdoctemplatedocument_privacylevel(int include_optional);



field_e_ezdoctemplatedocument_privacylevel_t* instantiate_field_e_ezdoctemplatedocument_privacylevel(int include_optional) {
  field_e_ezdoctemplatedocument_privacylevel_t* field_e_ezdoctemplatedocument_privacylevel = NULL;
  if (include_optional) {
    field_e_ezdoctemplatedocument_privacylevel = field_e_ezdoctemplatedocument_privacylevel_create(
    );
  } else {
    field_e_ezdoctemplatedocument_privacylevel = field_e_ezdoctemplatedocument_privacylevel_create(
    );
  }

  return field_e_ezdoctemplatedocument_privacylevel;
}


#ifdef field_e_ezdoctemplatedocument_privacylevel_MAIN

void test_field_e_ezdoctemplatedocument_privacylevel(int include_optional) {
    field_e_ezdoctemplatedocument_privacylevel_t* field_e_ezdoctemplatedocument_privacylevel_1 = instantiate_field_e_ezdoctemplatedocument_privacylevel(include_optional);

	cJSON* jsonfield_e_ezdoctemplatedocument_privacylevel_1 = field_e_ezdoctemplatedocument_privacylevel_convertToJSON(field_e_ezdoctemplatedocument_privacylevel_1);
	printf("field_e_ezdoctemplatedocument_privacylevel :\n%s\n", cJSON_Print(jsonfield_e_ezdoctemplatedocument_privacylevel_1));
	field_e_ezdoctemplatedocument_privacylevel_t* field_e_ezdoctemplatedocument_privacylevel_2 = field_e_ezdoctemplatedocument_privacylevel_parseFromJSON(jsonfield_e_ezdoctemplatedocument_privacylevel_1);
	cJSON* jsonfield_e_ezdoctemplatedocument_privacylevel_2 = field_e_ezdoctemplatedocument_privacylevel_convertToJSON(field_e_ezdoctemplatedocument_privacylevel_2);
	printf("repeating field_e_ezdoctemplatedocument_privacylevel:\n%s\n", cJSON_Print(jsonfield_e_ezdoctemplatedocument_privacylevel_2));
}

int main() {
  test_field_e_ezdoctemplatedocument_privacylevel(1);
  test_field_e_ezdoctemplatedocument_privacylevel(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezdoctemplatedocument_privacylevel_MAIN
#endif // field_e_ezdoctemplatedocument_privacylevel_TEST
