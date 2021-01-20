
#include <cstdio>
#include <cstring>
#include <cstdint>
#include <cstddef>
#include <string>
#include <algorithm>
#include <type_traits>

#include "seventh.pb.h"

void opaque_print_values(const google::protobuf::Message& msg)
{
    const std::string tn = msg.GetDescriptor()->name();
    const int fc = msg.GetDescriptor()->field_count();
    int i;

    const google::protobuf::Reflection* ref = msg.GetReflection();

    printf("====> debug string:%s\n", msg.DebugString().c_str());

    for (i = 0; i < fc; i++) {
        const google::protobuf::FieldDescriptor * f = msg.GetDescriptor()->field(i);
        switch (f->type())
        {
            case google::protobuf::FieldDescriptor::Type::TYPE_DOUBLE:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const double x_d = ref->GetDouble(msg, f);
                printf("value: %f\n", x_d);
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_FLOAT:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const float x_f = ref->GetFloat(msg, f);
                printf("value: %f\n", x_f);
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_INT64:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const int64_t x_i64 = ref->GetInt64(msg, f);
                printf("value: %ld\n", x_i64);
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_UINT64:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const uint64_t x_ui64 = ref->GetUInt64(msg, f);
                printf("value: %lu\n", x_ui64);
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_INT32:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const int32_t x_i32 = ref->GetInt32(msg, f);
                printf("value: %d\n", x_i32);
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_UINT32:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const uint32_t x_ui32 = ref->GetUInt32(msg, f);
                printf("value: %u\n", x_ui32);
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_BOOL:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const bool x_bl = ref->GetBool(msg, f);
                printf("value: %s\n", x_bl ? "true" : "false");
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_STRING:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const std::string x_str = ref->GetString(msg, f);
                printf("value: %s\n", x_str.c_str());
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE:
            {
                printf("%d typeid:%-2d typename:%-8s\n", __LINE__, f->type(), f->name().c_str());

                if (f->is_map() && f->is_repeated()) {  // map
                    // not support
                } else if (f->is_repeated()) {
                    const google::protobuf::Message& submsg = ref->GetRepeatedMessage(msg, f, );
                } else if (f->is_optional()) {
                    const google::protobuf::Message& submsg = ref->GetMessage(msg, f);
                    opaque_print_values(submsg);
                }

                if (f->is_extension()) {
                    printf("-----> is_extension\n");
                }

                if (f->is_map()) {
                    printf("-----> is_map\n");
                }

                if (f->is_optional()) {
                    printf("-----> is_optional\n");
                }

                if (f->is_packable()) {
                    printf("-----> is_packable\n");
                }

                if (f->is_packed()) {
                    printf("-----> is_packed\n");
                }

                if (f->is_repeated()) {
                    printf("-----> is_repeated\n");
                }

                if (f->is_required()) {
                    printf("-----> is_required\n");
                }

                // const google::protobuf::FieldDescriptor * z_field = msg.GetDescriptor()->FindFieldByName("x_map");
                // const std::string z_string = z_field->DebugString();
                // printf("z_string=%s\n", z_string.c_str());

                // const std::string z2_string = z_field->PrintableNameForExtension();
                // printf("z2_string=%s\n", z2_string.c_str());

                // const std::string z3_string = z_field->full_name();
                // printf("z3_string=%s\n", z3_string.c_str());

                // const google::protobuf::Descriptor * zz_field = z_field->message_type();

                // const int zz_count = zz_field->field_count();
                // printf("zz_count=%d\n", zz_count);
                // for (int zzi = 0; zzi < zz_count; zzi++) {
                    
                // }

                // const std::string zz_name = zz_field->name();
                // printf("zz_name=%s\n", zz_name.c_str());

                // const google::protobuf::FieldDescriptor * result = ref->GetMessage(msg, f).GetDescriptor()->FindFieldByName();
                // unittest::TestAllTypes::descriptor()->FindFieldByName(name);

                // const google::protobuf::Message& x_map = ref->GetMessage(msg, f);
                // std::string x = x_map.GetDescriptor()->DebugString();
                // printf("x=%s\n", x.c_str());
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_BYTES:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const std::string x_bs = ref->GetString(msg, f);
                printf("value: ");
                for (size_t ti = 0; ti < x_bs.size(); ti++) {
                    printf("%02x ", static_cast<int>((unsigned char)x_bs[ti]));
                }
                printf("\n");
            }
            break;
            case google::protobuf::FieldDescriptor::Type::TYPE_ENUM:
            {
                printf("%d typeid:%-2d typename:%-8s", __LINE__, f->type(), f->name().c_str());
                const mam::ShouldType x_enum = static_cast<const mam::ShouldType>(ref->GetEnumValue(msg, f));
                printf("value: %d\n", x_enum);
            }
            break;
            default:
                printf("unexcepted type\n");
        }
    }

    return ;
}

int main(int argc, char* argv[])
{
    (void) argc;
    (void) argv;

    mam::Digimon msg;
    
    msg.set_x_d(3.14159);
    msg.set_x_f(2.71828);
    msg.set_x_i64(-123456789123);
    msg.set_x_ui64(123456789123);
    msg.set_x_i32(-123456789);
    msg.set_x_ui32(123456789);
    msg.set_x_bl(true);
    msg.set_x_str("Hello World");
    msg.set_x_enum(mam::ShouldType::TimeType);
    msg.set_x_bs(std::string{ '\x01', '\x00', '\x25', '\xaf', '\x34' });

    (*msg.mutable_x_map())["firstname"] = "Jim";
    (*msg.mutable_x_map())["lastname"] = "Green";

    msg.mutable_st()->set_y_i32(128);
    msg.mutable_st()->set_y_i32(256);

    opaque_print_values(msg);

    return 0;
}
