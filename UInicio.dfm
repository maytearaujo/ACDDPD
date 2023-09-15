object Form1: TForm1
  Left = 243
  Top = 139
  Width = 445
  Height = 392
  HelpContext = 540
  AutoSize = True
  BorderIcons = []
  BorderWidth = 2
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  HelpFile = 'Ajuda'
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 433
    Height = 334
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Bevel1: TBevel
      Left = 10
      Top = 10
      Width = 412
      Height = 315
    end
    object Image1: TImage
      Left = 63
      Top = 56
      Width = 300
      Height = 200
      Cursor = crSizeAll
      Center = True
      DragCursor = crHandPoint
      Stretch = True
      Transparent = True
    end
    object Image2: TImage
      Left = 9
      Top = 274
      Width = 73
      Height = 49
      Cursor = crSizeAll
      Transparent = True
    end
    object Label1: TLabel
      Left = 336
      Top = 304
      Width = 72
      Height = 16
      Cursor = crHandPoint
      Caption = 'Data Hora'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Transparent = True
    end
    object Label2: TLabel
      Left = 59
      Top = 13
      Width = 312
      Height = 20
      Cursor = crHandPoint
      Caption = 'Associação Cubatense de Defesa dos '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Transparent = True
    end
    object Label3: TLabel
      Left = 148
      Top = 268
      Width = 145
      Height = 13
      Cursor = crHandPoint
      Caption = 'Telefone: (13) 3361-6271'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Transparent = True
    end
    object Label4: TLabel
      Left = 92
      Top = 284
      Width = 141
      Height = 13
      Cursor = crHandPoint
      Caption = 'Site: www.acddpd.org.br'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Transparent = True
    end
    object Label5: TLabel
      Left = 255
      Top = 284
      Width = 155
      Height = 13
      Cursor = crHandPoint
      Caption = 'e-mail: acddpd@uol.com.br'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Transparent = True
    end
    object Label6: TLabel
      Left = 83
      Top = 32
      Width = 266
      Height = 20
      Cursor = crHandPoint
      Caption = 'Direitos das Pessoas Deficientes'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Transparent = True
    end
    object Animate1: TAnimate
      Left = 5
      Top = 269
      Width = 423
      Height = 60
      Align = alBottom
      Active = True
      CommonAVI = aviCopyFiles
      StopFrame = 31
    end
  end
  object Query1: TQuery
    Left = 35
    Top = 223
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 6
    Top = 223
  end
  object Timer1: TTimer
    Interval = 100
    OnTimer = Timer1Timer
    Left = 6
    Top = 165
  end
  object MainMenu1: TMainMenu
    Left = 6
    Top = 194
    object Associacao: TMenuItem
      Caption = 'Associação'
      object Aparencia: TMenuItem
        Caption = 'Aparência'
        OnClick = AparenciaClick
      end
      object Seguranca: TMenuItem
        Caption = 'Segurança'
        object Copiar: TMenuItem
          Caption = 'Copiar'
          OnClick = CopiarClick
        end
        object Restaurar: TMenuItem
          Caption = 'Restaurar'
          OnClick = RestaurarClick
        end
      end
      object Sair: TMenuItem
        Caption = 'Sair'
        ShortCut = 32883
        OnClick = SairClick
      end
    end
    object TeleMarketing: TMenuItem
      Caption = 'TeleMarketing'
      object Doador: TMenuItem
        Caption = 'Doador'
        object CadastrarDoadorTel: TMenuItem
          Caption = 'Cadastrar'
          object CadastrarDoadorTelPF: TMenuItem
            Caption = 'Pessoa &Física'
            OnClick = CadastrarDoadorTelPFClick
          end
          object CadastrarDoadorTelPJ: TMenuItem
            Caption = 'Pessoa &Jurídica'
            OnClick = CadastrarDoadorTelPJClick
          end
        end
        object ConsultarDoadorTel: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarDoadorTelClick
        end
        object AtualizarDoadorTel: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarDoadorTelClick
        end
        object ExcluirDoadorTel: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirDoadorTelClick
        end
      end
      object DoacaoTel: TMenuItem
        Caption = 'Doação'
        object CadastrarDoacaoTel: TMenuItem
          Caption = 'Cadastrar'
          OnClick = CadastrarDoacaoTelClick
        end
        object ConsultarDoacaoTel: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarDoacaoTelClick
        end
        object AtualizarDoacaoTel: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarDoacaoTelClick
        end
        object ExcluirDoacaoTel: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirDoacaoTelClick
        end
      end
    end
    object Socios1: TMenuItem
      Caption = 'Sócio'
      object Socios: TMenuItem
        Caption = 'Sócio'
        object CadastrarSocios: TMenuItem
          Caption = 'Cadastrar'
          object CadastrarFuncionario: TMenuItem
            Caption = 'Funcionário'
            OnClick = CadastrarFuncionarioClick
          end
          object CadastrarNatural: TMenuItem
            Caption = 'Natural'
            OnClick = CadastrarNaturalClick
          end
          object CadastrarContribuinte: TMenuItem
            Caption = 'Contribuinte'
            object CadastrarContribuintePF: TMenuItem
              Caption = 'Pessoa &Física'
              OnClick = CadastrarContribuintePFClick
            end
            object CadastrarContribuintePJ: TMenuItem
              Caption = 'Pessoa &Jurídica'
              OnClick = CadastrarContribuintePJClick
            end
          end
        end
        object ConsultarSocios: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarSociosClick
        end
        object AtualizarSocios: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarSociosClick
        end
        object ExcluirSocios: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirSociosClick
        end
      end
      object DoacaoSocios: TMenuItem
        Caption = 'Doação'
        object CadastrarDoacaoSocios: TMenuItem
          Caption = 'Cadastrar'
          OnClick = CadastrarDoacaoSociosClick
        end
        object ConsultarDoacaoSocios: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarDoacaoSociosClick
        end
        object AtualizarDoacaoSocios: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarDoacaoSociosClick
        end
        object ExcluirDoacaoSocios: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirDoacaoSociosClick
        end
      end
      object Historico: TMenuItem
        Caption = 'Histórico'
        object CadastrarHistorico: TMenuItem
          Caption = 'Cadastrar'
          OnClick = CadastrarHistoricoClick
        end
        object ConsultarHistorico: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarHistoricoClick
        end
        object AtualizarHistorico: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarHistoricoClick
        end
        object ExcluirHistorico: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirHistoricoClick
        end
      end
      object Atividade: TMenuItem
        Caption = 'Atividade'
        object CadastrarAtividade: TMenuItem
          Caption = 'Cadastrar'
          OnClick = CadastrarAtividadeClick
        end
        object ConsultarAtividade: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarAtividadeClick
        end
        object AtualizarAtividade: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarAtividadeClick
        end
        object ExcluirAtividade: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirAtividadeClick
        end
      end
      object Servico: TMenuItem
        Caption = 'Serviço'
        object CadastrarServico: TMenuItem
          Caption = 'Cadastrar'
          OnClick = CadastrarServicoClick
        end
        object ConsultarServico: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarServicoClick
        end
        object AtualizarServico: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarServicoClick
        end
        object ExcluirServico: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirServicoClick
        end
      end
    end
    object Relatorios: TMenuItem
      Caption = 'Relatório'
      object RelatorioNatural: TMenuItem
        Caption = 'Natural'
        HelpContext = 520
        OnClick = RelatorioNaturalClick
      end
      object RelatorioContribuinte: TMenuItem
        Caption = 'Contribuinte'
        OnClick = RelatorioContribuinteClick
      end
      object RelatorioTeleMarketing: TMenuItem
        Caption = 'TeleMarketing'
        object RelatorioSociosTeleMarketing: TMenuItem
          Caption = 'Sócios'
          OnClick = RelatorioSociosTeleMarketingClick
        end
        object RelatorioDoacaoTeleMarketing: TMenuItem
          Caption = 'Doações'
          OnClick = RelatorioDoacaoTeleMarketingClick
        end
      end
      object RelatorioFuncionario: TMenuItem
        Caption = 'Funcionário'
        OnClick = RelatorioFuncionarioClick
      end
      object RelatorioHistorico: TMenuItem
        Caption = 'Histórico'
        OnClick = RelatorioHistoricoClick
      end
      object RelatorioDoacao: TMenuItem
        Caption = 'Doação'
        OnClick = RelatorioDoacaoClick
      end
      object RelatorioAtividade: TMenuItem
        Caption = 'Atividade'
        OnClick = RelatorioAtividadeClick
      end
      object RelatorioServico: TMenuItem
        Caption = 'Serviço'
        OnClick = RelatorioServicoClick
      end
      object RelatorioAniversariantes: TMenuItem
        Caption = 'Aniversariantes'
        OnClick = RelatorioAniversariantesClick
      end
    end
    object Ajuda: TMenuItem
      Caption = 'Ajuda'
      object AjudaCadastro: TMenuItem
        Caption = 'Cadastro'
        HelpContext = 1
        ShortCut = 112
        OnClick = AjudaCadastroClick
      end
      object Sobre: TMenuItem
        Caption = 'Sobre'
        OnClick = SobreClick
      end
    end
  end
  object ColorDialog1: TColorDialog
    Ctl3D = True
    Left = 6
    Top = 136
  end
end
