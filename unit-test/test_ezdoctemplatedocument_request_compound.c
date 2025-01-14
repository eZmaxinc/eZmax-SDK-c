#ifndef ezdoctemplatedocument_request_compound_TEST
#define ezdoctemplatedocument_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_request_compound.h"
ezdoctemplatedocument_request_compound_t* instantiate_ezdoctemplatedocument_request_compound(int include_optional);

#include "test_multilingual_ezdoctemplatedocument_name.c"


ezdoctemplatedocument_request_compound_t* instantiate_ezdoctemplatedocument_request_compound(int include_optional) {
  ezdoctemplatedocument_request_compound_t* ezdoctemplatedocument_request_compound = NULL;
  if (include_optional) {
    ezdoctemplatedocument_request_compound = ezdoctemplatedocument_request_compound_create(
      95,
      2,
      5,
      7,
      4,
      ezmax_api_definition__full_ezdoctemplatedocument_request_compound__Company,
      true,
       // false, not to have infinite recursion
      instantiate_multilingual_ezdoctemplatedocument_name(0)
    );
  } else {
    ezdoctemplatedocument_request_compound = ezdoctemplatedocument_request_compound_create(
      95,
      2,
      5,
      7,
      4,
      ezmax_api_definition__full_ezdoctemplatedocument_request_compound__Company,
      true,
      NULL
    );
  }

  return ezdoctemplatedocument_request_compound;
}


#ifdef ezdoctemplatedocument_request_compound_MAIN

void test_ezdoctemplatedocument_request_compound(int include_optional) {
    ezdoctemplatedocument_request_compound_t* ezdoctemplatedocument_request_compound_1 = instantiate_ezdoctemplatedocument_request_compound(include_optional);

	cJSON* jsonezdoctemplatedocument_request_compound_1 = ezdoctemplatedocument_request_compound_convertToJSON(ezdoctemplatedocument_request_compound_1);
	printf("ezdoctemplatedocument_request_compound :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_request_compound_1));
	ezdoctemplatedocument_request_compound_t* ezdoctemplatedocument_request_compound_2 = ezdoctemplatedocument_request_compound_parseFromJSON(jsonezdoctemplatedocument_request_compound_1);
	cJSON* jsonezdoctemplatedocument_request_compound_2 = ezdoctemplatedocument_request_compound_convertToJSON(ezdoctemplatedocument_request_compound_2);
	printf("repeating ezdoctemplatedocument_request_compound:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_request_compound_2));
}

int main() {
  test_ezdoctemplatedocument_request_compound(1);
  test_ezdoctemplatedocument_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_request_compound_MAIN
#endif // ezdoctemplatedocument_request_compound_TEST
