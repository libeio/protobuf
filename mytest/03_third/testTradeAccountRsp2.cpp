
#include <cstdio>
#include <cassert>
#include <string>
#include <utility>

#include "trade.pb.h"

int main(int argc, char* argv[])
{   
    (void) argc;
    (void) argv;

    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    std::string strTradeAccountRsp;
    {
        printf("========== 开始序列化测试 ==========\n");
        mam::TradeAccountRsp trade_account_rsp;
        mam::TradeStockPosition * trade_stock_position;
        
        trade_account_rsp.set_accountid(188);
        trade_account_rsp.set_host("136.25.42.78");
        
        trade_stock_position = trade_account_rsp.mutable_positions()->add_stocks();
        trade_stock_position->set_symbol("60000.SH");
        trade_stock_position->set_quantity(5000);
        
        trade_stock_position = trade_account_rsp.mutable_positions()->add_stocks();
        trade_stock_position->set_symbol("60001.SH");
        trade_stock_position->set_quantity(5500);
        
        assert(trade_account_rsp.SerializeToString(&strTradeAccountRsp));
        
        printf("stream size=%lu\n", strTradeAccountRsp.size());
    }   // end namespace

    {
        printf("========== 开始结构化测试 ==========\n");
        mam::TradeAccountRsp trade_account_rsp;
        
        assert(trade_account_rsp.ParseFromString(strTradeAccountRsp));
        
        printf("accountId=%d ", trade_account_rsp.accountid());
        printf("host=%s\n", trade_account_rsp.host().c_str());

        decltype(std::declval<mam::StockInfos>().stocks_size()) i;
        for (i = 0; i < trade_account_rsp.positions().stocks_size(); i++) {
            const mam::TradeStockPosition & trade_stock_position = trade_account_rsp.positions().stocks(i);
            printf("symbol=%s ", trade_stock_position.symbol().c_str());
            printf("quantity=%d\n", trade_stock_position.quantity());
        }
    }   // end namespace
    
    return 0;
}
