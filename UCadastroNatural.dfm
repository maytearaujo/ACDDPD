object Form4: TForm4
  Left = 181
  Top = 84
  Width = 617
  Height = 482
  AutoSize = True
  BorderIcons = []
  Caption = 'Cadastro de Sócio Natural'
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
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton3: TSpeedButton
    Left = 406
    Top = 403
    Width = 203
    Height = 25
    Caption = 'Limpar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton3Click
  end
  object SpeedButton2: TSpeedButton
    Left = 203
    Top = 403
    Width = 203
    Height = 25
    Caption = 'Cadastrar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton2Click
  end
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 403
    Width = 203
    Height = 25
    Caption = 'Verificar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 609
    Height = 401
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label21: TLabel
      Left = 10
      Top = 236
      Width = 65
      Height = 13
      Caption = 'Deficiência'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label23: TLabel
      Left = 10
      Top = 264
      Width = 114
      Height = 13
      Caption = 'Membros na Família'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label24: TLabel
      Left = 207
      Top = 264
      Width = 127
      Height = 13
      Caption = 'Trabalhadores Família'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label25: TLabel
      Left = 394
      Top = 264
      Width = 82
      Height = 13
      Caption = 'Renda Mensal'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label27: TLabel
      Left = 380
      Top = 293
      Width = 106
      Height = 13
      Caption = 'Tempo Residência'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label26: TLabel
      Left = 10
      Top = 293
      Width = 85
      Height = 13
      Caption = 'Tipo de Imóvel'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label28: TLabel
      Left = 10
      Top = 321
      Width = 95
      Height = 13
      Caption = 'Parecer Técnico'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label29: TLabel
      Left = 10
      Top = 349
      Width = 69
      Height = 13
      Caption = 'Observação'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label22: TLabel
      Left = 498
      Top = 237
      Width = 70
      Height = 13
      Caption = 'Nº de Filhos'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 441
      Top = 14
      Width = 82
      Height = 13
      Caption = 'Data Cadastro'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 10
      Top = 41
      Width = 33
      Height = 13
      Caption = 'Nome'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 320
      Top = 41
      Width = 19
      Height = 13
      Caption = 'RG'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 478
      Top = 41
      Width = 24
      Height = 13
      Caption = 'CPF'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 10
      Top = 96
      Width = 67
      Height = 13
      Caption = 'Nascimento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Left = 218
      Top = 96
      Width = 73
      Height = 13
      Caption = 'Naturalidade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Left = 181
      Top = 125
      Width = 68
      Height = 13
      Caption = 'Estado Civil'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 10
      Top = 125
      Width = 29
      Height = 13
      Caption = 'Sexo'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label12: TLabel
      Left = 373
      Top = 125
      Width = 74
      Height = 13
      Caption = 'Escolaridade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label14: TLabel
      Left = 10
      Top = 179
      Width = 76
      Height = 13
      Caption = 'Complemento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label15: TLabel
      Left = 280
      Top = 183
      Width = 34
      Height = 13
      Caption = 'Bairro'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label19: TLabel
      Left = 322
      Top = 208
      Width = 51
      Height = 13
      Caption = 'Telefone'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label16: TLabel
      Left = 504
      Top = 181
      Width = 25
      Height = 13
      Caption = 'CEP'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label20: TLabel
      Left = 470
      Top = 208
      Width = 40
      Height = 13
      Caption = 'Celular'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label17: TLabel
      Left = 10
      Top = 207
      Width = 40
      Height = 13
      Caption = 'Cidade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label18: TLabel
      Left = 210
      Top = 207
      Width = 40
      Height = 13
      Caption = 'Estado'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label13: TLabel
      Left = 10
      Top = 151
      Width = 55
      Height = 13
      Caption = 'Endereço'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 10
      Top = 68
      Width = 25
      Height = 13
      Caption = 'Mãe'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 318
      Top = 69
      Width = 19
      Height = 13
      Caption = 'Pai'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 264
      Top = 14
      Width = 42
      Height = 13
      Caption = 'Natural'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label30: TLabel
      Left = 10
      Top = 14
      Width = 40
      Height = 13
      Caption = 'Código'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit9: TEdit
      Left = 85
      Top = 232
      Width = 360
      Height = 21
      MaxLength = 100
      TabOrder = 20
    end
    object MaskEdit8: TMaskEdit
      Left = 572
      Top = 233
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 21
      Text = '  '
    end
    object MaskEdit9: TMaskEdit
      Left = 133
      Top = 261
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 22
      Text = '  '
    end
    object MaskEdit10: TMaskEdit
      Left = 339
      Top = 261
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 23
      Text = '  '
    end
    object Edit10: TEdit
      Left = 478
      Top = 261
      Width = 120
      Height = 21
      MaxLength = 20
      TabOrder = 24
    end
    object ComboBox5: TComboBox
      Left = 100
      Top = 289
      Width = 85
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 25
      Items.Strings = (
        'Alugado'
        'Cedido'
        'Próprio')
    end
    object ComboBox6: TComboBox
      Left = 210
      Top = 289
      Width = 85
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 26
      Items.Strings = (
        'Alvenaria'
        'Madeira'
        'Misto')
    end
    object Edit11: TEdit
      Left = 498
      Top = 289
      Width = 100
      Height = 21
      MaxLength = 10
      TabOrder = 27
    end
    object Edit13: TEdit
      Left = 89
      Top = 345
      Width = 511
      Height = 21
      MaxLength = 255
      TabOrder = 29
    end
    object Edit12: TEdit
      Left = 119
      Top = 317
      Width = 480
      Height = 21
      MaxLength = 255
      TabOrder = 28
    end
    object MaskEdit1: TMaskEdit
      Left = 529
      Top = 10
      Width = 70
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 1
      Text = '  /  /    '
      OnExit = MaskEdit1Exit
    end
    object MaskEdit2: TMaskEdit
      Left = 346
      Top = 37
      Width = 87
      Height = 21
      EditMask = 'ccc.ccc.ccc-cc;1;_'
      MaxLength = 14
      TabOrder = 4
      Text = '   .   .   -  '
    end
    object MaskEdit3: TMaskEdit
      Left = 508
      Top = 37
      Width = 89
      Height = 21
      EditMask = '999.999.999-99;1;_'
      MaxLength = 14
      TabOrder = 5
      Text = '   .   .   -  '
    end
    object Edit1: TEdit
      Left = 50
      Top = 37
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 2
    end
    object ComboBox1: TComboBox
      Left = 50
      Top = 120
      Width = 89
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 9
      Items.Strings = (
        'Feminino'
        'Masculino')
    end
    object Edit4: TEdit
      Left = 298
      Top = 92
      Width = 300
      Height = 21
      MaxLength = 30
      TabOrder = 8
    end
    object MaskEdit4: TMaskEdit
      Left = 85
      Top = 92
      Width = 68
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 7
      Text = '  /  /    '
      OnExit = MaskEdit4Exit
    end
    object ComboBox3: TComboBox
      Left = 453
      Top = 120
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 11
      Items.Strings = (
        '1º Grau Completo'
        '1º Grau Incompleto'
        '2º Grau Completo'
        '2º Grau Incompleto'
        'Analfabeto'
        'Primário Completo'
        'Primário Incompleto'
        'Superior Completo'
        'Superior Incompleto')
    end
    object ComboBox2: TComboBox
      Left = 254
      Top = 121
      Width = 97
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 10
      Items.Strings = (
        'Casado'
        'Outro'
        'Separado'
        'Solteiro'
        'Viúvo')
    end
    object MaskEdit6: TMaskEdit
      Left = 377
      Top = 204
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999;1;_'
      MaxLength = 14
      TabOrder = 18
      Text = '(  )     -    '
    end
    object MaskEdit7: TMaskEdit
      Left = 515
      Top = 204
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999'
      MaxLength = 14
      TabOrder = 19
      Text = '(  )     -    '
    end
    object Edit5: TEdit
      Left = 85
      Top = 148
      Width = 512
      Height = 21
      MaxLength = 50
      TabOrder = 12
    end
    object Edit6: TEdit
      Left = 85
      Top = 176
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 13
    end
    object Edit8: TEdit
      Left = 50
      Top = 204
      Width = 150
      Height = 21
      MaxLength = 30
      TabOrder = 16
    end
    object MaskEdit5: TMaskEdit
      Left = 533
      Top = 176
      Width = 65
      Height = 21
      EditMask = '99999-999'
      MaxLength = 9
      TabOrder = 15
      Text = '     -   '
    end
    object Edit7: TEdit
      Left = 318
      Top = 178
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 14
    end
    object ComboBox4: TComboBox
      Left = 254
      Top = 204
      Width = 48
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 17
      Items.Strings = (
        'AC'
        'AL'
        'AM'
        'AP'
        'BA'
        'CE'
        'DF'
        'ES'
        'GO'
        'MA'
        'MG'
        'MS'
        'MT'
        'PA'
        'PB'
        'PE'
        'PI'
        'PR'
        'RJ'
        'RN'
        'RO'
        'RR'
        'RS'
        'SC'
        'SE'
        'SP'
        'TO')
    end
    object Edit2: TEdit
      Left = 50
      Top = 64
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 3
    end
    object Edit3: TEdit
      Left = 347
      Top = 64
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 6
    end
    object MaskEdit11: TMaskEdit
      Left = 50
      Top = 10
      Width = 45
      Height = 21
      EditMask = '99999;1; '
      MaxLength = 5
      ReadOnly = True
      TabOrder = 0
      Text = '     '
    end
    object Animate1: TAnimate
      Left = 5
      Top = 370
      Width = 599
      Height = 26
      Align = alBottom
      Active = False
      AutoSize = False
      CommonAVI = aviFindFile
      StopFrame = 8
      Visible = False
    end
  end
  object MainMenu1: TMainMenu
    Left = 6
    Top = 370
    object Associacao: TMenuItem
      Caption = 'Associação'
      object Fechar1: TMenuItem
        Caption = 'Fechar'
        OnClick = Fechar1Click
      end
      object Sair: TMenuItem
        Caption = 'Sair'
        ShortCut = 32883
        OnClick = SairClick
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
  end
end
