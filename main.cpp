#include <dpp/dpp.h>
#include <cstdlib>
#include <string>

int main() {
    //���ڵ� �� ��ū ȯ�溯�� �����ϱ�
    std::string token = std::getenv("DISCORD_BOT_TOKEN");
    dpp::cluster bot(token);

    bot.on_ready([](const dpp::ready_t& event){
        std::cout << "���� ����Ǿ����ϴ�!" << std::endl;
    });

    bot.start(dpp::st_wait);

    return 0;
}
