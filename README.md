### Requisitos:

1. **Arduino IDE**: Certifique-se de ter a Arduino IDE instalada no seu computador. Se ainda não tiver, pode baixá-la [aqui](https://www.arduino.cc/en/software).

2. **Placa ESP32 DevKit v1**: Você precisará de uma placa ESP32 DevKit v1 para carregar e executar o seu código.

### Passos para Execução:

#### 1. Configuração do Arduino IDE:

- Abra a Arduino IDE.
- Vá para "Arquivo" -> "Preferências".
- Na caixa de texto "URLs Adicionais para Gerenciador de Placas", adicione a seguinte URL: `https://dl.espressif.com/dl/package_esp32_index.json`
- Clique em "OK" para fechar a janela de preferências.
- Vá para "Ferramentas" -> "Placa" -> "Gerenciador de Placas".
- Na barra de busca, digite "ESP32" e instale o pacote "ESP32" da Espressif Systems.

#### 2. Conexão da ESP32 DevKit v1:

- Conecte a ESP32 DevKit v1 ao seu computador usando um cabo USB.

#### 3. Upload do Código:

- Copie o código que você forneceu e cole-o na Arduino IDE.
- Verifique se o nome do SSID (`"Esp32"`) e a senha (`"ti123"`) da sua rede Wi-Fi estão corretamente definidos.
- Vá para "Ferramentas" -> "Placa" e selecione "ESP32 Dev Module" como sua placa.
- Certifique-se de selecionar a porta correta em "Ferramentas" -> "Porta".
- Clique no botão de upload (ícone de seta apontando para a direita) na parte superior da janela da Arduino IDE para compilar e carregar o código na ESP32 DevKit v1.

#### 4. Monitor Serial:

- Depois de carregar o código, abra o "Monitor Serial" na Arduino IDE (Botão de lupa no canto superior direito ou "Ferramentas" -> "Monitor Serial").
- Você deve ver as mensagens de status, incluindo "Conectando à rede Wi-Fi..." e "Servidor HTTP iniciado.".

#### 5. Acesso ao Servidor Web:

- Depois que a ESP32 estiver conectada à rede Wi-Fi e o servidor HTTP estiver iniciado, abra um navegador da web em um dispositivo conectado à mesma rede.
- Digite o endereço IP atribuído à ESP32 no navegador (você pode encontrar isso no Monitor Serial) e pressione Enter.
- Você deve ver a página da web com o controle do LED, onde você pode ligar e desligar o LED.
teste