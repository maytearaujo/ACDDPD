object Form24: TForm24
  Left = 216
  Top = 134
  Width = 310
  Height = 255
  HelpContext = 520
  AutoSize = True
  BorderIcons = [biHelp]
  BorderWidth = 2
  Caption = 'Relatório de Aniversariantes'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  HelpFile = 'Ajuda'
  Menu = MainMenu1
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 298
    Height = 197
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Bevel1: TBevel
      Left = 10
      Top = 10
      Width = 278
      Height = 178
    end
    object SpeedButton1: TSpeedButton
      Left = 11
      Top = 161
      Width = 276
      Height = 25
      Caption = 'Relatório'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object GroupBox1: TGroupBox
      Left = 16
      Top = 45
      Width = 267
      Height = 116
      Caption = 'Selecione o Mês'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      object RadioButton1: TRadioButton
        Left = 6
        Top = 15
        Width = 73
        Height = 17
        Caption = '&Janeiro'
        TabOrder = 0
      end
      object RadioButton2: TRadioButton
        Left = 80
        Top = 15
        Width = 113
        Height = 17
        Caption = '&Fevereiro'
        TabOrder = 1
      end
      object RadioButton3: TRadioButton
        Left = 175
        Top = 15
        Width = 61
        Height = 17
        Caption = '&Março'
        TabOrder = 2
      end
      object RadioButton4: TRadioButton
        Left = 6
        Top = 40
        Width = 52
        Height = 17
        Caption = '&Abril'
        TabOrder = 3
      end
      object RadioButton5: TRadioButton
        Left = 80
        Top = 40
        Width = 54
        Height = 17
        Caption = 'Ma&io'
        TabOrder = 4
      end
      object RadioButton6: TRadioButton
        Left = 175
        Top = 40
        Width = 59
        Height = 17
        Caption = '&Junho'
        TabOrder = 5
      end
      object RadioButton7: TRadioButton
        Left = 6
        Top = 64
        Width = 59
        Height = 17
        Caption = 'J&ulho'
        TabOrder = 6
      end
      object RadioButton8: TRadioButton
        Left = 80
        Top = 64
        Width = 67
        Height = 17
        Caption = 'A&gosto'
        TabOrder = 7
      end
      object RadioButton9: TRadioButton
        Left = 175
        Top = 64
        Width = 87
        Height = 17
        Caption = '&Setembro'
        TabOrder = 8
      end
      object RadioButton10: TRadioButton
        Left = 6
        Top = 88
        Width = 70
        Height = 17
        Caption = '&Outubro'
        TabOrder = 9
      end
      object RadioButton11: TRadioButton
        Left = 80
        Top = 88
        Width = 80
        Height = 17
        Caption = '&Novembro'
        TabOrder = 10
      end
      object RadioButton12: TRadioButton
        Left = 175
        Top = 88
        Width = 83
        Height = 17
        Caption = '&Dezembro'
        TabOrder = 11
      end
    end
    object GroupBox2: TGroupBox
      Left = 17
      Top = 11
      Width = 266
      Height = 34
      Caption = 'Sócios'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      object RadioButton13: TRadioButton
        Left = 6
        Top = 15
        Width = 113
        Height = 17
        Caption = 'TeleMarketing'
        TabOrder = 0
        OnClick = RadioButton13Click
      end
      object RadioButton14: TRadioButton
        Left = 140
        Top = 15
        Width = 99
        Height = 17
        Caption = 'Outros Sócio'
        TabOrder = 1
        OnClick = RadioButton14Click
      end
    end
  end
  object MainMenu1: TMainMenu
    Left = 22
    Top = 146
    object Associacao: TMenuItem
      Caption = 'Associação'
      object Fechar: TMenuItem
        Caption = 'Fechar'
        OnClick = FecharClick
      end
      object Sair: TMenuItem
        Caption = 'Sair'
        ShortCut = 32883
        OnClick = SairClick
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
    end
  end
end
