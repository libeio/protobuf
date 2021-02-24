
#include <cstdio>
#include <cstring>
#include <cstdint>
#include <string>
#include <stdexcept>

#include "twelfth.pb.h"
#include "pbcsv.hpp"


const std::string power_max_ao[] = {
    "accountid:124,turnover:6597932.00,rate:0.9796,fee:4200.65,profit:3387.53",
    "accountid:354,turnover:16234198.98,rate:0.9563,fee:10261.29,profit:-3666.94",
    "accountid:709,turnover:9662809.95,rate:0.8864,fee:6182.78,profit:4611.06",
};

const std::string power_max_pd[] = {
    "accountid:124,symbol:002131.SZ,cfgvol:50800,buyvol:31800,sellvol:31800",
    "accountid:679,symbol:603986.SH,cfgvol:13500,buyvol:13500,sellvol:13406",
};

int main(int argc, char* argv[])
{
    (void) argc;
    (void) argv;

    mam::LoadResult lr;

    const std::string type_name = lr.GetDescriptor()->name();
    const int field_count = lr.GetDescriptor()->field_count();
    const google::protobuf::Reflection * ref = lr.GetReflection();

    for (int i = 0; i < field_count; i++) {
        const google::protobuf::FieldDescriptor * f = lr.GetDescriptor()->field(i);
        
        // const google::protobuf::FieldDescriptor * _f = lr.GetDescriptor()->FindFieldByName("map_account_overview");
        // if (_f == nullptr) {
        //     printf("Could not find it !\n");
        // } else {
        //     printf("Find it!\n");
        // }
        // return 0;

        printf("f->type_name=%s,f->name=%s\n", f->type_name(), f->name().c_str());
        switch (f->type()) {
            case google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE:
            {
                if (f->name() == "map_account_overview") {
                    assert(f->is_map());
                    google::protobuf::Message * _map_msg = ref->AddMessage(&lr, f);
                    assert(_map_msg->GetDescriptor()->field_count() == 2);
                    
                    const google::protobuf::Reflection * _map_msg_ref = _map_msg->GetReflection();

                    const google::protobuf::FieldDescriptor * _map_msg_key_f = _map_msg->GetDescriptor()->FindFieldByName("key");
                    printf("key field: name=%s, type_name=%s\n", _map_msg_key_f->name().c_str(), _map_msg_key_f->type_name());
                    _map_msg_ref->SetString(_map_msg, _map_msg_key_f, "Hello");

                    const google::protobuf::FieldDescriptor * _map_msg_val_f = _map_msg->GetDescriptor()->FindFieldByName("value");
                    printf("val field: name=%s, type_name=%s\n", _map_msg_val_f->name().c_str(), _map_msg_val_f->type_name());
                    
                    google::protobuf::Message * _map_msg_array_msg = _map_msg_ref->MutableMessage(_map_msg, _map_msg_val_f);
                                        
                    const std::string _map_msg_array_msg_type_name = _map_msg_array_msg->GetDescriptor()->name();
                    const int _map_msg_array_msg_field_count = _map_msg_array_msg->GetDescriptor()->field_count();

                    printf("val member array field: typeName=%s,fieldCount=%d\n", _map_msg_array_msg_type_name.c_str(), _map_msg_array_msg_field_count);
                    
                    const google::protobuf::Reflection * _map_msg_array_msg_ref = _map_msg_array_msg->GetReflection();

                    for (int j = 0; j < _map_msg_array_msg_field_count; j++) {
                        const google::protobuf::FieldDescriptor * _map_msg_array_msg_f = _map_msg_array_msg->GetDescriptor()->field(j);

                        assert(_map_msg_array_msg_f->is_repeated());
                        
                        for (size_t k = 0; k < sizeof(power_max_ao) / sizeof(power_max_ao[0]); k++) {
                            google::protobuf::Message * _map_msg_array_msg_ele_msg = _map_msg_array_msg_ref->AddMessage(_map_msg_array_msg, _map_msg_array_msg_f);
                            csv2pb(_map_msg_array_msg_ele_msg, power_max_ao[k]);
                        }
                    }
                } else if (f->name() == "map_profit_detail") {
                    google::protobuf::Message * _map_msg = ref->AddMessage(&lr, f);
                    assert(_map_msg->GetDescriptor()->field_count() == 2);

                    const google::protobuf::Reflection * _map_msg_ref = _map_msg->GetReflection();

                    const google::protobuf::FieldDescriptor * _map_msg_key_f = _map_msg->GetDescriptor()->FindFieldByName("key");
                    printf("key field: name=%s, type_name=%s\n", _map_msg_key_f->name().c_str(), _map_msg_key_f->type_name());
                    
                    _map_msg_ref->SetString(_map_msg, _map_msg_key_f, "World");

                    const google::protobuf::FieldDescriptor * _map_msg_val_f = _map_msg->GetDescriptor()->FindFieldByName("value");
                    printf("val field: name=%s, type_name=%s\n", _map_msg_val_f->name().c_str(), _map_msg_val_f->type_name());
                    
                    google::protobuf::Message * _map_msg_array_msg = _map_msg_ref->MutableMessage(_map_msg, _map_msg_val_f, nullptr);

                    const std::string _map_msg_array_msg_type_name = _map_msg_array_msg->GetDescriptor()->name();
                    const int _map_msg_array_msg_field_count = _map_msg_array_msg->GetDescriptor()->field_count();

                    printf("val member array field: typeName=%s,fieldCount=%d\n", _map_msg_array_msg_type_name.c_str(), _map_msg_array_msg_field_count);
                    
                    const google::protobuf::Reflection * _map_msg_array_msg_ref = _map_msg_array_msg->GetReflection();

                    for (int j = 0; j < _map_msg_array_msg_field_count; j++) {
                        const google::protobuf::FieldDescriptor * _map_msg_array_msg_f = _map_msg_array_msg->GetDescriptor()->field(j);

                        assert(_map_msg_array_msg_f->is_repeated());
                        
                        for (size_t k = 0; k < sizeof(power_max_pd) / sizeof(power_max_pd[0]); k++) {
                            google::protobuf::Message * _map_msg_array_msg_ele_msg = _map_msg_array_msg_ref->AddMessage(_map_msg_array_msg, _map_msg_array_msg_f);
                            csv2pb(_map_msg_array_msg_ele_msg, power_max_pd[k]);
                        }
                    }
                }
            }
            break;
            default:
            {
                ;
            }
        }
    }      

    // print to console
    {
        printf("\n");
        decltype(lr.map_account_overview().begin()) it;
        for (it = lr.map_account_overview().begin(); it != lr.map_account_overview().end(); it++) {
            printf("key=%s,size=%d\n", it->first.c_str(),  it->second.content_size());
            
            for (int i = 0; i < it->second.content_size(); i++) {
                const mam::AccountOverview & x = it->second.content(i);
                printf("accountid=%d,turnover=%.2f,rate=%.4f,fee=%.2f,profit=%.2f\n", x.accountid(), x.turnover(), x.rate(), x.fee(), x.profit());
            }
        }
    }

    {
        printf("\n");
        decltype(lr.map_profit_detail().begin()) it;
        for (it = lr.map_profit_detail().begin(); it != lr.map_profit_detail().end(); it++) {
            printf("key=%s,size=%d\n", it->first.c_str(),  it->second.content_size());
            
            for (int i = 0; i < it->second.content_size(); i++) {
                const mam::ProfitDetail & x = it->second.content(i);
                printf("accountid=%d,symbol=%s,cfgvol=%d,buyvol=%d,sellvol=%d\n", x.accountid(), x.symbol().c_str(), x.cfgvol(), x.buyvol(), x.sellvol());
            }
        }
    }

    return 0;
}
