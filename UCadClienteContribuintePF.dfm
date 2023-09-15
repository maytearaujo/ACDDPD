object Form2: TForm2
  Left = 212
  Top = 126
  Width = 620
  Height = 356
  AutoSize = True
  BorderIcons = []
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
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 277
    Width = 204
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
  object SpeedButton2: TSpeedButton
    Left = 204
    Top = 277
    Width = 204
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
  object SpeedButton3: TSpeedButton
    Left = 408
    Top = 277
    Width = 204
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
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 611
    Height = 276
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label1: TLabel
      Left = 438
      Top = 13
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
      Top = 40
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
      Top = 40
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
      Left = 480
      Top = 40
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
      Top = 93
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
      Top = 93
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
      Top = 120
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
      Top = 120
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
      Top = 120
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
      Top = 170
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
      Top = 174
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
      Top = 198
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
      Left = 505
      Top = 172
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
      Left = 471
      Top = 198
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
      Top = 197
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
      Top = 197
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
    object Label21: TLabel
      Left = 10
      Top = 224
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
    object Label13: TLabel
      Left = 10
      Top = 143
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
      Top = 66
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
      Top = 67
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
    object Label22: TLabel
      Left = 10
      Top = 12
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
    object Label2: TLabel
      Left = 306
      Top = 12
      Width = 69
      Height = 13
      Caption = 'Contribuinte'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object MaskEdit1: TMaskEdit
      Left = 524
      Top = 10
      Width = 70
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 0
      Text = '  /  /    '
      OnExit = MaskEdit1Exit
    end
    object MaskEdit2: TMaskEdit
      Left = 346
      Top = 36
      Width = 87
      Height = 21
      EditMask = 'ccc.ccc.ccc-cc;1;_'
      MaxLength = 14
      TabOrder = 3
      Text = '   .   .   -  '
    end
    object MaskEdit3: TMaskEdit
      Left = 508
      Top = 36
      Width = 89
      Height = 21
      EditMask = '999.999.999-99;1;_'
      MaxLength = 14
      TabOrder = 4
      Text = '   .   .   -  '
    end
    object Edit1: TEdit
      Left = 50
      Top = 36
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 1
    end
    object ComboBox1: TComboBox
      Left = 54
      Top = 115
      Width = 89
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 8
      Items.Strings = (
        'Feminino'
        'Masculino')
    end
    object Edit4: TEdit
      Left = 298
      Top = 89
      Width = 300
      Height = 21
      MaxLength = 30
      TabOrder = 7
    end
    object MaskEdit4: TMaskEdit
      Left = 83
      Top = 89
      Width = 68
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 6
      Text = '  /  /    '
      OnExit = MaskEdit4Exit
    end
    object ComboBox3: TComboBox
      Left = 453
      Top = 115
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 10
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
      Top = 116
      Width = 97
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 9
      Items.Strings = (
        'Casado'
        'Outro'
        'Separado'
        'Solteiro'
        'Viúvo')
    end
    object MaskEdit6: TMaskEdit
      Left = 377
      Top = 194
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999;1;_'
      MaxLength = 14
      TabOrder = 17
      Text = '(  )     -    '
    end
    object MaskEdit7: TMaskEdit
      Left = 516
      Top = 194
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999'
      MaxLength = 14
      TabOrder = 18
      Text = '(  )     -    '
    end
    object Edit5: TEdit
      Left = 69
      Top = 141
      Width = 528
      Height = 21
      MaxLength = 50
      TabOrder = 11
    end
    object Edit6: TEdit
      Left = 88
      Top = 167
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 12
    end
    object Edit8: TEdit
      Left = 54
      Top = 194
      Width = 150
      Height = 21
      MaxLength = 30
      TabOrder = 15
    end
    object MaskEdit5: TMaskEdit
      Left = 534
      Top = 167
      Width = 65
      Height = 21
      EditMask = '99999-999'
      MaxLength = 9
      TabOrder = 14
      Text = '     -   '
    end
    object Edit7: TEdit
      Left = 318
      Top = 169
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 13
    end
    object ComboBox4: TComboBox
      Left = 254
      Top = 194
      Width = 48
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 16
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
    object Edit9: TEdit
      Left = 111
      Top = 221
      Width = 488
      Height = 21
      MaxLength = 255
      TabOrder = 19
    end
    object Edit2: TEdit
      Left = 50
      Top = 62
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 2
    end
    object Edit3: TEdit
      Left = 346
      Top = 62
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 5
    end
    object Animate1: TAnimate
      Left = 5
      Top = 245
      Width = 601
      Height = 26
      Align = alBottom
      Active = False
      AutoSize = False
      CommonAVI = aviFindFile
      StopFrame = 8
      Visible = False
    end
    object Edit10: TEdit
      Left = 50
      Top = 10
      Width = 50
      Height = 21
      TabOrder = 21
    end
  end
  object MainMenu1: TMainMenu
    Left = 6
    Top = 194
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
