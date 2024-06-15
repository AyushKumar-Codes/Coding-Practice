import { Component } from '@angular/core';
import { FormGroup , FormControl,Validators } from '@angular/forms';
@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  loginForm = new FormGroup({
    email : new FormControl("",[Validators.required,Validators.email]),
    password : new FormControl("",[Validators.minLength(5)])
  });
  ema ="";
  validator(){
    
    alert(this.ema);
    
  }
  get emailv(){
   return this.loginForm.get('email');
  }

}
